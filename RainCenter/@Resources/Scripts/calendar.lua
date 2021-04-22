-- Timezone code from http://lua-users.org/wiki/TimeZone
-- Compute the difference in seconds between local time and UTC.
local function get_timezone()
  local now = os.time()
  return os.difftime(now, os.time(os.date("!*t", now)))
end

local function has_value (tab, subval, val)
    for index, value in ipairs(tab) do
        if value[subval] == val then
            return true
        end
    end
    return false
end

local function EventTableFromString( events, input )
	-- Returns a table and the count of events
	events = {}
	event_count = 0
	
	while (string.find(input,'BEGIN:VEVENT')~=nil) do
		
		event_count = event_count + 1
		beginS,beginE = string.find(input,'BEGIN:VEVENT')
		endS,endE = string.find(input,'END:VEVENT')
		
		events[event_count] = {}
		events[event_count]['event_string'] = string.sub(input, beginE+1, endS-1)
		
		-- Event starting date
		events[event_count]['year'] = tonumber(string.match(events[event_count]['event_string'],'DTSTART.-(%d%d%d%d)%d%d%d%d'))
		events[event_count]['month'] = tonumber(string.match(events[event_count]['event_string'],'DTSTART.-%d%d%d%d(%d%d)%d%d'))
		events[event_count]['day'] = tonumber(string.match(events[event_count]['event_string'],'DTSTART.-%d%d%d%d%d%d(%d%d)'))
		
		-- Event starting time
		events[event_count]['allday'] = false
		if(string.match(events[event_count]['event_string'],'DTSTART;VALUE=DATE')~=nil) then
			events[event_count]['allday'] = true
		else
			events[event_count]['hour'] = tonumber(string.match(events[event_count]['event_string'],'DTSTART.-%d%d%d%d%d%d%d%dT(..)..'))
			events[event_count]['min'] = tonumber(string.match(events[event_count]['event_string'],'DTSTART.-%d%d%d%d%d%d%d%dT..(..)'))		
		end
		
		-- Event location
		events[event_count]['location'] = string.match(events[event_count]['event_string'],'LOCATION:(.-)%c')
		--Remove '\' from the location string
		if events[event_count]['location'] ~= nil then
		events[event_count]['location'] = string.gsub(events[event_count]['location'],'\\','')
		end
		
		-- Event name
		events[event_count]['summary'] = string.match(events[event_count]['event_string'],'SUMMARY:(.-)%c')
		
		-- Merge time variables as a single variable
		events[event_count]['timecode'] = os.time{year=events[event_count]['year'], month=events[event_count]['month'], day=events[event_count]['day'], hour=events[event_count]['hour'], min=events[event_count]['min']}
		-- Add time zone offset
		events[event_count]['timecode'] = events[event_count]['timecode'] + TZOffset
		-- Preserve only the date
		events[event_count]['daycode'] = RemoveTime(events[event_count]['timecode'])
		
		-- Process the remaining events
		input = string.sub(input, endE+1)
		
	end
	return events, event_count
end

local function RemovePastEvents( events )
	-- Remove past events from the table
	event_count = table.getn(events)
	future_event_count = event_count
	for i = event_count,1,-1 do
		if (events[i]['timecode'] < os.time()) then
			table.remove(events,i)
			future_event_count = future_event_count - 1
		end
	end
	return events, future_event_count
end

local function SortEventsTable( events )
	-- Sort the remaining entries in ascending order of timecode
	for i = 1, table.getn(events) do
		table.sort(events, function (left,right)
			return left['timecode'] < right['timecode']
		end)
	end
	return events
end

function FindLastSunday(input)
	--Find the last Sunday before input (or input if input is a Sunday)
	if tonumber(os.date('%w',input)) == 0 then
		return input
	else
		return FindLastSunday(input - 86400)
	end
end

function RemoveTime(input)
	-- Preserve only the date in the time
	return os.time{year=os.date('%Y',input),month=os.date('%m',input),day=os.date('%d',input)}
end

local function HideDate(input)
	WeekCount = SKIN:GetVariable('WeekCount',6)
	-- Hide if it is in the past month or two months ahead
	input_relative_month = (tonumber(os.date('%Y',input)) - tonumber(os.date('%Y')))*12 + tonumber(os.date('%m',input))
	if input_relative_month < tonumber(os.date('%m')) or input_relative_month >= tonumber(os.date('%m'))+2 then
		return true
	end
	--Hide if it is more than WeekCount weeks away
	LastSunday = RemoveTime(FindLastSunday(os.time()))
	if RemoveTime(input) - LastSunday > 86400 * (WeekCount * 7 - 1) then 
		return true 
	end
	return false
