
[CurrentLocation]
Meter=String
MeasureName=MeasureCity
X=(#BoxWidth#*0.12)
Y=(#BoxWidth#*0.1)
StringAlign=left
MeterStyle=SemiBoldText
Text=%1
Container=WeatherContainer

[Temperature]
Meter=String
MeasureName=MeasureTemperature
X=(#BoxWidth#*0.08)
Y=(#BoxWidth#*0.2)
FontSize=(35*#RelativeScale#)
StringAlign=left
FontWeight=300
MeterStyle=RegularText
Text=%1�X
Container=WeatherContainer

[WeatherStatusIcon]
MeasureName=MeasureIcon
Meter=IMAGE
X=(#BoxWidth#*0.12)
Y=(#BoxWidth#*0.55)
W=(#BoxWidth#*0.15)
H=(#BoxWidth#*0.15)
ImagePath=#@#Graphics\Weather
Container=WeatherContainer

[WeatherStatus]
Group=ForecastD
Meter=String
MeasureName=MeasureIconText
X=(#BoxWidth#*0.12)
Y=(#BoxWidth#*0.68)
StringAlign=left
FontSize=(10*#RelativeScale#)
MeterStyle=SemiBoldText
Text=%1
Container=WeatherContainer

[HighLowTemp]
Group=ForecastD
Meter=String
MeasureName=MeasureTempMax1
MeasureName2=MeasureTempMin1
X=(#BoxWidth#*0.12)
Y=(#BoxWidth#*0.78)
FontSize=(10*#RelativeScale#)
StringAlign=left
MeterStyle=SemiBoldText
Text=H:%1�X L:%2�X
Container=WeatherContainer

[WeatherLastUpdate]
Meter=String
MeasureName=MeasureUpdate#TimeFormat#
MeasureName2=MeasureUpdateTimeZoneAbbrev
X=(#BoxWidth#*0.5)
Y=(#BoxWidth#*0.95)
FontSize=(8*#RelativeScale#)
StringAlign=CenterCenter
FontColor=255,255,255,200
MeterStyle=SemiBoldText
Text=%1 %2
Container=WeatherContainer







;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ MEASURES                                                                                             ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝







[WEATHER.COMSuperParent]
Measure=WebParser
URL=#URL#
UpdateRate=600
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:81.0) Gecko/20100101 Firefox/81.0
Flags=Resync | NoCookies
DecodeCharacterReference=1
LogSubstringErrors=0
RegExp=(?siU)^(.*)$
StringIndex=1
UpdateDivider=1
FinishAction=[!EnableMeasureGroup Parents][!UpdateMeasureGroup Weather][!UpdateMeter *][!Redraw]


; ========================================
;                 LOCATION
; ========================================

[MeasureLocation]
Measure=WebParser
Group=Parents | Weather
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#Location#
LogSubstringErrors=0
[MeasureCity]
Measure=WebParser
Url=[MeasureLocation]
StringIndex=7
Substitute="null":"",'"':"","\":""
DecodeCodePoints=1
Group=Weather



; ========================================
;             CURRENT WEATHER
; ========================================


[MeasureCurrentObservations]
Measure=WebParser
Group=Parents | Weather
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#CurrentObservations#
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup Time]

[MeasureIcon]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=1
Group=Weather
[MeasureIconText]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=1
Substitute="00":"Tornado","01":"Typhoon","02":"Typhoon","03":"Thunderstorm","04":"Thunderstorm","05":"Raining","06":"Hail Rain","07":"Snow Rain","08":"Hail Rain","09":"Lightly Raining","10":"Hail Rain","11":"Lightly Raining","12":"Raining","13":"Lightly Snowing","14":"Snowing","15":"Snow Storm","16":"Snowing","17":"Hail","18":"Hail","19":"Foggy","20":"Foggy","21":"Foggy","22":"Foggy","23":"Breezy","24":"Breezy","25":"Breezy Snow","26":"Cloudy","27":"Partly Cloudy","28":"Partly Cloudy","29":"Partly Cloudy","30":"Partly Cloudy","31":"Clear Night","32":"Sunny","33":"Partly Clear","34":"Partly Sunny","35":"Hail Raining","36":"Sunny","37":"Thunderstorm","38":"Thunderstorm","39":"Lightly Raining","40":"Raining Heavily","41":"Snowing","42":"Snowing Heavily","43":"Snowing Heavily","44":"NA","45":"Raining","46":"Snowing","47":"Thunderstorm"
Group=Weather

[MeasureTemperature]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=6
Group=Weather

[MeasureUpdate]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=11
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"
Group=Weather | WeatherUpdateTime

[MeasureUpdateTimeFormat12H]
Measure=Time
DynamicVariables=1
TimeStamp=[MeasureUpdate]
TimeStampFormat=%H:%S
Format=%I:%S %p
Substitute="AM":"am","PM":"pm"
Group=WeatherUpdateTime | TimeFormat12H | Weather
Disabled=1

[MeasureUpdateTimeZone]
Measure=WebParser
Group=Parents | Weather
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#UpdateTimeZone#
LogSubstringErrors=0
Group=Weather | WeatherUpdateTime

[MeasureUpdateTimeZoneAbbrev]
Measure=WebParser
Url=[MeasureUpdateTimeZone]
StringIndex=1
Group=Weather | WeatherUpdateTime



; ========================================
;              DAILY FORECAST
; ========================================





;============= TEMP MAX ==============


[MeasureDailyForecastTempMax]
Measure=WebParser
Group=Parents | Weather
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#DailyForecastTempMax#
LogSubstringErrors=0
Group=Weather

[MeasureTempMax1]
Measure=WebParser
Url=[MeasureDailyForecastTempMax]
StringIndex=1
Substitute="[":"","null":"-"
Group=Weather

;============== TEMP MIN ==============


[MeasureDailyForecastTempMin]
Measure=WebParser
Group=Parents | Weather
URL=[WEATHER.COMSuperParent]
Disabled=1
StringIndex=1
RegExp=#DailyForecastTempMin#
LogSubstringErrors=0
Group=Weather

[MeasureTempMin1]
Measure=WebParser
Url=[MeasureDailyForecastTempMin]
StringIndex=1
Substitute="[":""
Group=Weather