[WEATHER.COMSuperParent]
Measure=WebParser
Group=WebParser
URL=#URL#
UpdateRate=600
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:81.0) Gecko/20100101 Firefox/81.0
Flags=Resync | NoCookies
DecodeCharacterReference=1
LogSubstringErrors=0
RegExp=(?siU)^(.*)$
StringIndex=1
OnConnectErrorAction=[!HideMeter WeatherContainer][!HideMeter Bg][!ShowMeterGroup nointernet][!Redraw][!DisableMeasureGroup WebParser]
FinishAction=[!EnableMeasureGroup Parents]


; ========================================
;                 LOCATION
; ========================================

[MeasureLocation]
Measure=WebParser
Group=WebParser | Parents
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#Location#
Group=WebParser
LogSubstringErrors=0

[MeasureCountry]
Measure=WebParser
Group=WebParser
Url=[MeasureLocation]
StringIndex=5
Substitute="null":"",'"':"","\":""
DecodeCodePoints=1

[MeasureCity]
Measure=WebParser
Group=WebParser
Url=[MeasureLocation]
StringIndex=7
Substitute="null":"",'"':"","\":""
DecodeCodePoints=1



; ========================================
;             CURRENT WEATHER
; ========================================


[MeasureCurrentObservations]
Measure=WebParser
Group=WebParser | Parents
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#CurrentObservations#
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup Time]

[MeasureIcon]
Measure=WebParser
Group=WebParser
Url=[MeasureCurrentObservations]
StringIndex=1

[MeasureHumidity]
Measure=WebParser
Group=WebParser
Url=[MeasureCurrentObservations]
StringIndex=5

[MeasureTemperature]
Measure=WebParser
Group=WebParser
Url=[MeasureCurrentObservations]
StringIndex=6

[MeasureFeelsLike]
Measure=WebParser
Group=WebParser
Url=[MeasureCurrentObservations]
StringIndex=8

[MeasureUpdate]
Measure=WebParser
Group=WebParser
Url=[MeasureCurrentObservations]
StringIndex=11
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[MeasureUpdateTimeFormat12H]
Measure=Time
DynamicVariables=1
TimeStamp=[MeasureUpdate]
TimeStampFormat=%H:%S
Format=%#I:%S %p
Substitute="AM":"am","PM":"pm"
Group=Time
Disabled=1

[MeasureVisibility]
Measure=WebParser
Group=WebParser
Url=[MeasureCurrentObservations]
StringIndex=12

[MeasureWindDirection]
Measure=WebParser
Group=WebParser
Url=[MeasureCurrentObservations]
StringIndex=13
DecodeCodePoints=1

[MeasureWindSpeed]
Measure=WebParser
Group=WebParser
Url=[MeasureCurrentObservations]
StringIndex=15
Substitute="\u002F":"/"

[MeasureCondition]
Measure=WebParser
Group=WebParser
Url=[MeasureCurrentObservations]
StringIndex=16
Substitute="\u002F":"/"
DecodeCodePoints=1

[MeasureUpdateTimeZone]
Measure=WebParser
Group=WebParser | Parents
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#UpdateTimeZone#
LogSubstringErrors=0

[MeasureUpdateTimeZoneAbbrev]
Measure=WebParser
Group=WebParser
Url=[MeasureUpdateTimeZone]
StringIndex=1



; ========================================
;              DAILY FORECAST
; ========================================



;============= TEMP MAX ==============


[MeasureDailyForecastTempMax]
Measure=WebParser
Group=WebParser | Parents
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#DailyForecastTempMax#
LogSubstringErrors=0

[MeasureTempMax1]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastTempMax]
StringIndex=1
Substitute="[":""
IfMatch=null
IfMatchAction=[!SetOption MeterFT1 Text "%2¢X"]
IfNotMatchAction=[!SetOption MeterFT1 Text "%1¢X/%2¢X"]

[MeasureTempMax2]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastTempMax]
StringIndex=2

[MeasureTempMax3]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastTempMax]
StringIndex=3

[MeasureTempMax4]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastTempMax]
StringIndex=4

[MeasureTempMax5]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastTempMax]
StringIndex=5

[MeasureTempMax6]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastTempMax]
StringIndex=6


;============== TEMP MIN ==============


[MeasureDailyForecastTempMin]
Measure=WebParser
Group=WebParser | Parents
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#DailyForecastTempMin#
LogSubstringErrors=0