end

function Initialize()
	--Get timezone offset variable, if specified
	if (SKIN:GetVariable('TimeZoneOffset')~=nil) then
		TZOffset=tonumber(SKIN:GetVariable('TimezoneOffset'))*3600
	else
		TZOffset= get_timezone()
	end
end

function Update()

	FillHeader()
	FillCalendar()
	
end

function FillHeader()
	WeekCount = SKIN:GetVariable('WeekCount',6)
	if tonumber(os.date('%m',RemoveTime(FindLastSunday(os.time()))+(7*WeekCount-1)*86400)) ~= tonumber(os.date('%m')) then		-- Need to draw next month header if the last displayed date is not in this month
		-- Y position of the header
		MonthLast = os.time{year=os.date('%Y'),month=os.date('%m')+1,day=0}
		DaysAway = (MonthLast - RemoveTime(FindLastSunday(os.time()))) / 86400
		WeeksAway = math.floor(DaysAway / 7)
	end
end

function FillCalendar()
	--Get the values returned by WebParser
	EventWebParserMeasure = SKIN:GetMeasure('mEventCalendar')
	EventWebParserString = EventWebParserMeasure:GetStringValue()
	HolidayWebParserMeasure = SKIN:GetMeasure('mHolidayCalendar')
	HolidayWebParserString = HolidayWebParserMeasure:GetStringValue()
	
	--Constuct events table
	events = {}
	events = EventTableFromString(events, EventWebParserString)
	events = RemovePastEvents(events)
	events = SortEventsTable(events)
	
	holidays = {}
	holidays = EventTableFromString(holidays, HolidayWebParserString)
	holidays = RemovePastEvents(holidays)
	holidays = SortEventsTable(holidays)
	
	--Display dates on the skin
	time_counter = RemoveTime(FindLastSunday(os.time()))
	for i=1,6 do			-- iterate rows
		for j=0,6 do		-- iterate columns
			
			if HideDate(time_counter) == false then
				SKIN:Bang('!SetOption', 'D'..i..j, 'Text', tonumber(os.date('%d', time_counter)))		-- day of the month
				-- Style of the string
				if has_value(holidays,'daycode',time_counter) then		-- check if exists in holiday calendar
					SKIN:Bang('!SetOption', 'D'..i..j, 'MeterStyle', 'sDayDefault|sDayHoliday')
				end
				-- Position of the string
				SKIN:Bang('!SetOption', 'D'..i..j, 'X', '(#GlobalWidth#*('..j..'*0.35/3+0.15)+#GlobalOffsetX#-'..i..'*2)')
				if (tonumber(os.date('%Y',time_counter)) - tonumber(os.date('%Y')))*12 + tonumber(os.date('%m',time_counter)) > tonumber(os.date('%m')) then
					if tonumber(os.date('%w',os.time{year=os.date('%Y'),month=os.date('%m')+1,day=1}))==0 then	-- Remove extra padding if the next month starts on a Sunday
						SKIN:Bang('!SetOption', 'D'..i..j, 'Y', SKIN:ReplaceVariables('#Y'..i..'#-#Ydelta#'))
						SKIN:Bang('!SetOption', 'D'..i..j, 'MeterStyle', 'sDayDefault|sNextMonth')
					else
						SKIN:Bang('!SetOption', 'D'..i..j, 'Y', SKIN:ReplaceVariables('#Y'..i..'#'))
						SKIN:Bang('!SetOption', 'D'..i..j, 'MeterStyle', 'sDayDefault|sNextMonth')
					end
				else
					SKIN:Bang('!SetOption', 'D'..i..j, 'Y', SKIN:ReplaceVariables('#Y'..i..'#'))
				end
				-- Event circle of the string
				if has_value(events,'daycode',time_counter) then
					SKIN:Bang('!SetOption', 'EventCircleD'..i..j, 'Hidden', 0)
					-- Position of the circle
					SKIN:Bang('!SetOption', 'EventCircleD'..i..j, 'X', '(#GlobalWidth#*('..j..'*0.35/3+0.15)+#GlobalOffsetX#-'..i..'*2)')
					SKIN:Bang('!SetOption', 'EventCircleD'..i..j, 'Y', '([D'..i..j..':Y]+(#GlobalHeight#*0.0125))')
				end
			else
				SKIN:Bang('!SetOption', 'D'..i..j, 'Hidden', 0)
			end
			time_counter = time_counter + 86400
		end
	end
end

