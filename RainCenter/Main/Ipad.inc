;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ SECTION SECTION SECTION                                                                              ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[Variables]
@Include=#@#variables.inc
@Include2=#@#bluetooth\bluetoothVariables.inc
@include3=#@#bluetooth\bluetooth.inc
@IncludeReg=#@#RegExp.inc

BT_OnBluetoothCheck_On=[!SetVariable Bluetooth 0179FE][!UpdateMeter MiscBox][!UpdateMeasure AirplaneStatus][!Redraw]
BT_OnBluetoothCheck_Off=[!SetVariable Bluetooth #ColorMode3#][!UpdateMeter MiscBox][!UpdateMeasure AirplaneStatus][!Redraw]
Bluetooth=
Internet=
Airplane=
VolumeBarY=
VolumeBarX=
VolumeBarW=(150*#RelativeScale#)
Prevolume=
BrightnessBarY=
Formula=<EnterFormula>
FormulaHistory=
SuffleX=(85*#RelativeScale#)
SuffleY=(110*#RelativeScale#)
QuadA=a
QuadB=b
QuadC=c
LastClip=
ClipboardN=
AMPM=
Location=(?siU)\\"getSunV3LocationPointUrlConfig\\":.*{\\"location\\":{\\"latitude\\":(.*),\\"longitude\\":(.*),.*,\\"adminDistrict\\":(.*),\\"adminDistrictCode\\":(.*),.*,\\"country\\":(.*),\\"countryCode\\":(.*),.*,\\"displayName\\":(.*),.*}

CurrentObservations=(?siU)\\"getSunV3CurrentObservationsUrlConfig\\":.*{\\"cloudCeiling\\":.*,\\"cloudCoverPhrase\\":\\".*\\",\\"dayOfWeek\\":\\".*\\",\\"dayOrNight\\":\\".*\\",\\"expirationTimeUtc\\":.*,\\"iconCode\\":(.*),\\"iconCodeExtend\\":.*,\\"obsQualifierCode\\":.*,\\"obsQualifierSeverity\\":.*,\\"precip1Hour\\":.*,\\"precip6Hour\\":.*,\\"precip24Hour\\":.*,\\"pressureAltimeter\\":(.*),\\"pressureChange\\":(.*),\\"pressureMeanSeaLevel\\":.*,\\"pressureTendencyCode\\":.*,\\"pressureTendencyTrend\\":\\"(.*)\\",\\"relativeHumidity\\":(.*),\\"snow1Hour\\":.*,\\"snow6Hour\\":.*,\\"snow24Hour\\":.*,\\"sunriseTimeLocal\\":.*,\\"sunriseTimeUtc\\":.*,\\"sunsetTimeLocal\\":.*,\\"sunsetTimeUtc\\":.*,\\"temperature\\":(.*),\\"temperatureChange24Hour\\":.*,\\"temperatureDewPoint\\":(.*),\\"temperatureFeelsLike\\":(.*),\\"temperatureHeatIndex\\":.*,\\"temperatureMax24Hour\\":.*,\\"temperatureMaxSince7Am\\":.*,\\"temperatureMin24Hour\\":.*,\\"temperatureWindChill\\":.*,\\"uvDescription\\":\\"(.*)\\",\\"uvIndex\\":(.*),\\"validTimeLocal\\":\\"(.*)\\",\\"validTimeUtc\\":.*,\\"visibility\\":(.*),\\"windDirection\\":.*,\\"windDirectionCardinal\\":\\"(.*)\\",\\"windGust\\":(.*),\\"windSpeed\\":(.*),\\"wxPhraseLong\\":\\"(.*)\\",\\"wxPhraseMedium\\":.*,\\"wxPhraseShort\\":.*}

UpdateTimeZone=(?siU)\\"getSunV3CurrentDateTimeByGeocodeUrlConfig\\":{\\"geocode:.*\\":{.*,\\"data\\":{\\"dateTime\\":\\".*\\",\\"ianaTimeZone\\":\\".*\\",\\"timeZoneAbbreviation\\":\\"(.*)\\"}

DailyForecastTempMax=(?siU)\\"getSunV3DailyForecastWithHeadersUrlConfig\\":.*{.*\\"temperatureMax\\":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

DailyForecastTempMin=(?siU)\\"getSunV3DailyForecastWithHeadersUrlConfig\\":.*{.*\\"temperatureMin\\":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

DailyForecastDayPart=(?siU)\\"getSunV3DailyForecastWithHeadersUrlConfig\\":.*{.*\\"daypartName\\":(.*),\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\"

DailyForecastIconCode=(?siU)\\"getSunV3DailyForecastWithHeadersUrlConfig\\":.*{.*\\"iconCode\\":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*
VolumeColor=B3B3B3
TrayWidth=60
Shutdown=sleep
ShutdownAction=[shutdown -h]

[GetTimeFormat]
Measure=String
String=#TimeFormat#
IfMatch=TimeFormat12H
IfMatchAction=[!SetVariable AMPM """[GetAMPM]"""][!EnableMeasureGroup TimeFormat12H][!DisableMeasureGroup TimeFormat24H][!DisableMeasure #CURRENTSECTION#]
[GetIfShowUpdate]
Measure=String
String=#ShowWeatherUpdate#
IfMatch=0
IfMatchAction=[!DisableMeasureGroup WeatherUpdateTime][!HideMeter WeatherLastUpdate][!DisableMeasure #CURRENTSECTION#]

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ Header                                                                                               ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

;;==========================================================================================================================================================

[BatteryBackground]
Meter=Image
ImageName=#@#Graphics\Icons\Battery.png
Y=(#ScreenAreaHeight#*7/100)
X=(#ScreenAreaWidth#*97/100-25)
H=(25)

[BatteryFill]
Meter=Shape
X=r
Y=r
DynamicVariables=1
UpdateDivider=1
Shape=Rectangle (17/2/128*25),(91/2/128*25),((193*[mBattery]/100)/2/128*25),(73/2/128*25),1,1 | StrokeWidth 0 | Fill Color FFFFFF

;;==========================================================================================================================================================

[mBattery]
Measure=Plugin
Plugin=PowerPlugin
PowerState=Percent
UpdateDivider=1

[BatteryText]
Meter=String
MeasureName=mBattery
UpdateDivider=1
Text=%1%
StringAlign=RightCenter
MeterStyle=SemiBoldText
X=(-2)r
Y=(12.5)r
H=(25)
W=(40)

;;==========================================================================================================================================================

[WifiIcon]
 Meter=IMAGE
 MeasureName=mIconCalc
 MeasureName2=mPercent
 MeasureName3=mSSID
 MeasureName4=mAUTH
 ImageName=#@#Graphics\Icons\Wifi\%1.png
 W=(20)
 H=(20)
 X=(-66)r
 Y=(-12.5)r
 SolidColor=0,0,0,1
 DynamicVariables=1
 AntiAlias=1
 UpdateDivider=1
 ToolTipText="%3: %2%#CRLF#%4"
 LeftMouseUpAction=["ms-availablenetworks:"]
 RightMouseUpAction=["control.exe" "ncpa.cpl"]

[mPercent]
Measure=PLUGIN
Plugin=WifiStatus
WiFiInfoType=QUALITY
UpdateDivider=1
Substitute=" ":""

[mSSID]
Measure=PLUGIN
Plugin=WifiStatus
WiFiInfoType=SSID
 UpdateDivider=1
Substitute="-1":"Not Connected"

[mAUTH]
Measure=PLUGIN
Plugin=WifiStatus
WiFiInfoType=AUTH
 UpdateDivider=1
Substitute="-1":""

[mIconCalc]
Measure=CALC
Formula=((100 >= mPercent) && (90 <= mPercent) ? 9 : ((90 > mPercent) && (60 <= mPercent) ? 9 : ((60 > mPercent) && (30 < mPercent) ? 6 : ((30 >= mPercent) && (10 < mPercent) ? 3 : ((mPercent <= 10) && (0 < mPercent) ? 3 : 2)))))
UpdateDivider=1

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ LeftSide                                                                                             ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[MeasureTime]
Measure=Time
Format=%H:%M
UpdateDivider=1
Group=TimeFormat24H

[MeasureSec]
Measure=Time
Format=%S
UpdateDivider=1

[MeasureTimeTimeFormat12H]
Measure=Time
Format=%I:%M
UpdateDivider=1
Disabled=1
Group=TimeFormat12H

[GetAMPM]
Measure=Time
Format=%p
UpdateDivider=1
Disabled=1
Group=TimeFormat12H

[MeasureDate]
Measure=Time
Format=%A, %B %d
FormatLocale=Local
UpdateDivider=1
;Substitute="Mon":"1","Tue":"2","Wed":"3","Thu":"4","Fri":"5","Sat":"6","Sun":"7","Jan":"01","Feb":"02","Mar":"03","Apr":"04","May":"05","Jun":"06","Jul":"07","Aug":"08","Sep":"09","Oct":"10","Nov":"11","Dec":"12"

[Time]
Meter=String
X=(#ScreenAreaWidth#*3/100)
Y=(#ScreenAreaHeight#*7/100)
MeterStyle=SemiBoldText
StringAlign=Left
DynamicVariables=1
UpdateDivider=1
Text=[MeasureTime#TimeFormat#] [MeasureSec] #AMPM#
InlinePattern=^[MeasureTime#TimeFormat#]
InlineSetting=Size | (47*#RelativeScale#)
InlinePattern2=[MeasureSec]$
InlineSetting2=Size | (10*#RelativeScale#)
[Date]
Meter=String
MeasureName=MeasureDate
UpdateDivider=1
X=r
Y=5R
MeterStyle=RegularText
StringAlign=Left
FontSize=(18*#RelativeScale#)
Text=%1

;;==========================================================================================================================================================

[WeatherBox]
Meter=Shape
X=r
Y=(#ScreenAreaHeight#*22/100)
Shape=Rectangle 0,0,(#BoxWidth#),(#BoxWidth#),(#CornerSize#*2),(#CornerSize#*2) | StrokeWidth 0 | Fill LinearGradient Skyblue
Skyblue=270 | 2889B4 ; 0.0 | 54A0C7 ; 1.0

[WeatherContainer]
Meter=String
X=r
Y=r
W=(#BoxWidth#)
H=(#BoxWidth#)
SolidColor=0,0,0,255

[ClipboardBox]
Meter=Shape
X=10R
Y=r
Shape=Rectangle 0,0,(#BoxWidth#),(#BoxWidth#),(#CornerSize#*2),(#CornerSize#*2) | StrokeWidth 0 | Fill LinearGradient OrangeYellow
Shape2=Rectangle 0,0,(#BoxWidth#),(#BoxWidth#),(#CornerSize#*2),(#CornerSize#*2) | StrokeWidth 0 | Fill Color #ColorMode2#,25
;Shape2=Rectangle 7,7,(#BoxWidth#-14),(#BoxWidth#-14),((#CornerSize#*2)/2),((#CornerSize#*2)/2) | StrokeWidth 2 | Fill color 0,0,0,0 | Stroke LinearGradient OrangeYellow
OrangeYellow=270 | FFDB4C ; 0.0 | FFCC00 ; 1.0

[ClipboardContainer]
Meter=String
X=r
Y=r
W=(#BoxWidth#)
H=(#BoxWidth#)
SolidColor=0,0,0,255

[SpotifyBox]
Meter=Shape
X=(-#BoxWidth#-10)r
Y=10R
Shape=Rectangle 0,0,(#BoxWidth#*2+10),(#BoxWidth#),(#CornerSize#*2),(#CornerSize#*2) | StrokeWidth 0 | Fill radialgradient Skyblue
Shape2=Rectangle 0,0,(#BoxWidth#*2+10),(#BoxWidth#),(#CornerSize#*2),(#CornerSize#*2) | StrokeWidth 0 | Fill color 40,40,40
Shape3=Rectangle 0,0,(#BoxWidth#*2+10),(#BoxWidth#),(#CornerSize#*2),(#CornerSize#*2) | StrokeWidth 0 | Fill color B3B3B3
Shape4=Rectangle 0,(#BoxWidth#-5),(#BoxWidth#*2+10),4 | StrokeWidth 0
Shape5=Rectangle 0,(#BoxWidth#-5),((#BoxWidth#*2+10)*[Percent]),6 | StrokeWidth 0
Shape6=Combine Shape2 | Intersect Shape4
Shape7=Combine Shape3 | Intersect Shape5
Skyblue=0,(-#BoxWidth#/2+65/2),0,0,(70*#RelativeScale#),(70*#RelativeScale#) | [ChameleonBG1] ; 0.0 | #ColorMode2# ; 1.0
DynamicVariables=1
UpdateDivider=1

[EmptySpotifyBox]
Meter=Shape
X=r
Y=r
Shape=Rectangle 0,0,(#BoxWidth#*2+10),(#BoxWidth#),(#CornerSize#*2),(#CornerSize#*2) | StrokeWidth 0 | Fill color #ColorMode2#
Group=EmptySpotifyBox
Hidden=1

[SpotifyContainer]
Meter=String
X=r
Y=r
W=(#BoxWidth#*2+10)
H=(#BoxWidth#)
SolidColor=0,0,0,255

[EmptyIcon]
Meter=Image
ImageName=#@#Graphics\Icons\EmptyPlayer.png
X=([SpotifyBox:X]+#BoxWidth#-128/2)
Y=([SpotifyBox:Y]+#BoxWidth#/2-128/2)
Group=EmptySpotifyBox
DynamicVariables=1
Hidden=1

[ChameleonFile]
Measure=Plugin
Plugin=Chameleon
Type=File
Path=#@#Graphics\Backgrounds\Cover.png
Group=Chameleon
[ChameleonBG1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonFile
Group=Chameleon
Color=Average

[CalculatorBox]
Meter=Shape
X=(-#BoxWidth#+128/2)r
Y=(#BoxWidth#/2+128/2+10)r
Shape=Rectangle 0,0,(#BoxWidth#*2+10),(#BoxWidth#),(#CornerSize#*2),(#CornerSize#*2) | StrokeWidth 0 | Fill color #ColorMode2#,200
Shape2=Rectangle (#BoxWidth#*1/10),(#BoxWidth#*1/10),((#BoxWidth#*2+10)*9/10),(#BoxWidth#*4/10),((#CornerSize#*2)/2),((#CornerSize#*2)/2) | StrokeWidth 2 | Fill color 0,0,0,0 | Stroke Color 50,50,50
Shape3=Rectangle (#BoxWidth#*1/10),(#BoxWidth#*6/10),((#BoxWidth#*2+10)*9/10),(#BoxWidth#*3/10),((#CornerSize#*2)/2),((#CornerSize#*2)/2) | StrokeWidth 2 | Fill color 0,0,0,0 | Stroke Color 50,50,50

[CalculatorContainer]
Meter=String
X=r
Y=r
W=(#BoxWidth#*2+10)
H=(#BoxWidth#)
SolidColor=0,0,0,255

;;==========================================================================================================================================================

@includeWeather=#@#Weather.inc

;;==========================================================================================================================================================

@include4=#@#Clipboard.inc

;;==========================================================================================================================================================

@include5=#@#Calculator.inc

;;==========================================================================================================================================================

@include6=#@#MusicPlayer.inc

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ RightSide                                                                                            ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

@Include7=#@#Rightside.inc

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ Bottom Bar                                                                                           ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

@Include8=#@##BottomBar#.inc

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ CUSTOM CONTEXT MENU                                                                                  ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