[MeasureTempMin1]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastTempMin]
StringIndex=1
Substitute="[":""

[MeasureTempMin2]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastTempMin]
StringIndex=2

[MeasureTempMin3]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastTempMin]
StringIndex=3

[MeasureTempMin4]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastTempMin]
StringIndex=4

[MeasureTempMin5]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastTempMin]
StringIndex=5

[MeasureTempMin6]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastTempMin]
StringIndex=6


;============= DAYS ==================


[MeasureDailyForecastDate]
Measure=WebParser
Group=WebParser | Parents
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#DailyForecastDate#
LogSubstringErrors=0

[MeasureDate1]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastDate]
StringIndex=1
RegExpSubstitute=1
Substitute="^(.*)T.*$":"\1"

[MeasureDay1]
Measure=Time
TimeStamp=[MeasureDate1]
TimeStampFormat=%Y-%m-%d
Format=%a#CRLF#%h %d
FormatLocale=#Language#
DynamicVariables=1
Group=Time
Disabled=1

[MeasureDate2]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastDate]
StringIndex=2
RegExpSubstitute=1
Substitute="^(.*)T.*$":"\1"

[MeasureDay2]
Measure=Time
TimeStamp=[MeasureDate2]
TimeStampFormat=%Y-%m-%d
Format=%a#CRLF#%h %d
FormatLocale=#Language#
DynamicVariables=1
Group=Time
Disabled=1

[MeasureDate3]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastDate]
StringIndex=3
RegExpSubstitute=1
Substitute="^(.*)T.*$":"\1"

[MeasureDay3]
Measure=Time
TimeStamp=[MeasureDate3]
TimeStampFormat=%Y-%m-%d
Format=%a#CRLF#%h %d
FormatLocale=#Language#
DynamicVariables=1
Group=Time
Disabled=1

[MeasureDate4]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastDate]
StringIndex=4
RegExpSubstitute=1
Substitute="^(.*)T.*$":"\1"

[MeasureDay4]
Measure=Time
TimeStamp=[MeasureDate4]
TimeStampFormat=%Y-%m-%d
Format=%a#CRLF#%h %d
FormatLocale=#Language#
DynamicVariables=1
Group=Time
Disabled=1

[MeasureDate5]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastDate]
StringIndex=5
RegExpSubstitute=1
Substitute="^(.*)T.*$":"\1"

[MeasureDay5]
Measure=Time
TimeStamp=[MeasureDate5]
TimeStampFormat=%Y-%m-%d
Format=%a#CRLF#%h %d
FormatLocale=#Language#
DynamicVariables=1
Group=Time
Disabled=1

[MeasureDate6]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastDate]
StringIndex=6
RegExpSubstitute=1
Substitute="^(.*)T.*$":"\1"

[MeasureDay6]
Measure=Time
TimeStamp=[MeasureDate6]
TimeStampFormat=%Y-%m-%d
Format=%a#CRLF#%h %d
FormatLocale=#Language#
DynamicVariables=1
Group=Time
Disabled=1


;============= DAY PART ===============


[MeasureDailyForecastDayPart]
Measure=WebParser
Group=WebParser | Parents
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#DailyForecastDayPart#
LogSubstringErrors=0

[MeasureDayPartDay1]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastDayPart]
StringIndex=1
Substitute='"':"","[":"","null":"[MeasureDayPartNight1]","\":""
DynamicVariables=1
DecodeCodePoints=1

[MeasureDayPartNight1]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastDayPart]
StringIndex=2
DecodeCodePoints=1


;========= DAILY ICON CODES ===========


[MeasureDailyForecastIcon]
Measure=WebParser
Group=WebParser | Parents
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#DailyForecastIconCode#
LogSubstringErrors=0

[MeasureDailyIconDay1]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastIcon]
StringIndex=1
Substitute="[":"","null":"[MeasureDailyIconNight1]"
DynamicVariables=1

[MeasureDailyIconNight1]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastIcon]
StringIndex=2

[MeasureDailyIconDay2]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastIcon]
StringIndex=3

[MeasureDailyIconDay3]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastIcon]
StringIndex=5

[MeasureDailyIconDay4]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastIcon]
StringIndex=7

[MeasureDailyIconDay5]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastIcon]
StringIndex=9

[MeasureDailyIconDay6]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastIcon]
StringIndex=11



;===== DAILY PRECIPITATION CHANCE ======


[MeasureDailyForecastPrecip]
Measure=WebParser
Group=WebParser | Parents
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#DailyForecastPrecip#
LogSubstringErrors=0

