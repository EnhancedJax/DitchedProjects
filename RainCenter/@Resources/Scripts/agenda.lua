-- Timezone code from http://lua-users.org/wiki/TimeZone
-- Compute the difference in seconds between local time and UTC.
local function get_timezone()
  local now = os.time()
  return os.difftime(now, os.time(os.date("!*t", now)))
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
			events[event_count]['hour'] = 12
			events[event_count]['min'] = 0
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

function Initialize()
	--Get timezone offset variable, if specified
	if (SKIN:GetVariable('TimeZoneOffset')~=nil) then
		TZOffset=tonumber(SKIN:GetVariable('TimezoneOffset'))*3600
	else
		TZOffset= get_timezone()
	end
end

function Update()
		
	--Get the values returned by WebParser
	EventWebParserMeasure = SKIN:GetMeasure('mEventCalendar')
	EventWebParserString = EventWebParserMeasure:GetStringValue()
	
	events = {}
	events, event_count = EventTableFromString(events, EventWebParserString)
	events, future_event_count = RemovePastEvents(events)
	events = SortEventsTable(events)
				
	-- Display info on the skin using !SetOption
	for i = 1,5 do
		if (events[i]['summary']==nil) then
			SKIN:Bang('!SetOption', 'EventBackground'..i, 'Hidden', 1)
		else
			SKIN:Bang('!SetOption', 'EventBackground'..i, 'Hidden', 0)
			SKIN:Bang('!SetOption', 'EventWeekday'..i, 'Text', os.date('%a',events[i]['timecode']))
			SKIN:Bang('!SetOption', 'EventDay'..i, 'Text', tonumber(os.date('%d',events[i]['timecode'])))
			if (events[i]['allday']==false) then 
				SKIN:Bang('!SetOption', 'EventTime'..i, 'Text', os.date('%H:%M',events[i]['timecode']))
			else
				SKIN:Bang('!SetOption', 'EventTime'..i, 'Text', 'Full Day') 
			end
			SKIN:Bang('!SetOption', 'EventName'..i, 'Text', events[i]['summary'])
			SKIN:Bang('!SetOption', 'EventLocation'..i, 'Text', events[i]['location'])
		end
	end
	
end

