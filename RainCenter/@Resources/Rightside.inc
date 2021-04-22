[MiscBox]
X=(#ScreenAreaWidth#*97/100)
Y=(#ScreenAreaHeight#*22/100)
Meter=Shape
Shape=Rectangle 0,0,(-#SquareWidth#*2),(#SquareWidth#*2),#CornerSize#,#CornerSize# | StrokeWidth 0 | Fill Color #ColorMode#,100
Shape2=Ellipse ((-#SquareWidth#*2)*7.1/10),((#SquareWidth#*2)*7.1/10),(27*#RelativeScale#),(27*#RelativeScale#) | StrokeWidth 0 | Fill Color [WifiStatus]
Shape3=Ellipse ((-#SquareWidth#*2)*7.1/10),((#SquareWidth#*2)*2.8/10),(27*#RelativeScale#),(27*#RelativeScale#) | StrokeWidth 0 | Fill Color #Internet#
Shape4=Ellipse ((-#SquareWidth#*2)*2.8/10),((#SquareWidth#*2)*7.1/10),(27*#RelativeScale#),(27*#RelativeScale#) | StrokeWidth 0 | Fill Color #Bluetooth#
Shape5=Ellipse ((-#SquareWidth#*2)*2.8/10),((#SquareWidth#*2)*2.8/10),(27*#RelativeScale#),(27*#RelativeScale#) | StrokeWidth 0 | Fill Color #Airplane#
DynamicVariables=1

[VolumeSliderBox]
X=r
Y=10R
Meter=Shape
Shape=Rectangle 0,0,(-#SquareWidth#+5),(#SquareWidth#*2),#CornerSize#,#CornerSize# | StrokeWidth 0 | Fill Color #ColorMode#,100
Shape2=Rectangle 0,0,(-#SquareWidth#+5),(#SquareWidth#*2),#CornerSize#,#CornerSize# | StrokeWidth 0 | Fill Color 0,0,0,1
Shape3=Rectangle 0,(#SquareWidth#*2),(-#SquareWidth#+5),(-(#SquareWidth#*2)*[AudioMeasurePercent]/100) | StrokeWidth 0 | Fill Color 255,255,255
Shape4=Combine Shape3 | Intersect Shape2
LeftMouseDownAction=[!SetOPtion ForceFull LeftMouseUpAction """"""][!SetOption AudioCurrentVolume OnChangeAction """"""][!UpdateMeter AudioCurrentVolume][!UpdateMeter ForceFull][!CommandMeasure AudioMeasureMouse "Start"]
MouseScrollDownAction=[!CommandMeasure "AudioCurrentVolume" "ChangeVolume -5"][!UpdateMeasure AudioCurrentVolume][!UpdateMeasure AudioMeasurePercent][!UpdateMeterGroup Volume][!Redraw]
MouseScrollUpAction=[!CommandMeasure "AudioCurrentVolume" "ChangeVolume 5"][!UpdateMeasure AudioCurrentVolume][!UpdateMeasure AudioMeasurePercent][!UpdateMeterGroup Volume][!Redraw]
DynamicVariables=1
Group=Volume

[BrightnesSliderBox]
X=(-#SquareWidth#-8)r
Y=r
Meter=Shape
Shape=Rectangle 0,0,(-#SquareWidth#+5),(#SquareWidth#*2),#CornerSize#,#CornerSize# | StrokeWidth 0 | Fill Color #ColorMode#,100
Shape2=Rectangle 0,0,(-#SquareWidth#+5),(#SquareWidth#*2),#CornerSize#,#CornerSize# | StrokeWidth 0 | Fill Color 0,0,0,1
Shape3=Rectangle 0,(#SquareWidth#*2),(-#SquareWidth#+5),(-(#SquareWidth#*2)*[AudioMeasurePercent2]/100) | StrokeWidth 0 | Fill Color 255,255,255
Shape4=Combine Shape3 | Intersect Shape2
LeftMouseDownAction=[!SetOPtion ForceFull LeftMouseUpAction """"""][!UpdateMeter ForceFull][!CommandMeasure AudioMeasureMouse2 "Start"]
MouseScrollDownAction=[!CommandMeasure "MeasureBacklight" "ChangeBacklight -15"][!UpdateMeasure MeasureBacklight][!UpdateMeasure AudioMeasurePercent][!UpdateMeterGroup Volume][!Redraw]
MouseScrollUpAction=[!CommandMeasure "MeasureBacklight" "ChangeBacklight 15"][!UpdateMeasure MeasureBacklight][!UpdateMeasure AudioMeasurePercent][!UpdateMeterGroup Volume][!Redraw]
DynamicVariables=1
Group=Volume

[AudioDeviceBox]
X=(#SquareWidth#+8)r
Y=10R
Meter=Shape
Meter=Shape
Shape=Rectangle 0,0,(-#SquareWidth#*2),(#SquareWidth#-5),#CornerSize#,#CornerSize# | StrokeWidth 0 | Fill Color 0,0,0
Shape2=Rectangle 0,0,(-#SquareWidth#),(#SquareWidth#-5) | StrokeWidth 0 | Extend RightColor
Shape3=Combine Shape2 | Intersect Shape
Shape4=Rectangle 0,0,(-#SquareWidth#*2),(#SquareWidth#-5),#CornerSize#,#CornerSize# | StrokeWidth 0 | Fill Color 0,0,0
Shape5=Rectangle (-#SquareWidth#),0,(-#SquareWidth#),(#SquareWidth#-5) | StrokeWidth 0 | Extend LeftColor
Shape6=Combine Shape5 | Intersect Shape4
LeftColor=Fill Color #ColorMode#,100
RightColor=Fill Color #ColorMode#,100

[TrayBox]
X=(-#SquareWidth#-8)r
Y=10R
Meter=Shape
Shape=Rectangle 0,0,(-#SquareWidth#+5),(#SquareWidth#-5),#CornerSize#,#CornerSize# | StrokeWidth 0 | Fill Color #ColorMode#,100

[PowerBox]
X=(#SquareWidth#+8)r
Y=r
Meter=Shape
Shape=Rectangle 0,0,(-#SquareWidth#+5),(#SquareWidth#-5),#CornerSize#,#CornerSize# | StrokeWidth 0 | Fill Color #ColorMode#,100

[SettingsBox]
X=(#ScreenAreaWidth#*97/100+(-#SquareWidth#*2)-10)
Y=(#ScreenAreaHeight#*22/100)
Meter=Shape
Shape=Rectangle 0,0,(-#SquareWidth#+5),(#SquareWidth#-5),#CornerSize#,#CornerSize# | StrokeWidth 0 | Fill Color #ColorMode#,100

[WinSettingsBox]
X=r
Y=10R
Meter=Shape
Shape=Rectangle 0,0,(-#SquareWidth#+5),(#SquareWidth#-5),#CornerSize#,#CornerSize# | StrokeWidth 0 | Fill Color #ColorMode#,100

[MonitorBox]
X=r
Y=10R
Meter=Shape
Shape=Rectangle 0,0,(-#SquareWidth#+5),(#SquareWidth#-5),#CornerSize#,#CornerSize# | StrokeWidth 0 | Fill Color #ColorMode#,100

[RecycleBinBox]
X=r
Y=10R
Meter=Shape
Shape=Rectangle 0,0,(-#SquareWidth#+5),(#SquareWidth#-5),#CornerSize#,#CornerSize# | StrokeWidth 0 | Fill Color #ColorMode#,100

;;==========================================================================================================================================================

[InternetIcon]
MEter=Image
ImageName=#@#Graphics\Icons\Internet.png
SolidColor=0,0,0,1
W=(27*#relativescale#)
H=(27*#relativescale#)
X=([MiscBox:X]+((-#SquareWidth#*2)*7.1/10)-[#CURRENTSECTION#:W]/2)
Y=([MiscBox:Y]+((#SquareWidth#*2)*2.8/10)-[#CURRENTSECTION#:H]/2)
LeftMouseUpAction=
DynamicVariables=1

[InternetOff]
Measure=Plugin
Plugin=RunCommand
Parameter=ipconfig /release
State=Hide

[InternetOn]
Measure=Plugin
Plugin=RunCommand
Parameter=ipconfig /renew
State=Hide

[MeasureNetwork]
Measure=Plugin
Plugin=SysInfo
SysInfoType=INTERNET_CONNECTIVITY
SysInfoData=Best
IfCondition=MeasureNetWork = -1
IfTrueAction=[!SetVariable Internet #ColorMode3#][!SetOption InternetIcon LeftMouseUpAction """[!CommandMeasure InternetOn "Run"][!UpdateMeasure AirplaneStatus]"""][!UpdateMeter InternetIcon][!UpdateMeter MiscBox][!Redraw]
IfFalseAction=[!SetVariable Internet 0179FE][!SetOption InternetIcon LeftMouseUpAction """[!CommandMeasure InternetOff "Run"][!UpdateMeasure AirplaneStatus]"""][!UpdateMeter InternetIcon][!UpdateMeter MiscBox][!Redraw]
UpdateDivider=1

;;==========================================================================================================================================================

[AirplaneIcon]
MEter=Image
ImageName=#@#Graphics\Icons\Airplane.png
SolidColor=0,0,0,1
W=(27*#relativescale#)
H=(27*#relativescale#)
X=([MiscBox:X]+((-#SquareWidth#*2)*2.8/10)-[#CURRENTSECTION#:W]/2)
Y=([MiscBox:Y]+((#SquareWidth#*2)*2.8/10)-[#CURRENTSECTION#:H]/2)
LeftMouseUpAction=[!CommandMeasure InternetOff "Run"]#BT_TurnOffBluetooth#[!Setvariable airplane 0179FE]
DynamicVariables=1

[AirplaneStatus]
Measure=String
String="[mIconcalc] #BlueTooth# [MeasureNetwork]"
IfMatch="2 #ColorMode3# -1"
IfMatchAction=[!Setvariable airplane 0179FE]
IfNotMatchAction=[!Setvariable airplane #ColorMode3#]
IfMatchMode=1
DynamicVariables=1

;;==========================================================================================================================================================

[WifiStatus]
Measure=CALC
Formula=mIconcalc
Substitute="9":"0179FE","6":"0179FE","3":"0179FE","2":"#ColorMode3#"
OnChangeAction=[!UpdateMeasure AirplaneStatus][!UpdateMeter MiscBox][!Redraw]
UpdateDivider=1

[WifiIcon2]
MEter=Image
ImageName=#@#Graphics\Icons\Wifi.png
SolidColor=0,0,0,1
W=(27*#relativescale#)
H=(27*#relativescale#)
X=([MiscBox:X]+((-#SquareWidth#*2)*7.1/10)-[#CURRENTSECTION#:W]/2)
Y=([MiscBox:Y]+((#SquareWidth#*2)*7.1/10)-[#CURRENTSECTION#:H]/2)
RightMouseUpAction=["control.exe" "ncpa.cpl"]
LeftMouseUpAction=["ms-availablenetworks:"]
DynamicVariables=1

;;==========================================================================================================================================================

[BlueToothIcon]
MEter=Image
ImageName=#@#Graphics\Icons\BlueTooth.png
MeterStyle=WifiIcon2
X=([MiscBox:X]+((-#SquareWidth#*2)*2.8/10)-[#CURRENTSECTION#:W]/2)
Y=([MiscBox:Y]+((#SquareWidth#*2)*7.1/10)-[#CURRENTSECTION#:H]/2)
RightMouseUpAction=["ms-settings:bluetooth"]
LeftMouseUpAction=#BT_ToggleBluetooth#[!Delay 1000]#BT_CheckBluetooth#

;;==========================================================================================================================================================

[AudioCurrentVolume]
Measure=Plugin
Plugin=Win7AudioPlugin
OnUpdateAction=[!SetVariable VolumeBarY (([AudioCurrentVolume:]/-1+100)*(#SquareWidth#*2)/100+[VolumeSliderBox:Y])][!SetOption #CURRENTSECTION# OnUpdateAction """"""]
OnChangeAction=[!SetVariable VolumeBarY (([AudioCurrentVolume:]/-1+100)*(#SquareWidth#*2)/100+[VolumeSliderBox:Y])][!UpdateMeasure AudioMeasurePercent][!UpdateMeterGroup Volume][!Redraw]
IfConditionMode=1
DynamicVariables=1
UpdateDivider=1

[AudioMeasurePercent]
Measure=Calc
Formula=((((#VolumeBarY#-[VolumeSliderBox:Y])*100/(#SquareWidth#*2))-100)*-1)
;The formula for percentage in range is "((Input-Min)*100/(Max-Min))"
IfCondition=(AudioMeasurePercent < 3)
IfTrueAction=[!SetOption VolumeIcon ImageName "#@#Graphics\Icons\Audio_0.png"][!UpdateMeter VolumeIcon]
IfCondition2=(AudioMeasurePercent > 3) && (AudioMeasurePercent <= 33)
IfTrueAction2=[!SetOption VolumeIcon ImageName "#@#Graphics\Icons\Audio_1.png"][!UpdateMeter VolumeIcon]
IfCondition3=(AudioMeasurePercent > 33) && (AudioMeasurePercent <= 66)
IfTrueAction3=[!SetOption VolumeIcon ImageName "#@#Graphics\Icons\Audio_2.png"][!UpdateMeter VolumeIcon]
IfCondition4=(AudioMeasurePercent > 66)
IfTrueAction4=[!SetOption VolumeIcon ImageName "#@#Graphics\Icons\Audio_3.png"][!UpdateMeter VolumeIcon]
DynamicVariables=1

[AudioMeasureMouse]
Measure=Plugin
Plugin=Mouse
LeftMouseDragAction=[!SetVariable VolumeBarY "(Clamp(($MouseY$),[VolumeSliderBox:Y],([VolumeSliderBox:Y]+(#SquareWidth#*2))))"][!CommandMeasure "AudioCurrentVolume" "SetVolume [AudioMeasurePercent]"][!UpdateMeasure AudioMeasurePercent][!UpdateMeterGroup Volume][!Redraw]
LeftMouseUpAction=[!CommandMeasure AudioMeasureMouse "Stop"][!SetOPtion ForceFull LeftMouseUpAction """[!UpdateMeasure UNload]"""][!SetOption AudioCurrentVolume OnChangeAction """[!SetVariable VolumeBarY (([*AudioCurrentVolume:*]/-1+100)*(#*SquareWidth*#*2)/100+[*VolumeSliderBox:Y*])][!UpdateMeasure AudioMeasurePercent][!UpdateMeterGroup Volume][!Redraw]"""][!Delay 1000][!UpdateMeter ForceFull][!UpdateMeasure AudioCurrentVolume]
RelativeToSkin=1
RequireDragging=1
DynamicVariables=1

[VolumeIcon]
MEter=Image
ImageName=
W=(45*#relativescale#)
H=(45*#relativescale#)
SolidColor=0,0,0,1
DynamicVariables=1
ImageTint=BCBCBC
X=([VolumeSliderBox:X]+(-#SquareWidth#+5)/2-[#CURRENTSECTION#:W]/2)
Y=([VolumeSliderBox:Y]+(#SquareWidth#*1.5)-[#CURRENTSECTION#:H]/2)

;;==========================================================================================================================================================

[AudioDeviceIcon]
MEter=Image
ImageName=#@#Graphics\Icons\Headphones.png
W=(25*#RelativeScale#)
H=(25*#RelativeScale#)
X=([AudioDeviceBox:X]+(-#SquareWidth#*2)/2-[#CURRENTSECTION#:W]/2)
Y=([AudioDeviceBox:Y]+(#SquareWidth#-5)/4-[#CURRENTSECTION#:H]/2)
DynamicVariables=1

[AudioDeviceText]
MEter=String
MeasureName=AudioCurrentVolume
Text=%1
MeterStyle=SemiBoldText
X=(25/2*#RelativeScale#)r
Y=(25/2+20*#RelativeScale#)r
FontSize=(15*#RelativeScale#)
StringAlign=Center

[PreviousMouseArea]
Meter=String
X=([AudioDeviceBox:X]-#SquareWidth#*2)
Y=[AudioDeviceBox:Y]
W=(#SquareWidth#)
H=(#SquareWidth#-5)
DynamicVariables=1
SolidColor=0,0,0,1
LeftMouseUpAction=[!CommandMeasure AudioCurrentVolume "TogglePrevious"][!UpdateMeasure AudioCurrentVolume][!UpdateMeasure AudioMeasurePercent][!UpdateMeterGroup Volume][!UpdateMeter AudioDeviceText][[!Redraw]
MouseOverAction=[!SetOPtion AudioDeviceBox LeftColor "Fill Color #ColorModeOpposite#,25"][!UpdateMeter AudioDeviceBox][!Redraw]
MouseLeaveAction=[!SetOPtion AudioDeviceBox LeftColor "Fill Color #ColorMode#,100"][!UpdateMeter AudioDeviceBox][!Redraw]

[NextMouseArea]
Meter=String
X=([AudioDeviceBox:X]-#SquareWidth#)
Y=[AudioDeviceBox:Y]
W=(#SquareWidth#)
H=(#SquareWidth#-5)
DynamicVariables=1
SolidColor=0,0,0,1
LeftMouseUpAction=[!CommandMeasure AudioCurrentVolume "ToggleNext"][!UpdateMeasure AudioCurrentVolume][!UpdateMeasure AudioMeasurePercent][!UpdateMeterGroup Volume][!UpdateMeter AudioDeviceText][!Redraw]
MouseOverAction=[!SetOPtion AudioDeviceBox RightColor "Fill Color #ColorModeOpposite#,25"][!UpdateMeter AudioDeviceBox][!Redraw]
MouseLeaveAction=[!SetOPtion AudioDeviceBox RightColor "Fill Color #ColorMode#,100"][!UpdateMeter AudioDeviceBox][!Redraw]

;;==========================================================================================================================================================

[MeasureBacklight]
Measure=Plugin
Plugin=Backlight
UpdateDivider=1

[AudioMeasurePercent2]
Measure=Calc
Formula=((((#BrightnessBarY#-[BrightnesSliderBox:Y])*100/(#SquareWidth#*2))-100)*-1)
;The formula for percentage in range is "((Input-Min)*100/(Max-Min))"
IfCondition=(AudioMeasurePercent2 <= 0)
IfTrueAction=[!SetOption BrightnessIcon ImageName "#@#Graphics\Icons\Brightness.png"][!UpdateMeter BrightnessIcon]
IfCondition2=(AudioMeasurePercent2 > 0) && (AudioMeasurePercent2 <= 33)
IfTrueAction2=[!SetOption BrightnessIcon ImageName "#@#Graphics\Icons\Brightness.png"][!UpdateMeter BrightnessIcon]
IfCondition3=(AudioMeasurePercent2 > 33) && (AudioMeasurePercent2 <= 66)
IfTrueAction3=[!SetOption BrightnessIcon ImageName "#@#Graphics\Icons\Brightness.png"][!UpdateMeter BrightnessIcon]
IfCondition4=(AudioMeasurePercent2 > 66)
IfTrueAction4=[!SetOption BrightnessIcon ImageName "#@#Graphics\Icons\Brightness.png"][!UpdateMeter BrightnessIcon]
DynamicVariables=1

[AudioMeasureMouse2]
Measure=Plugin
Plugin=Mouse
LeftMouseDragAction=[!SetVariable BrightnessBarY "(Clamp(($MouseY$),[BrightnesSliderBox:Y],([BrightnesSliderBox:Y]+(#SquareWidth#*2))))"][!CommandMeasure "MeasureBacklight" "SetBacklight [AudioMeasurePercent2]"][!UpdateMeasure AudioMeasurePercent2][!UpdateMeterGroup Volume][!Redraw]
LeftMouseUpAction=[!CommandMeasure AudioMeasureMouse2 "Stop"][!SetOPtion ForceFull LeftMouseUpAction """[!UpdateMeasure UNload]"""][!Delay 1000][!UpdateMeter ForceFull]
RelativeToSkin=1
RequireDragging=1
DynamicVariables=1

[BrightnessIcon]
MEter=Image
ImageName=
W=(45*#relativescale#)
H=(45*#relativescale#)
SolidColor=0,0,0,1
DynamicVariables=1
ImageTint=BCBCBC
X=([BrightnesSliderBox:X]+(-#SquareWidth#+5)/2-[#CURRENTSECTION#:W]/2)
Y=([BrightnesSliderBox:Y]+(#SquareWidth#*1.5)-[#CURRENTSECTION#:H]/2)

;;==========================================================================================================================================================

[TrayIcon]
MEter=Image
ImageName=#@#Graphics\Icons\Tray.png
W=(45*#relativescale#)
H=(45*#relativescale#)
SolidColor=0,0,0,1
DynamicVariables=1
X=([TrayBox:X]+(-#SquareWidth#+5)/2-[#CURRENTSECTION#:W]/2)
Y=([TrayBox:Y]+(#SquareWidth#-5)/2-[#CURRENTSECTION#:H]/2)
LeftMouseDownAction=[!ZPos 0]
LeftMouseUpAction=["#@#Actions\AHK.exe" "#@#Actions\tray.ahk"][!SetOption ForceFull LeftMouseUpAction """[!SetOption ForceFull LeftMouseUpAction "[!UpdateMeasure Unload]"][!Delay 1000][!UpdateMeter ForceFull]"""][!UpdateMeter ForceFull]

;;==========================================================================================================================================================

[PowerScroll]
Measure=string
Disabled=1
Group=NoUpdateOnLoad
string=#Shutdown#
IfMatch="shut down"
IfMatchAction=[!Setvariable Shutdown "logout"][!Writekeyvalue variables shutdown "logout" "#@#variables.inc"][!Writekeyvalue variables shutdownaction """[shutdown -l]""" "#@#variables.inc"]
IfMatch2="logout"
IfMatchAction2=[!Setvariable Shutdown "restart"][!Writekeyvalue variables shutdown "restart" "#@#variables.inc"][!Writekeyvalue variables shutdownaction """[shutdown -r]""" "#@#variables.inc"]
IfMatch3="restart"
IfMatchAction3=[!Setvariable Shutdown "sleep"][!Writekeyvalue variables shutdown "sleep" "#@#variables.inc"][!Writekeyvalue variables shutdownaction """[shutdown -h]""" "#@#variables.inc"]
IfMatch4="sleep"
IfMatchAction4=[!Setvariable Shutdown "shut down"][!Writekeyvalue variables shutdown "shut down" "#@#variables.inc"][!Writekeyvalue variables shutdownaction """[shutdown -s]""" "#@#variables.inc"]
IfMatchMode=1
DynamicVariables=1
OnUpdateAction=[!UpdateMeter PowerIcon][!Redraw]

[PowerIcon]
MEter=Image
W=(45*#relativescale#)
H=(45*#relativescale#)
SolidColor=0,0,0,1
DynamicVariables=1
X=([PowerBox:X]+(-#SquareWidth#+5)/2-[#CURRENTSECTION#:W]/2)
Y=([PowerBox:Y]+(#SquareWidth#-5)/2-[#CURRENTSECTION#:H]/2)
MeterStyle=PowerSelectStyle
[PowerSelectStyle]
ImageName=#@#Graphics\Icons\#Shutdown#.png
LeftMouseUpAction=[!ActivateConfig "RainCenter\Power" "Main.ini"]
MouseScrollDownAction=[!UpdateMeasure PowerScroll]
MouseScrollUpAction=[!UpdateMeasure PowerScroll]
[PowerCancelStyle]
ImageName=#@#Graphics\Icons\Cancel.png
LeftMouseUpAction=[shutdown -a][!SetOption PowerIcon MeterStyle PowerSelectStyle][!UpdateMeter PowerIcon][!Redraw]
MouseScrollDownAction=[]
MouseScrollUpAction=[]
[ChangePowerStyle]
Measure=calc
group=NoUpdateOnLoad
Disabled=1
OnUpdateAction=[!SetOption PowerIcon MeterStyle PowerCancelStyle][!UpdateMeter PowerIcon][!Redraw]

;;==========================================================================================================================================================

[SettingsIcon]
MEter=Image
ImageName=#@#Graphics\Icons\SettingsAlt.png
W=(45*#relativescale#)
H=(45*#relativescale#)
SolidColor=0,0,0,1
DynamicVariables=1
X=([SettingsBox:X]+(-#SquareWidth#+5)/2-[#CURRENTSECTION#:W]/2)
Y=([SettingsBox:Y]+(#SquareWidth#-5)/2-[#CURRENTSECTION#:H]/2)
LeftMouseUpAction=[!ActivateConfig "RainCenter\Settings" "Global.ini"][!DeactivateConfig]

;;==========================================================================================================================================================

[WinSettingsIcon]
MEter=Image
ImageName=#@#Graphics\Icons\Settings.png
W=(45*#relativescale#)
H=(45*#relativescale#)
SolidColor=0,0,0,1
DynamicVariables=1
X=([WinSettingsBox:X]+(-#SquareWidth#+5)/2-[#CURRENTSECTION#:W]/2)
Y=([WinSettingsBox:Y]+(#SquareWidth#-5)/2-[#CURRENTSECTION#:H]/2)
LeftMouseUpAction=["ms-settings:"][!UpdateMeasure Unload]

;;==========================================================================================================================================================

[MonitorIcon]
MEter=Image
ImageName=#@#Graphics\Icons\Monitor.png
W=(45*#relativescale#)
H=(45*#relativescale#)
SolidColor=0,0,0,1
DynamicVariables=1
X=([MonitorBox:X]+(-#SquareWidth#+5)/2-[#CURRENTSECTION#:W]/2)
Y=([MonitorBox:Y]+(#SquareWidth#-5)/2-[#CURRENTSECTION#:H]/2)
LeftMouseUpAction=[!UpdateMeasure ChangeMonitor][!Redraw]

[MonitorNumber]
Meter=String
MeterStyle=RegularText
X=(22.5*#RelativeScale#)r
Y=(19*#RelativeScale#)r
StringAlign=CenterCenter

[GetMonitor]
Measure=Plugin
Plugin=SysInfo
SysInfoType=NUM_MONITORS
IfCondition=GetMonitor = 1
IfTrueAction=[!SetOption MonitorNumber Text 1][!UpdateMeter MonitorNumber]
IfCondition2=GetMonitor > 1
IfTrueAction2=[!SetOption MonitorNumber Text "1+"][!UpdateMeter MonitorNumber]
DynamicVariables=1
IfConditionMode=1
[ChangeMonitor]
Measure=Plugin
Plugin=SysInfo
Disabled=1
Group=NoUpdateOnLoad
SysInfoType=NUM_MONITORS
IfCondition=ChangeMonitor = 1
IfTrueAction=["DisplaySwitch.exe" "/extend"][!SetOption MonitorNumber Text "1+"][!UpdateMeter MonitorNumber]
IfCondition2=ChangeMonitor > 1
IfTrueAction2=["DisplaySwitch.exe" "/internal"][!SetOption MonitorNumber Text 1][!UpdateMeter MonitorNumber]
DynamicVariables=1
IfConditionMode=1

;;==========================================================================================================================================================

[RecycleBinIcon]
MEter=Image
ImageName=#@#Graphics\Icons\Recycle.png
W=(45*#relativescale#)
H=(45*#relativescale#)
SolidColor=0,0,0,1
DynamicVariables=1
X=([RecycleBinBox:X]+(-#SquareWidth#+5)/2-[#CURRENTSECTION#:W]/2)
Y=([RecycleBinBox:Y]+(#SquareWidth#-5)/2-[#CURRENTSECTION#:H]/2)
LeftMouseUpAction=[shell:RecycleBinFolder][!UpdateMeasure Unload]

;;==========================================================================================================================================================