[MeasureDailyPrecipDay1]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastPrecip]
StringIndex=1
Substitute="[":"","null":"[MeasureDailyPrecipNight1]"
DynamicVariables=1

[MeasureDailyPrecipNight1]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastPrecip]
StringIndex=2


; ========================================
;             HOURLY FORECAST
; ========================================



;=========== HOURLY ICON CODES ===========


[MeasureHourlyForecastIconCode]
Measure=WebParser
Group=WebParser | Parents
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#HourlyForecastIconCode#
LogSubstringErrors=0

[MeasureHourlyIcon1]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastIconCode]
StringIndex=1
Substitute="[":""

[MeasureHourlyIcon2]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastIconCode]
StringIndex=2

[MeasureHourlyIcon3]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastIconCode]
StringIndex=3

[MeasureHourlyIcon4]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastIconCode]
StringIndex=4

[MeasureHourlyIcon5]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastIconCode]
StringIndex=5

[MeasureHourlyIcon6]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastIconCode]
StringIndex=6


;============= HOURLY TEMP ================


[MeasureHourlyForecastTemp]
Measure=WebParser
Group=WebParser | Parents
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#HourlyForecastTemp#
LogSubstringErrors=0

[MeasureHourlyTemp1]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastTemp]
StringIndex=1
Substitute="[":""

[MeasureHourlyTemp2]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastTemp]
StringIndex=2

[MeasureHourlyTemp3]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastTemp]
StringIndex=3

[MeasureHourlyTemp4]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastTemp]
StringIndex=4

[MeasureHourlyTemp5]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastTemp]
StringIndex=5
Group=HourlyTemp

[MeasureHourlyTemp6]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastTemp]
StringIndex=6

;=============== HOURS ===================


[MeasureHourlyForecastHour]
Measure=WebParser
Group=WebParser | Parents
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#HourlyForecastHour#
LogSubstringErrors=0

[MeasureHourlyDate1]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastHour]
StringIndex=1
RegExpSubstitute=1
Substitute="^(.*)T(.*):.*$":"\1 \2"

[MeasureHour1]
Measure=Time
TimeStamp=[MeasureHourlyDate1]
Format=%#H:%S#CRLF#%a
TimeStampFormat=%Y-%m-%d %H:%S
FormatLocale=#Language#
DynamicVariables=1
Group=Time
Disabled=1

[MeasureHour1TimeFormat12H]
Measure=Time
DynamicVariables=1
TimeStamp=[MeasureHourlyDate1]
Format=%#I:%S %p#CRLF#%a
TimeStampFormat=%Y-%m-%d %H:%S
FormatLocale=#Language#
Substitute="AM":"am","PM":"pm"
Group=Time
Disabled=1

[MeasureHourlyDate2]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastHour]
StringIndex=2
RegExpSubstitute=1
Substitute="^(.*)T(.*):.*$":"\1 \2"

[MeasureHour2]
Measure=Time
TimeStamp=[MeasureHourlyDate2]
Format=%#H:%S#CRLF#%a
TimeStampFormat=%Y-%m-%d %H:%S
FormatLocale=#Language#
DynamicVariables=1
Group=Time
Disabled=1

[MeasureHour2TimeFormat12H]
Measure=Time
DynamicVariables=1
TimeStamp=[MeasureHourlyDate2]
Format=%#I:%S %p#CRLF#%a
TimeStampFormat=%Y-%m-%d %H:%S
FormatLocale=#Language#
Substitute="AM":"am","PM":"pm"
Group=Time
Disabled=1

[MeasureHourlyDate3]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastHour]
StringIndex=3
RegExpSubstitute=1
Substitute="^(.*)T(.*):.*$":"\1 \2"

[MeasureHour3]
Measure=Time
TimeStamp=[MeasureHourlyDate3]
Format=%#H:%S#CRLF#%a
TimeStampFormat=%Y-%m-%d %H:%S
FormatLocale=#Language#
DynamicVariables=1
Group=Time
Disabled=1

[MeasureHour3TimeFormat12H]
Measure=Time
DynamicVariables=1
TimeStamp=[MeasureHourlyDate3]
Format=%#I:%S %p#CRLF#%a
TimeStampFormat=%Y-%m-%d %H:%S
FormatLocale=#Language#
Substitute="AM":"am","PM":"pm"
Group=Time
Disabled=1

