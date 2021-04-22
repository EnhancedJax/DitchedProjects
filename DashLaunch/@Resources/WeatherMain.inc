;=============================== MEASURES CALC==================================

[MeasureShowForecast]
Measure=Calc
Formula=#Extd#
IfCondition=(#CURRENTSECTION#=0)
IfTrueAction=[!ShowMeterGroup "ForecastD"][!HideMeterGroup "ForecastH"][!Redraw]
IfCondition2=(#CURRENTSECTION#=1)
IfTrueAction2=[!ShowMeterGroup "ForecastH"][!HideMeterGroup "ForecastD"][!Redraw]
DynamicVariables=1
UpdateDivider=-1

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ TOP WEATHER                                                                                          ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[Bg]
Meter=Shape
Group=Forecast
;Shape=Rectangle (#size#*0.5),(#size#*0.5),(#size#*580),(#size#*360) | Fill Color #FillColor# | StrokeWidth 0
Shape=Path shapepath | Fill Color #FillColor# | StrokeWidth 0
shapepath=0,0 | LineTo (0.65*645),0 | LineTo (0.65*645-0.65*11),(0.65*360) | LineTo (-0.65*11),(0.65*360)
Shape2=Rectangle (-0.65*11),(0.65*200),(0.65*645),(0.65*(360-195)) | Fill Color #FillColor# | StrokeWidth 0
Shape3=Path shapepath | Fill Color 0,0,0 | StrokeWidth 0
Shape4=Combine Shape2 | Intersect Shape3
X=r
y=5R
UpdateDivider=-1

[WeatherContainer]
Meter=String
X=(-0.65*10)r
Y=r
W=(0.65*645)
H=(0.65*360)
SolidColor=255,255,255
UpdateDivider=-1

[MeterIcon]
MeasureName=MeasureIcon
Meter=IMAGE
ImagePath=#@#Graphics\WeatherForecast
X=(#size#*360)
Y=(#size#*50)
W=(#size#*110)
H=(#size#*110)
Container=WeatherContainer

[MeterTEMP]
Meter=String
MeasureName=MeasureTemperature
X=(#size#*525)
Y=(#size#*75)
W=(#size#*100)
H=(#size#*50)
FontSize=(#size#*30)
FontColor=#FontColor#
StringStyle=normal
StringEffect=SHADOW
FontFace=#Font#
StringAlign=center
FontEffectColor=#FontEffectColor#
AntiAlias=1
Text=%1�X
Container=WeatherContainer

[MeterPP]
Meter=String
MeasureName=MeasureDailyPrecipDay1
X=(#size#*505)
Y=(#size#*125)
W=(#size#*70)
H=(#size#*50)
FontSize=(#size#*18)
FontColor=#FontColor2#
StringStyle=normal
StringEffect=SHADOW
FontFace=#Font#
StringAlign=left
FontEffectColor=#FontEffectColor#
AntiAlias=1
Text=%1 %
Container=WeatherContainer

[drop]
Meter=IMAGE
ImageName=#@#drop.png
X=(#size#*470)
Y=(#size#*109)
W=(#size#*45)
H=(#size#*64)
Container=WeatherContainer

[MeterCond]
Meter=String
MeasureName=MeasureCondition
X=(#size#*415)
Y=(#size#*150)
W=(#size#*270)
H=(#size#*35)
FontSize=(#size#*18)
FontColor=#FontColor#
StringStyle=normal
StringEffect=SHADOW
FontFace=#Font#
StringAlign=center
FontEffectColor=#FontEffectColor#
AntiAlias=1
ClipString=1
ToolTipText=[MeasureCondition]
DynamicVariables=1
Container=WeatherContainer

[Windicon]
Meter=IMAGE
ImageName=#@#wind.png
X=(#size#*15)
Y=(#size#*60)
W=(#size#*38)
H=(#size#*38)
Container=WeatherContainer

[MeterWind]
Meter=String
MeasureName=MeasureWindDirection
MeasureName2=MeasureWindSpeed
MeasureName3=Measure#SpeedUnit#
X=(#size#*60)
Y=(#size#*70)
W=(#size#*200)
H=(#size#*30)
FontSize=(#size#*14)
FontColor=#FontColor#
StringStyle=normal
StringEffect=SHADOW
FontFace=#Font#
StringAlign=left
FontEffectColor=#FontEffectColor#
AntiAlias=1
ClipString=1
Text=%1 %2 %3 
Container=WeatherContainer

[Humdicon]
Meter=IMAGE
ImageName=#@#humd.png
X=(#size#*15)
Y=(#size#*115)
W=(#size#*30)
H=(#size#*30)
Container=WeatherContainer

[MeterHUM]
Meter=String
MeasureName=MeasureHumidity
X=(#size#*60)
Y=(#size#*118)
W=(#size#*200)
H=(#size#*30)
FontSize=(#size#*14)
FontColor=#FontColor#
StringStyle=normal
StringEffect=SHADOW
FontFace=#Font#
StringAlign=left
FontEffectColor=#FontEffectColor#
AntiAlias=1
ClipString=1
Text=%1 %
Container=WeatherContainer

[MeterUpdate]
Meter=String
MeasureName=MeasureUpdate#TimeFormat#
MeasureName2=MeasureUpdateTimeZoneAbbrev
X=(#size#*575)
Y=(#size#*10)
W=(#size#*265)
H=(#size#*30)
FontSize=(#size#*14)
FontColor=#FontColor2#
StringEffect=SHADOW
FontFace=#Font#
StringAlign=right
FontEffectColor=#FontEffectColor#
AntiAlias=1
ClipString=1
Text=Last Update: %1 %2
Container=WeatherContainer

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ STYLES                                                                                               ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

;Date
[BottomLayerStyle1]
Group=ForecastD
Y=(#size#*200)
W=(#size#*80)
H=(#size#*50)
FontSize=(#size#*14)
FontColor=#FontColor#
StringEffect=SHADOW
FontFace=#Font#
StringAlign=center
FontEffectColor=#FontEffectColor#
AntiAlias=1
ClipString=1
StringCase=Proper
Container=WeatherContainer

;Icon
[BottomLayerStyle2]
Group=ForecastD
Y=32r
W=(#size#*50)
H=(#size#*50)
ImagePath=#@#Graphics\WeatherForecast
DynamicVariables=1
Container=WeatherContainer

;Temperature
[BottomLayerStyle3]
Group=ForecastD
Y=35r
W=(#size#*70)
H=(#size#*50)
FontSize=(#size#*14)
FontColor=#FontColor#
StringStyle=normal
StringEffect=SHADOW
FontFace=#Font#
StringAlign=center
FontEffectColor=#FontEffectColor#
AntiAlias=1
Text=%1�X/%2�X
InlineSetting=Color | #FontColor2#
InlinePattern=/
Container=WeatherContainer

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ DAILY FORECAST                                                                                       ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[MeterFWDay1]
Meter=String
MeasureName=MeasureDayPartDay1
X=(#size#*50)
MeterStyle=BottomLayerStyle1
[MeterFIcon1]
MeasureName=MeasureDailyIconDay1
Meter=IMAGE
X=(#size#*(26+95*0))
ToolTipText=[MeasureDailyCondDay1]
MeterStyle=BottomLayerStyle2
[MeterFT1]
Meter=String
MeasureName=MeasureTempMax1
MeasureName2=MeasureTempMin1
X=(#size#*(50+95*0))
MeterStyle=BottomLayerStyle3

[MeterFWDay2]
Meter=String
MeasureName=MeasureDay2
X=(#size#*145)
MeterStyle=BottomLayerStyle1
[MeterFIcon2]
MeasureName=MeasureDailyIconDay2
Meter=IMAGE
X=(#size#*(26+95*1))
ToolTipText=[MeasureDailyCondDay2]
MeterStyle=BottomLayerStyle2
[MeterFT2]
Meter=String
MeasureName=MeasureTempMax2
MeasureName2=MeasureTempMin2
X=(#size#*(50+95*1))
MeterStyle=BottomLayerStyle3

[MeterFWDay3]
Meter=String
MeasureName=MeasureDay3
X=(#size#*240)
MeterStyle=BottomLayerStyle1
[MeterFIcon3]
MeasureName=MeasureDailyIconDay3
Meter=IMAGE
X=(#size#*(26+95*2))
ToolTipText=[MeasureDailyCondDay1]
MeterStyle=BottomLayerStyle2
[MeterFT3]
Meter=String
MeasureName=MeasureTempMax3
MeasureName2=MeasureTempMin3
X=(#size#*(50+95*2))
MeterStyle=BottomLayerStyle3

[MeterFWDay4]
Meter=String
MeasureName=MeasureDay4
X=(#Size#*335)
MeterStyle=BottomLayerStyle1
[MeterFIcon4]
MeasureName=MeasureDailyIconDay4
Meter=IMAGE
X=(#size#*(26+95*3))
ToolTipText=[MeasureDailyCondDay4]
MeterStyle=BottomLayerStyle2
[MeterFT4]
Meter=String
MeasureName=MeasureTempMax4
MeasureName2=MeasureTempMin4
X=(#size#*(50+95*3))
MeterStyle=BottomLayerStyle3

[MeterFWDay5]
Meter=String
MeasureName=MeasureDay5
X=(#size#*430)
MeterStyle=BottomLayerStyle1
[MeterFIcon5]
MeasureName=MeasureDailyIconDay5
Meter=IMAGE
X=(#size#*(26+95*4))
ToolTipText=[MeasureDailyCondDay5]
MeterStyle=BottomLayerStyle2
[MeterFT5]
Meter=String
MeasureName=MeasureTempMax5
MeasureName2=MeasureTempMin5
X=(#size#*(50+95*4))
MeterStyle=BottomLayerStyle3

[MeterFWDay6]
Meter=String
MeasureName=MeasureDay6
X=(#size#*525)
MeterStyle=BottomLayerStyle1
[MeterFIcon6]
MeasureName=MeasureDailyIconDay6
Meter=IMAGE
X=(#size#*(26+95*5))
ToolTipText=[MeasureDailyCondDay6]
MeterStyle=BottomLayerStyle2
[MeterFT6]
Meter=String
MeasureName=MeasureTempMax6
MeasureName2=MeasureTempMin6
X=(#size#*(50+95*5))
MeterStyle=BottomLayerStyle3

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ STYLES                                                                                               ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

;Date
[BottomLayerStyle4]
Group=ForecastH
Y=(#size#*200)
W=(#size#*83)
H=(#size#*50)
FontSize=(#size#*14)
FontColor=#FontColor#
StringEffect=SHADOW
FontFace=#Font#
StringAlign=center
FontEffectColor=#FontEffectColor#
AntiAlias=1
ClipString=1
InlineSetting=Color | #FontColor2#
InlinePattern=.*#CRLF#(.*)
InlineSetting2=Case | Proper
InlinePattern2=.*#CRLF#(.*)
Hidden=1
Container=WeatherContainer

;Icon
[BottomLayerStyle5]
Group=ForecastH
Y=32r
W=(#size#*50)
H=(#size#*50)
ImagePath=#@#Graphics\WeatherForecast
DynamicVariables=1
Hidden=1
Container=WeatherContainer

;Temperature
[BottomLayerStyle6]
Group=ForecastH
Y=35r
W=(#size#*70)
H=(#size#*50)
FontSize=(#size#*14)
FontColor=#FontColor#
StringStyle=normal
StringEffect=SHADOW
FontFace=#Font#
StringAlign=center
FontEffectColor=#FontEffectColor#
AntiAlias=1
Text=%1�X
Hidden=1
Container=WeatherContainer

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ HOURLY FORECAST                                                                                      ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[MeterH1]
Meter=String
MeasureName=MeasureHour1#TimeFormat#
X=(#size#*(50+(1-1)*95))
MeterStyle=BottomLayerStyle4
[MeterIcon1]
MeasureName=MeasureHourlyIcon1
Meter=IMAGE
X=(#size#*(26+(1-1)*95))
MeterStyle=BottomLayerStyle5
ToolTipText=[MeasureHourlyCond1]
[MeterT1]
Meter=String
MeasureName=MeasureHourlyTemp1
X=(#size#*(50+(1-1)*95))
MeterStyle=BottomLayerStyle6

[MeterH2]
Meter=String
MeasureName=MeasureHour2#TimeFormat#
X=(#size#*(50+(2-1)*95))
MeterStyle=BottomLayerStyle4
[MeterIcon2]
MeasureName=MeasureHourlyIcon2
Meter=IMAGE
X=(#size#*(26+(2-1)*95))
MeterStyle=BottomLayerStyle5
ToolTipText=[MeasureHourlyCond2]
[MeterT2]
Meter=String
MeasureName=MeasureHourlyTemp2
X=(#size#*(50+(2-1)*95))
MeterStyle=BottomLayerStyle6

[MeterH3]
Meter=String
MeasureName=MeasureHour3#TimeFormat#
X=(#size#*(50+(3-1)*95))
MeterStyle=BottomLayerStyle4
[MeterIcon3]
MeasureName=MeasureHourlyIcon3
Meter=IMAGE
X=(#size#*(26+(3-1)*95))
MeterStyle=BottomLayerStyle5
ToolTipText=[MeasureHourlyCond3]
[MeterT3]
Meter=String
MeasureName=MeasureHourlyTemp3
X=(#size#*(50+(3-1)*95))
MeterStyle=BottomLayerStyle6

[MeterH4]
Meter=String
MeasureName=MeasureHour4#TimeFormat#
X=(#size#*(50+(4-1)*95))
MeterStyle=BottomLayerStyle4
[MeterIcon4]
MeasureName=MeasureHourlyIcon4
Meter=IMAGE
X=(#size#*(26+(4-1)*95))
MeterStyle=BottomLayerStyle5
ToolTipText=[MeasureHourlyCond4]
[MeterT4]
Meter=String
MeasureName=MeasureHourlyTemp4
X=(#size#*(50+(4-1)*95))
MeterStyle=BottomLayerStyle6

[MeterH5]
Meter=String
MeasureName=MeasureHour5#TimeFormat#
X=(#size#*(50+(5-1)*95))
MeterStyle=BottomLayerStyle4
[MeterIcon5]
MeasureName=MeasureHourlyIcon5
Meter=IMAGE
X=(#size#*(26+(5-1)*95))
MeterStyle=BottomLayerStyle5
ToolTipText=[MeasureHourlyCond5]
[MeterT5]
Meter=String
MeasureName=MeasureHourlyTemp5
X=(#size#*(50+(5-1)*95))
MeterStyle=BottomLayerStyle6

[MeterH6]
Meter=String
MeasureName=MeasureHour6#TimeFormat#
X=(#size#*(50+(6-1)*95))
MeterStyle=BottomLayerStyle4
[MeterIcon6]
MeasureName=MeasureHourlyIcon6
Meter=IMAGE
X=(#size#*(26+(6-1)*95))
MeterStyle=BottomLayerStyle5
ToolTipText=[MeasureHourlyCond6]
[MeterT6]
Meter=String
MeasureName=MeasureHourlyTemp6
X=(#size#*(50+(6-1)*95))
MeterStyle=BottomLayerStyle6

;======================================
