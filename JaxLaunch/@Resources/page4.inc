;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ HEADER                                                                                               ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝
[MeasureComputerName]
Measure=Plugin
Plugin=SysInfo
SysInfoType=COMPUTER_NAME
UpdateDivider=-1
[MeasureIP]
Measure=Plugin
Plugin=SysInfo
SysInfoType=IP_ADDRESS
SysInfoData=Best
UpdateDivider=-1
[MeasureOSVersion]
Measure=Plugin
Plugin=SysInfo
SysInfoType=OS_VERSION
UpdateDivider=-1
Substitute="Windows 10":"Win10"
[MeasureOSBits]
Measure=Plugin
Plugin=SysInfo
SysInfoType=OS_BITS
UpdateDivider=-1

[MeterComputerName]
Meter=String
MeasureName=MeasureComputerName
X=297.5
Y=215
FontFace=Oxanium ExtraBold
FontWeight=500
FontSize=12
FontColor=FFFFFF
StringEffect=Shadow
AntiAlias=1
StringAlign=Center
Text=%1
UpdateDivider=-1
Hidden=1
Group=page4 | Buttons | UpdateHover_Page4

[MeterOSIP]
Meter=String
MeasureName=MeasureOSVersion
MeasureName2=MeasureOSBits
MeasureName3=MeasureIP
X=r
Y=R
FontFace=Oxanium
FontWeight=300
FontSize=10
FontColor=DDDDDD
StringEffect=Shadow
AntiAlias=1
StringAlign=Center
Text=%1 %2bits
UpdateDivider=-1
MouseOverAction=[!SetOption #CURRENTSECTION# Text "%3"][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Text "%1 %2bits"][!UpdateMeter #CURRENTSECTION#]
Hidden=1
Group=page4 | Buttons | UpdateHover_Page4
;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ CPU GRAPH                                                                                            ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[MeasureCPU100]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=-1 
OnUpdateAction=[!CommandMeasure ScriptGraphCPU "Graph()"]
UpdateDivider=25
Disabled=1
Group=Disabled_Page4

[MeasureCPU]
Measure=Calc
Formula=([MeasureCPU100:3]*#MaxFreq#)
DynamicVariables=1
UpdateDivider=25
Disabled=1
Group=Disabled_Page4

[MeasureRM100]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=0
Name=Rainmeter
UpdateDivider=25
Disabled=1
Group=Disabled_Page4
[MeasureRM]
Measure=Calc
Formula=([MeasureRM100:3]*#MaxFreq#/100)
DynamicVariables=1
UpdateDivider=25
Disabled=1
Group=Disabled_Page4



[MeterCPUTitle]
Meter=String
FontFace=Oxanium
FontSize=10
FontColor=FFFFFF
AntiAlias=1
StringAlign=Right
X=152
Y=255
;;MASTER Y VALUE =====================================================================================
Text=CPU/RM
UpdateDivider=-1
Hidden=1
Group=page4 | Buttons

[ShapeGraphRM]
Meter=Shape
X=5r
Y=10r
H=30
W=285
solidColor=#Devmode#
UpdateDivider=-1
Hidden=1
Group=page4 | UpDiv_Page4 | Buttons
[ShapeGraphCPU]
Meter=Shape
X=r
Y=r
H=30
W=285
solidColor=#Devmode#
UpdateDivider=-1
Hidden=1
Group=page4 | UpDiv_Page4 | Buttons
[MeterCPUValue]
Meter=String
MeasureName=MeasureCPU
MeasureName2=MeasureRM
FontFace=Oxanium
FontSize=8
FontColor=FFFFFF
AntiAlias=1
StringAlign=Left
X=5R
Y=-10r
Text=%1 % %2 %
UpdateDivider=-1
Hidden=1
Group=page4 | UpDiv_Page4 | Buttons

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ RAM GRAPH                                                                                            ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[MeasureRAMTotal]
Measure=PhysicalMemory
Total=1
UpdateDivider=-1
[MeasureRAMUsed]
Measure=PhysicalMemory
Substitute="G":"GB"
UpdateDivider=50
Disabled=1
Group=Disabled_Page4
[MeasureRAM]
Measure=Calc
Formula=[MeasureRAMUsed:%]
DynamicVariables=1
MinValue=0
MaxValue=100
UpdateDivider=50
Disabled=1
Group=Disabled_Page4

[MeterRAMTitle]
Meter=String
FontFace=Oxanium
FontSize=10
FontColor=FFFFFF
AntiAlias=1
StringAlign=Right
X=152
Y=([MeterCPUTitle:Y]+20)
Text=RAM
UpdateDivider=-1
Hidden=1
Group=page4 | UpDiv_Page4_50 | Buttons

[ShapeGraphRAM]
Meter=Shape
X=5r
Y=10r
H=30
W=285
Solidcolor=#devmode#
Hidden=1
Group=page4 | UpDiv_Page4_50 | Buttons
UpdateDivider=-1

[MeterRAMValue]
Meter=String
MeasureName=MeasureRAM
FontFace=Oxanium
FontSize=8
FontColor=FFFFFF
AntiAlias=1
StringAlign=Left
X=5R
Y=-10r
Text=%1 %
AutoScale=1
UpdateDivider=-1
Hidden=1
Group=page4 | UpDiv_Page4_50 | Buttons

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ DRIVE BARS                                                                                           ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[PrimaryDiskUsed]
Measure=FreeDiskSpace
InvertMeasure=1
UpdateDivider=-1
[PrimaryDiskTotal]
Measure=FreeDiskSpace
Total=1
UpdateDivider=-1
[PrimaryPercent]
Measure=Calc
Formula=PrimaryDiskUsed / PrimaryDiskTotal * 100
UpdateDivider=-1
[SecondaryDiskUsed]
Measure=FreeDiskSpace
Drive=#SecondaryDrive#:
InvertMeasure=1
UpdateDivider=-1
[SecondaryDiskTotal]
Measure=FreeDiskSpace
Drive=#SecondaryDrive#:
Total=1
UpdateDivider=-1
[SecondaryPercent]
Measure=Calc
Formula=SecondaryDiskUsed / SecondaryDiskTotal * 100
UpdateDivider=-1

;=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

[MeterDriveTitleA]
Meter=String
MeasureName=PrimaryPercent
FontFace=Oxanium
FontColor=FFFFFF
AntiAlias=1
StringAlign=Right
X=152
Y=([MeterCPUTitle:Y]+40)
Text=%1% - Drive C
UpdateDivider=-1
Hidden=1
Group=page4 | Buttons

[BarLineA]
Meter=Image
SolidColor=255,230,56,100
X=5r
Y=r
W=138
H=12
Hidden=1
Group=page4 | Buttons
UpdateDivider=-1
LeftMouseUpAction=C:/

[MeterBarA]
MeasureName=PrimaryDiskUsed
Meter=BAR
BarColor=255,230,56,255
BarBorder=3
BarOrientation=Horizontal
X=r
Y=r
W=138
H=12
Hidden=1
Group=page4 | Buttons
UpdateDivider=-1

[BarLineB]
Meter=Image
SolidColor=255,230,56,100
X=5R
Y=r
W=138
H=12
Hidden=1
Group=page4 | Buttons
UpdateDivider=-1
LeftMouseUpAction=#SecondaryDrive#:/

[MeterBarB]
MeasureName=SecondaryDiskUsed
Meter=BAR
BarColor=255,230,56,255
BarBorder=3
BarOrientation=Horizontal
X=r
Y=r
W=138
H=12
Flip=1
Hidden=1
Group=page4 | Buttons
UpdateDivider=-1

[MeterDriveTitleB]
Meter=String
MeasureName=SecondaryPercent
FontFace=Oxanium
FontColor=FFFFFF
AntiAlias=1
StringAlign=Left
X=5R
Y=([MeterCPUTitle:Y]+40)
Text=Drive #SecondaryDrive# - %1%
UpdateDivider=-1
Hidden=1
Group=page4 | Buttons

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ RECTANGLES                                                                                           ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[UtilShape1]
Meter=Shape
X=64.5
Y=320
Shape=Rectangle 0,0,90,30 | StrokeWidth 0 | Fill Color 255,68,46,50
Shape2=Rectangle 1,1,88,28 | StrokeWidth 2 | Fill Color 0,0,0,0 | Stroke LinearGradient MyFillGradient
Shape3=Path Triangle1 | StrokeWidth 0 | Extend ThisColor
Shape4=Path Triangle2 | StrokeWidth 0 | Extend ThisColor
Triangle1=4,4 | LineTo 14,4 | LineTo 4,14 | ClosePath
Triangle2=86,26 | LineTo 86,16 | LineTo 76,26 | ClosePath
MyFillGradient=180 | 255,68,46,125 ; 0.0 | 255,68,46,50 ; 0.5 | 255,68,46,125 ; 1.0
ThisColor=Fill Color 255,68,46,0
Hidden=1
Group=page4 | Buttons
MouseOverAction=[!SetOption #CURRENTSECTION# ThisColor "Fill Color 255,68,46,75"]#PlayHover#[!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ThisColor "Fill Color 255,68,46,0"][!UpdateMeter #CURRENTSECTION#]
UpdateDivider=-1

[UtilShape2]
Meter=Shape
MeterStyle=UtilShape1
X=5R
Y=r

[UtilShape3]
Meter=Shape
MeterStyle=UtilShape1
X=5R
Y=r

[UtilBar3]
Meter=Bar
MeasureName=PercentageCalcPercent
X=r
Y=r
W=90
H=30
BarOrientation=Horizontal
BarColor=255,68,46,50
UpdateDivider=-1
Group=page4 | Buttons
MiddleMouseUpAction=#PlaySelect#[!CommandMeasure "MeasureCurrentVolume ToggleMute"][!UpdateMeasure MeasureWin7Audio]
MouseScrollUpAction=[!CommandMeasure "MeasureCurrentVolume ChangeVolume +2"][!UpdateMeasure MeasureWin7Audio]
MouseScrollDownAction=[!CommandMeasure "MeasureCurrentVolume ChangeVolume -2"][!UpdateMeasure MeasureWin7Audio]
MouseOverAction=[!ShowMeter Setting3Shadow][!SetOption MeterComputerName Text "Scroll to change current audio device volume"][!UpdateMeterGroup UpdateHover_Page4]
MouseLeaveAction=[!HideMeter Setting3Shadow][!SetOption MeterComputerName Text "%1"][!UpdateMeterGroup UpdateHover_Page4]

[UtilShape4]
Meter=Shape
MeterStyle=UtilShape1
X=5R
Y=r

[UtilShape5]
Meter=Shape
MeterStyle=UtilShape1
X=5R
Y=r

;;==============================NEW LINE====================================

[UtilShape6]
Meter=Shape
MeterStyle=UtilShape1
X=[UtilShape1:X]
Y=5R

[UtilShape7]
Meter=Shape
MeterStyle=UtilShape1
X=5R
Y=r

[UtilShape8]
Meter=Shape
MeterStyle=UtilShape1
X=5R
Y=r

[UtilShape9]
Meter=Shape
MeterStyle=UtilShape1
X=5R
Y=r

[UtilShape10]
Meter=Shape
MeterStyle=UtilShape1
X=5R
Y=r

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ IMAGES                                                                                               ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[Setting0]
 Meter=Image
 ImageName=#@#\Images\Set\page.png
 X=70
 Y=320
 W=30
 UpdateDivider=-1
 SolidColor=#DEVMODE#
 LeftMouseUpAction=#PlaySelect#[!SetVariable Editing 1][!UpdateMeasure InitPageMeasure][!UpdateMeter #CURRENTSECTION#]
 MouseOverAction=[!SetOption #CURRENTSECTION# W 40][!SetOption #CURRENTSECTION# Y 315][!SetOption #CURRENTSECTION# X (70-5)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "Click to cycle initialized page"][!UpdateMeterGroup UpdateHover_Page4]
 MouseLeaveAction=[!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 320][!SetOption #CURRENTSECTION# X 70][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "%1"][!UpdateMeterGroup UpdateHover_Page4]
 Hidden=1
 AntiAlias=1
 Group=page4 | Buttons

[InitPageMeasure]
Measure=String
String=(#pagechange# #editing#)
IfMatch="0 1"
IfMatchAction=[!WriteKeyValue Variables Page 1 "#@#variables.inc"][!SetOption Setting0 ImageName #@#\Images\Set\page1.png][!SetVariable pagechange 1]
IfMatch2="1 1"
IfMatchAction2=[!WriteKeyValue Variables Page 2 "#@#variables.inc"][!SetOption Setting0 ImageName #@#\Images\Set\page2.png][!SetVariable pagechange 2]
IfMatch3="2 1"
IfMatchAction3=[!WriteKeyValue Variables Page 3 "#@#variables.inc"][!SetOption Setting0 ImageName #@#\Images\Set\page3.png][!SetVariable pagechange 3]
IfMatch4="3 1"
IfMatchAction4=[!WriteKeyValue Variables Page 4 "#@#variables.inc"][!SetOption Setting0 ImageName #@#\Images\Set\page4.png][!SetVariable pagechange 4]
IfMatch5="4 1"
IfMatchAction5=[!WriteKeyValue Variables Page 0 "#@#variables.inc"][!SetOption Setting0 ImageName #@#\Images\Set\page0.png][!SetVariable pagechange 0]
UpdateDivider=-1
OnUpdateAction=!SetVariable Editing -1
Disabled=1
Group=Disabled_Page4
DynamicVariables=1

;;╔═══════════════════════════════════════════════════════════════════╗
;;║ SETTING 1                                                         ║
;;╚═══════════════════════════════════════════════════════════════════╝

[Setting1]
 Meter=Image
 ImageName=#@#\Images\Set\Eye.png
 X=118
 Y=320
 W=30
 UpdateDivider=-1
 SolidColor=#DEVMODE#
 LeftMouseUpAction=#PlaySelect#[!SetVariable Editing 1][!UpdateMeasure DeveloperMeasure]
 MouseOverAction=[!SetOption #CURRENTSECTION# W 40][!SetOption #CURRENTSECTION# Y 315][!SetOption #CURRENTSECTION# X (118-5)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "Click to toggle developer mode"][!SetOption MeterOSIP Text "Enabled shows you clickboxes for elements"][!UpdateMeterGroup UpdateHover_Page4]
 MouseLeaveAction=[!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 320][!SetOption #CURRENTSECTION# X 118][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "%1"][!SetOption MeterOSIP Text "%1 %2bits"][!UpdateMeterGroup UpdateHover_Page4]
 Hidden=1
 AntiAlias=1
 Group=page4 | Buttons

 [DeveloperMeasure]
 Measure=String
 String=(#DEVMODE# #Editing#)
 IfMatch="0,0,0,1 1"
 IfMatchAction=[!SetOption Setting1 Greyscale 0][!WriteKeyValue Variables DEVMODE "255,255,255,100" "#@#variables.inc"][!refresh]
 IfMatch2="255,255,255,100 1"
 IfMatchAction2=[!SetOption Setting1 Greyscale 1][!WriteKeyValue Variables DEVMODE "0,0,0,1" "#@#variables.inc"][!refresh]
 IfMatch3="0,0,0,1 -1"
 IfMatchAction3=[!SetOption Setting1 Greyscale 1]
 IfMatch4="255,255,255,100 -1"
 IfMatchAction4=[!SetOption Setting1 Greyscale 0]
 UpdateDivider=-1
 DynamicVariables=1

;;╔═══════════════════════════════════════════════════════════════════╗
;;║ SETTING 2                                                         ║
;;╚═══════════════════════════════════════════════════════════════════╝

[Setting2]
 Meter=Image
 ImageName=#@#\Images\Set\TaskManager.png
 X=(70+(90+5)*1)
 Y=320
 W=30
 UpdateDivider=-1
 SolidColor=#DEVMODE#
 LeftMouseUpAction=#PlaySelect#["taskmgr.exe"]
 MiddleMouseUpAction=[!SetOption CheckText String 1]["taskmgr.exe"]
 RightMouseUpAction=[!SetOption CheckText String 1][Taskkill /IM explorer.exe /F][!Delay 500]["C:\Windows\explorer.exe"]
 MouseOverAction=[!SetOption #CURRENTSECTION# W 38][!SetOption #CURRENTSECTION# Y 315][!SetOption #CURRENTSECTION# X ((70+(90+5)*1)-5)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "Open TaskManager"][!SetOption MeterOSIP Text "Right click to restart Explorer"][!UpdateMeterGroup UpdateHover_Page4]
 MouseLeaveAction=[!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 320][!SetOption #CURRENTSECTION# X (70+(90+5)*1)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "%1"][!SetOption MeterOSIP Text "%1 %2bits"][!UpdateMeterGroup UpdateHover_Page4]
 Hidden=1
 AntiAlias=1
 Group=page4 | Buttons
[Setting2Alt]
 Meter=Image
 ImageName=#@#\Images\Set\Rainmeter.png
 X=(118+(90+5)*1)
 Y=320
 W=30
 UpdateDivider=-1
 SolidColor=#DEVMODE#
 LeftMouseUpAction=[!manage]
 MiddleMouseUpAction=[!SetOption CheckText String 1][!manage]
 RightMouseUpAction=[!SetOption CheckText String 1][Taskkill /IM Rainmetereter.exe /F][!Delay 500]["#@#reloadrm.bat"]
 MouseOverAction=[!SetOption #CURRENTSECTION# W 38][!SetOption #CURRENTSECTION# Y 315][!SetOption #CURRENTSECTION# X ((118+(90+5)*1)-5)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "Open Rainmeter Panel"][!SetOption MeterOSIP Text "Right click to restart rainmeter"][!UpdateMeterGroup UpdateHover_Page4]
 MouseLeaveAction=[!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 320][!SetOption #CURRENTSECTION# X (118+(90+5)*1)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "%1"][!SetOption MeterOSIP Text "%1 %2bits"][!UpdateMeterGroup UpdateHover_Page4]
 Hidden=1
 AntiAlias=1
 Group=page4 | Buttons

;;╔═══════════════════════════════════════════════════════════════════╗
;;║ SETTING 3                                                         ║
;;╚═══════════════════════════════════════════════════════════════════╝

[Setting3]
 Meter=Image
 X=(70+(90+5)*2)
 Y=320
 W=30
 UpdateDivider=-1
 SolidColor=#DEVMODE#
 LeftMouseUpAction=#PlaySelect#[!CommandMeasure "MeasureCurrentVolume ToggleMute"][!UpdateMeasure MeasureWin7Audio]
 MouseOverAction=[!SetOption #CURRENTSECTION# W 38][!SetOption #CURRENTSECTION# Y 315][!SetOption #CURRENTSECTION# X ((70+(90+5)*2)-5)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "Click to toggle mute state"][!UpdateMeterGroup UpdateHover_Page4]
 MouseLeaveAction=[!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 320][!SetOption #CURRENTSECTION# X (70+(90+5)*2)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "%1"][!UpdateMeterGroup UpdateHover_Page4]
 Hidden=1
 AntiAlias=1
 Group=page4 | Buttons
[Setting3AltAlt]
 Meter=String
 MeasureName=AudioDeviceName
 String=%1
 X=([UtilShape3:X]*(1+(0.64/3))-9)
 Y=(320+18.5)
 W=90
 H=30
 Hidden=1
 StringAlign=CenterCenter
 FontFace=Oxanium ExtraBold
 DynamicVariables=1
 FontColor=#YellowTint#
 UpdateDivider=-1
 AntiAlias=1
 Hidden=1
 Group=Buttons
[Setting3Alt]
 Meter=Image
 ImageName=#@#\Images\Set\Headphones.png
 X=(118+(90+5)*2)
 Y=320
 W=30
 H=30
 UpdateDivider=-1
 SolidColor=#DEVMODE#
 MouseOverAction=[!ShowMeter Setting3AltAlt][!UpdateMeter Setting3AltAlt][!HideMeter Setting3][!SetOption Setting3Shadow FontColor 255,68,46,0][!UpdateMeter Setting3Shadow][!SetOption #CURRENTSECTION# ImageName ""][!UpdateMeter #CURRENTSECTION#]
 MouseLeaveAction=[!HideMeter Setting3AltAlt][!UpdateMeter Setting3AltAlt][!ShowMeter Setting3][!SetOption Setting3Shadow FontColor 255,68,46,100][!UpdateMeter Setting3Shadow][!SetOption #CURRENTSECTION# ImageName "#@#\Images\Set\Headphones.png"][!UpdateMeter #CURRENTSECTION#]
 LeftMouseUpAction=#PlaySelect#[!CommandMeasure AudioDeviceName TogglePrevious][!UpdateMeasure AudioDeviceName][!UpdateMeter Setting3AltAlt]
 RightMouseUpAction=#PlaySelect#[!CommandMeasure AudioDeviceName ToggleNext][!UpdateMeasure AudioDeviceName][!UpdateMeter Setting3AltAlt]
 ;MouseOverAction=[!SetOption #CURRENTSECTION# W 38][!SetOption #CURRENTSECTION# Y 315][!SetOption #CURRENTSECTION# X ((118+(90+5)*2)-5)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "Click to toggle mute state"][!UpdateMeterGroup UpdateHover_Page4]
 ;MouseLeaveAction=[!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 320][!SetOption #CURRENTSECTION# X (118+(90+5)*2)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "%1"][!UpdateMeterGroup UpdateHover_Page4]
 Hidden=1
 AntiAlias=1
 Group=page4 | Buttons

[Setting3Shadow]
 Meter=String
 MeasureName=PercentageCalc
 Text=%1
 X=([UtilShape3:X]*(1+(0.64/3))-10)
 Y=(320+18.5)
 W=30
 H=30
 FontColor=255,68,46,100
 FontSize=12
 FontFace=Oxanium ExtraBold
 StringAlign=CenterCenter
 DynamicVariables=1
 UpdateDivider=-1
 AntiAlias=1
 Hidden=1
 Group=Buttons

[AudioDeviceName]
 Measure=Plugin
 Plugin=Win7AudioPlugin
 Disabled=1
 Group=Disabled_Page4
 UpdateDivider=-1
 StringIndex=4
[MeasureWin7Audio]
 Measure=Plugin
 Plugin=Win7AudioPlugin
 Disabled=1
 Group=Disabled_Page4
 UpdateDivider=-1
 OnUpdateAction=[!UpdateMeasure MuteStatus][!UpdateMeasure MeasureCurrentVolume][!UpdateMeasure PercentageCalc][!UpdateMeter UtilBar3][!UpdateMeter Setting3Shadow]
[MeasureCurrentVolume]
 Measure=Plugin
 Plugin=Win7AudioPlugin.dll
 Disabled=1
 Group=Disabled_Page4
 Substitute="":"-"
 UpdateDivider=-1
[PercentageCalc]
 Measure=Calc
 Formula=(MeasureWin7Audio+1-1)
 Disabled=1
 Group=Disabled_Page4
 Substitute="-1":"Muted"
 UpdateDivider=-1
 OnUpdateAction=!UpdateMeasure PercentageCalcPercent
[PercentageCalcPercent]
 Measure=Calc
 Formula=(PercentageCalc/100)
 Disabled=1
 Group=Disabled_Page4
 UpdateDivider=-1
[MuteStatus]
 Measure=Calc
 Formula=(MeasureWin7Audio=-1?1:0)
 IfCondition=([MuteStatus] = 0)
 IfTrueAction=[!SetOption Setting3 ImageName #@#\Images\Set\Unmuted.png][!UpdateMeter Setting3]
 IfCondition2=([MuteStatus] = 1)
 IfTrueAction2=[!SetOption Setting3 ImageName #@#\Images\Set\Muted.png][!UpdateMeter Setting3]
 UpdateDivider=-1
 Group=Disabled_Page4
 DynamicVariables=1

;;╔═══════════════════════════════════════════════════════════════════╗
;;║ SETTING 4                                                         ║
;;╚═══════════════════════════════════════════════════════════════════╝

[Setting4]
 Meter=Image
 ImageName=#@#\Images\Set\Wifi.png
 X=(70+(90+5)*3)
 Y=320
 W=30
 UpdateDivider=-1
 SolidColor=#DEVMODE#
 LeftMouseUpAction=#PlaySelect#["ms-availablenetworks:"]
 MiddleMouseUpAction=#PlaySelect#[!SetOption CheckText String 1]["ms-availablenetworks:"]
 RightMouseUpAction=#PlaySelect#[!CommandMeasure MeasureTurnOff "Run"][!Delay 100][!CommandMeasure MeasureTurnOn "Run"]
 MouseOverAction=[!SetOption #CURRENTSECTION# W 38][!SetOption #CURRENTSECTION# Y 315][!SetOption #CURRENTSECTION# X ((70+(90+5)*3)-5)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "Open Wifi Panel"][!SetOption MeterOSIP Text "Right click to refresh Wifi"][!UpdateMeterGroup UpdateHover_Page4]
 MouseLeaveAction=[!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 320][!SetOption #CURRENTSECTION# X (70+(90+5)*3)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "%1"][!SetOption MeterOSIP Text "%1 %2bits"][!UpdateMeterGroup UpdateHover_Page4]
 Hidden=1
 AntiAlias=1
 Group=page4 | Buttons
[Setting4Alt]
 Meter=Image
 ImageName=#@#\Images\Set\Bluetooth.png
 X=(118+(90+5)*3)
 Y=320
 W=30
 UpdateDivider=-1
 SolidColor=#DEVMODE#
 LeftMouseUpAction=#PlaySelect#["ms-settings:bluetooth"]
 MiddleMouseUpAction=#PlaySelect#[!SetOption CheckText String 1]["ms-settings:bluetooth"]
 MouseOverAction=[!SetOption #CURRENTSECTION# W 38][!SetOption #CURRENTSECTION# Y 315][!SetOption #CURRENTSECTION# X ((118+(90+5)*3)-5)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "Open Bluetooth Panel"][!UpdateMeterGroup UpdateHover_Page4]
 MouseLeaveAction=[!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 320][!SetOption #CURRENTSECTION# X (118+(90+5)*3)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "%1"][!UpdateMeterGroup UpdateHover_Page4]
 Hidden=1
 AntiAlias=1
 Group=page4 | Buttons

[MeasureTurnOff]
Measure=Plugin
Plugin=RunCommand
Parameter=ipconfig /release
State=Hide
UpdateDivider=-1
Group=Disabled_Page4
[MeasureTurnOn]
Measure=Plugin
Plugin=RunCommand
Parameter=ipconfig /renew
State=Hide
UpdateDivider=-1
Group=Disabled_Page4

;;╔═══════════════════════════════════════════════════════════════════╗
;;║ SETTING 5                                                         ║
;;╚═══════════════════════════════════════════════════════════════════╝

[Setting5Alt]
 Meter=Image
 ImageName=#@#\Images\Set\Trash.png
 X=(118+(90+5)*4)
 Y=320
 W=30
 UpdateDivider=-1
 SolidColor=#DEVMODE#
 MeterStyle=Setting5AltStyle1
 MouseOverAction=[!SetOption #CURRENTSECTION# W 38][!SetOption #CURRENTSECTION# Y 315][!SetOption #CURRENTSECTION# X ((118+(90+5)*4)-5)][!SetOption Setting5Text FontSize 12][!UpdateMeterGroup Bin][!SetOption MeterComputerName Text "Open Trash Bin"][!SetOption MeterOSIP Text "Right click to show clear"][!UpdateMeterGroup UpdateHover_Page4]
 Hidden=1
 AntiAlias=1
 Group=page4 | Buttons | Bin
[Setting5AltStyle1]
 LeftMouseUpAction=#PlaySelect#[Shell:::{645FF040-5081-101B-9F08-00AA002F954E}]
 MiddleMouseUpAction=#PlaySelect#[!SetOption CheckText String 1][Shell:::{645FF040-5081-101B-9F08-00AA002F954E}]
 RightMouseUpAction=[!HideMeter Setting5Text][!SetOption #CURRENTSECTION# ImageName "#@#\Images\Set\Trash_Del.png"][!SetOption #CURRENTSECTION# MeterStyle Setting5AltStyle2][!UpdateMeter #CURRENTSECTION#]
 MouseLeaveAction=[!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 320][!SetOption #CURRENTSECTION# X (118+(90+5)*4)][!SetOption Setting5Text FontSize 8][!UpdateMeterGroup Bin][!SetOption MeterComputerName Text "%1"][!SetOption MeterOSIP Text "%1 %2bits"][!UpdateMeterGroup UpdateHover_Page4]
[Setting5AltStyle2]
 LeftMouseUpAction=[Play "#@#Sounds\Trash.wav"][!SetOption CheckText String 1][!CommandMeasure MeasureBin EmptyBin][!UpdateMeasureGroup BinMeasures][!UpdateMeterGroup Bin]
 ToolTipText=Click to empty bin
 MouseLeaveAction=[!ShowMeter Setting5Text][!SetOption #CURRENTSECTION# ImageName "#@#\Images\Set\Trash.png"][!SetOption #CURRENTSECTION# MeterStyle Setting5AltStyle1][!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 320][!SetOption #CURRENTSECTION# X (118+(90+5)*4)][!SetOption Setting5Text FontSize 8][!SetOption MeterComputerName Text "%1"][!SetOption MeterOSIP Text "%1 %2bits"][!UpdateMeterGroup UpdateHover_Page4][!UpdateMeterGroup Bin]
[Setting5Text]
Meter=String
X=(118+(90+5)*4+15)
Y=343
W=30
H=30
Text=[BinCalc] GB
DynamicVariables=1
FontFace=Oxanium
FontSize=8
FontColor=FFFFFF
StringAlign=CenterCenter
Hidden=1
AntiAlias=1
UpdateDivider=-1
Group=page4 | Buttons | Bin

;;╔═══════════════════════════════════════════════════════════════════╗
;;║ SETTING 6                                                         ║
;;╚═══════════════════════════════════════════════════════════════════╝



;;╔═══════════════════════════════════════════════════════════════════╗
;;║ SETTING 7                                                         ║
;;╚═══════════════════════════════════════════════════════════════════╝



;;╔═══════════════════════════════════════════════════════════════════╗
;;║ SETTING 8                                                         ║
;;╚═══════════════════════════════════════════════════════════════════╝

[Setting8]
 Meter=Image
 ImageName=#@#\Images\Set\Font.png
 X=(70+(90+5)*2)
 Y=355
 W=30
 UpdateDivider=-1
 SolidColor=#DEVMODE#
 LeftMouseUpAction=#PlaySelect#[C:\Windows\Fonts]
 MiddleMouseUpAction=#PlaySelect#[!SetOption CheckText String 1][C:\Windows\Fonts]
 MouseOverAction=[!SetOption #CURRENTSECTION# W 38][!SetOption #CURRENTSECTION# Y 350][!SetOption #CURRENTSECTION# X ((70+(90+5)*2)-5)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "Open PC Font List"][!UpdateMeterGroup UpdateHover_Page4]
 MouseLeaveAction=[!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 355][!SetOption #CURRENTSECTION# X (70+(90+5)*2)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "%1"][!UpdateMeterGroup UpdateHover_Page4]
 Hidden=1
 AntiAlias=1
 Group=page4 | Buttons
[Setting8Alt]
 Meter=Image
 ImageName=#@#\Images\Set\Printer.png
 X=(118+(90+5)*2)
 Y=355
 W=30
 UpdateDivider=-1
 SolidColor=#DEVMODE#
 LeftMouseUpAction=#PlaySelect#["ms-settings:printers"]
 MiddleMouseUpAction=#PlaySelect#[!SetOption CheckText String 1]["ms-settings:printers"]
 MouseOverAction=[!SetOption #CURRENTSECTION# W 38][!SetOption #CURRENTSECTION# Y 350][!SetOption #CURRENTSECTION# X ((118+(90+5)*2)-5)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "Open PC Printer List"][!UpdateMeterGroup UpdateHover_Page4]
 MouseLeaveAction=[!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 355][!SetOption #CURRENTSECTION# X (118+(90+5)*2)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "%1"][!UpdateMeterGroup UpdateHover_Page4]
 Hidden=1
 AntiAlias=1
 Group=page4 | Buttons

;;╔═══════════════════════════════════════════════════════════════════╗
;;║ SETTING 9                                                         ║
;;╚═══════════════════════════════════════════════════════════════════╝

[Setting9]
 Meter=Image
 ImageName=#@#\Images\Set\Apps.png
 X=(70+(90+5)*3)
 Y=355
 W=30
 UpdateDivider=-1
 SolidColor=#DEVMODE#
 LeftMouseUpAction=#PlaySelect#["ms-settings:appsfeatures-app"]
 MiddleMouseUpAction=#PlaySelect#[!SetOption CheckText String 1]["ms-settings:appsfeatures-app"]
 MouseOverAction=[!SetOption #CURRENTSECTION# W 38][!SetOption #CURRENTSECTION# Y 350][!SetOption #CURRENTSECTION# X ((70+(90+5)*3)-5)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "Open PC App List"][!UpdateMeterGroup UpdateHover_Page4]
 MouseLeaveAction=[!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 355][!SetOption #CURRENTSECTION# X (70+(90+5)*3)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "%1"][!UpdateMeterGroup UpdateHover_Page4]
 Hidden=1
 AntiAlias=1
 Group=page4 | Buttons
[Setting9Alt]
 Meter=Image
 ImageName=#@#\Images\Set\Settings.png
 X=(118+(90+5)*3)
 Y=355
 W=30
 UpdateDivider=-1
 SolidColor=#DEVMODE#
 LeftMouseUpAction=#PlaySelect#["ms-settings:settings"]
 MiddleMouseUpAction=#PlaySelect#[!SetOption CheckText String 1]["ms-settings:settings"]
 RightMouseUpAction=#PlaySelect#["Control.exe"]
 MouseOverAction=[!SetOption #CURRENTSECTION# W 38][!SetOption #CURRENTSECTION# Y 350][!SetOption #CURRENTSECTION# X ((118+(90+5)*3)-5)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "Open MS Settings"][!SetOption MeterOSIP Text "Right click to open control panel"][!UpdateMeterGroup UpdateHover_Page4]
 MouseLeaveAction=[!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 355][!SetOption #CURRENTSECTION# X (118+(90+5)*3)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "%1"][!SetOption MeterOSIP Text "%1 %2bits"][!UpdateMeterGroup UpdateHover_Page4]
 Hidden=1
 AntiAlias=1
 Group=page4 | Buttons

;;╔═══════════════════════════════════════════════════════════════════╗
;;║ SETTING 10                                                        ║
;;╚═══════════════════════════════════════════════════════════════════╝

[Setting10]
 Meter=Image
 ImageName=#@#\Images\Set\CMD.png
 X=(70+(90+5)*4)
 Y=355
 W=30
 UpdateDivider=-1
 SolidColor=#DEVMODE#
 LeftMouseUpAction=#PlaySelect#[cmd /K "cd %USERPROFILE%&cls"]
 MiddleMouseUpAction=#PlaySelect#[!SetOption CheckText String 1][cmd /K "cd %USERPROFILE%&cls"]
 RightMouseUpAction=#PlaySelect#[powershell -windowstyle hidden "Start-Process cmd -ArgumentList '/K "cd %USERPROFILE%&cls"' -Verb RunAs"]
 MouseOverAction=[!SetOption #CURRENTSECTION# W 38][!SetOption #CURRENTSECTION# Y 350][!SetOption #CURRENTSECTION# X ((70+(90+5)*4)-5)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "Open Command Panel"][!SetOption MeterOSIP Text "Right click to open elevated"][!UpdateMeterGroup UpdateHover_Page4]
 MouseLeaveAction=[!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 355][!SetOption #CURRENTSECTION# X (70+(90+5)*4)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "%1"][!SetOption MeterOSIP Text "%1 %2bits"][!UpdateMeterGroup UpdateHover_Page4]
 Hidden=1
 AntiAlias=1
 Group=page4 | Buttons
[Setting10Alt]
 Meter=Image
 ImageName=#@#\Images\Set\Tray.png
 X=(118+(90+5)*4)
 Y=355
 W=30
 UpdateDivider=-1
 SolidColor=#DEVMODE#
 LeftMouseUpAction=#PlaySelect#[!SetOption CheckText String 1]["#@#AHK.exe" "#@#Tray.ahk"]
 MouseOverAction=[!SetOption #CURRENTSECTION# W 38][!SetOption #CURRENTSECTION# Y 350][!SetOption #CURRENTSECTION# X ((118+(90+5)*4)-5)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "Open App Tray"][!UpdateMeterGroup UpdateHover_Page4]
 MouseLeaveAction=[!SetOption #CURRENTSECTION# W 30][!SetOption #CURRENTSECTION# Y 355][!SetOption #CURRENTSECTION# X (118+(90+5)*4)][!UpdateMeter #CURRENTSECTION#][!SetOption MeterComputerName Text "%1"][!UpdateMeterGroup UpdateHover_Page4]
 Hidden=1
 AntiAlias=1
 Group=page4 | Buttons

[MeasureBin]
Measure=Plugin
Plugin=RecycleManager
RecycleType=Size
UpdateDivider=-1
[BinCalc]
Measure=Calc
Formula=Round(MeasureBin/1073741824, 2)
UpdateDivider=-1