[MeasureHourlyDate4]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastHour]
StringIndex=4
RegExpSubstitute=1
Substitute="^(.*)T(.*):.*$":"\1 \2"

[MeasureHour4]
Measure=Time
TimeStamp=[MeasureHourlyDate4]
Format=%#H:%S#CRLF#%a
TimeStampFormat=%Y-%m-%d %H:%S
FormatLocale=#Language#
DynamicVariables=1
Group=Time
Disabled=1

[MeasureHour4TimeFormat12H]
Measure=Time
DynamicVariables=1
TimeStamp=[MeasureHourlyDate4]
Format=%#I:%S %p#CRLF#%a
FormatLocale=#Language#
TimeStampFormat=%Y-%m-%d %H:%S
Substitute="AM":"am","PM":"pm"
Group=Time
Disabled=1

[MeasureHourlyDate5]
Measure=WebParser
Group=WebParser
Url=[MeasureHourlyForecastHour]
StringIndex=5
RegExpSubstitute=1
Substitute="^(.*)T(.*):.*$":"\1 \2"

[MeasureHour5]
Measure=Time
TimeStamp=[MeasureHourlyDate5]
Format=%#H:%S#CRLF#%a
FormatLocale=#Language#
DynamicVariables=1
Group=Time
Disabled=1

[MeasureHour5TimeFormat12H]
Measure=Time
DynamicVariables=1
TimeStamp=[MeasureHourlyDate5]
Format=%#I:%S %p#CRLF#%a
TimeStampFormat=%Y-%m-%d %H:%S
FormatLocale=#Language#
Substitute="AM":"am","PM":"pm"
Group=Time
Disabled=1

[MeasureHour6]
Measure=Time
TimeStamp=[MeasureHourlyDate6]
Format=%#H:%S#CRLF#%a
;TimeStampFormat=%Y-%m-%d %H:%S
FormatLocale=#Language#
DynamicVariables=1
Group=Time
Disabled=1

[MeasureHour6TimeFormat12H]
Measure=Time
DynamicVariables=1
TimeStamp=[MeasureHourlyDate6]
Format=%#I:%S %p#CRLF#%a
;TimeStampFormat=%Y-%m-%d %H:%S
FormatLocale=#Language#
Substitute="AM":"am","PM":"pm"
Group=Time
Disabled=1

;========= DAILY CONDITIONS ===========


[MeasureDailyForecastCond]
Measure=WebParser
Group=WebParser | Parents
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#DailyForecastCondition#
LogSubstringErrors=0

[MeasureDailyCondDay1]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastCond]
StringIndex=1
Substitute='"':"","\u002F":"/","[":"","null":"[MeasureDailyCondNight1]","\":""
DynamicVariables=1
DecodeCodePoints=1

[MeasureDailyCondNight1]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastCond]
StringIndex=2
Substitute="\u002F":"/"
DecodeCodePoints=1

[MeasureDailyCondDay2]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastCond]
StringIndex=3
Substitute="\u002F":"/"
DecodeCodePoints=1

[MeasureDailyCondDay3]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastCond]
StringIndex=5
Substitute="\u002F":"/"
DecodeCodePoints=1

[MeasureDailyCondDay4]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastCond]
StringIndex=7
Substitute="\u002F":"/"
DecodeCodePoints=1

[MeasureDailyCondDay5]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastCond]
StringIndex=9
Substitute="\u002F":"/"
DecodeCodePoints=1

[MeasureDailyCondDay6]
Measure=WebParser
Group=WebParser
Url=[MeasureDailyForecastCond]
StringIndex=11
Substitute="\u002F":"/"
DecodeCodePoints=1

; ========================================
;          WEATHER PARAMETERS UNITS
; ========================================

[MeasureWeatherParametersUnits]
Measure=WebParser
Group=WebParser | Parents
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#WeatherParametersUnits#
LogSubstringErrors=0

[MeasureMph]
Measure=WebParser
Group=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=1
Substitute="\u002F":"/"
DecodeCodePoints=1

[MeasureKmh]
Measure=WebParser
Group=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=2
Substitute="\u002F":"/"
DecodeCodePoints=1

[MeasureIn]
Measure=WebParser
Group=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=3
DecodeCodePoints=1

[MeasureMb]
Measure=WebParser
Group=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=4
DecodeCodePoints=1

[MeasureMile]
Measure=WebParser
Group=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=5
DecodeCodePoints=1

[MeasureKm]
Measure=WebParser
Group=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=6
DecodeCodePoints=1