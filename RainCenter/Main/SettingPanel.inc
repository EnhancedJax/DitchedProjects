;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ LoadActions                                                                                          ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[MMouseX]
 Measure=Plugin
 Plugin=MouseXY
 Dimension=X
 Group=UpdateOnLoad
 IfConditionMode=1
 IfCondition=MMouseX > #SCREENAREAWIDTH#
 IfTrueAction=[!SetVariable GlobalX ([MMouseX]-#SCREENAREAWIDTH#)]
 IfFalseAction=[!SetVariable GlobalX [MMouseX]]
 DynamicVariables=1

[MMouseY]
 Measure=Plugin
 Plugin=MouseXY
 Dimension=Y
 Group=UpdateOnLoad
 OnUpdateAction=[!SetVariable GlobalY [MMouseY]][!UpdateMeterGroup Boxes][!UpdateMeasureGroup Icons][!UpdateMeterGroup Icons][!Redraw]
 DynamicVariables=1
 
 [IconStyle]
MeasureName=#CURRENTSECTION#Measure
W=38
X=21R
Y=r
MouseOverAction=[!SetOption SelectedBox X ([#CURRENTSECTION#:X]+2.5)][!SetOption SelectedBox Y ([#CURRENTSECTION#:Y]+2.5)][!ShowMeter SelectedBox][!UpdateMeter SelectedBox][!Redraw]
MouseLeaveAction=[!HideMeter SelectedBox][!Redraw]
LeftMouseUpAction=!CommandMeasure "#CURRENTSECTION#Measure" "FollowPath"
RightMouseUpAction=!CommandMeasure "#CURRENTSECTION#Measure" "ContextMenu"
DynamicVariables=1
Container=IconContainer
Group=Icons

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ SECTION SECTION SECTION                                                                              ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[Variables]
GlobalX=
GlobalY=
Count=9
UserName=

[ShortcutBox]
Meter=Shape
X=(#GlobalX#-(100*#RelativeScale#))
Y=(#GlobalY#-(100*#RelativeScale#))
Shape2=Rectangle 0,0,(200*#RelativeScale#),(200*#RelativeScale#) | Fill Color #Color1# | StrokeWidth 1 | Stroke Color 255,255,255,50
Shape=Path Plus | Fill Color #Color2#,75 | StrokeWidth 0 | Scale #RelativeScale#,#RelativeScale#,(10*#RelativeScale#),(10*#RelativeScale#)
Plus=10,10 | LineTo 10,-20 | LineTo 190,-20 | LineTo 190,10 | LineTo 220,10 | LineTo 220,190 | LineTo 190,190 | LineTo 190,220 | LineTo 10,220 | LineTo 10,190 | LineTo -20,190 | LineTo -20,10 | closePath 1
DynamicVariables=1
Group=Boxes

[WebsiteBox]
Meter=Shape
X=(210*#RelativeScale#)r
Y=r
Shape=Path LeftBox | Fill Color #Color1# | StrokeWidth 1 | Stroke Color 255,255,255,50
Shape2=Path BoxShade | StrokeWidth (5*#RelativeScale#) | Stroke Color #Color2# | StrokeStartCap Triangle | StrokeEndCap Triangle
LeftBox=0,0 | LineTo (200*#RelativeScale#),0 | LineTo (200*#RelativeScale#),(100*#RelativeScale#) | LineTo (185*#RelativeScale#),(115*#RelativeScale#) | LineTo (185*#RelativeScale#),(190*#RelativeScale#) | LineTo (175*#RelativeScale#),(200*#RelativeScale#) | LineTo 0,(200*#RelativeScale#) | ClosePath 1
BoxShade=(200*#RelativeScale#),0 | LineTo (200*#RelativeScale#),(100*#RelativeScale#) | LineTo (185*#RelativeScale#),(115*#RelativeScale#) | LineTo (185*#RelativeScale#),(190*#RelativeScale#) | LineTo (175*#RelativeScale#),(200*#RelativeScale#)

[DownloadBox]
Meter=Shape
X=(-420*#RelativeScale#)r
Y=r
Shape=Path LeftBox | Fill Color #Color1# | StrokeWidth 1 | Stroke Color 255,255,255,50 | Scale -1.0,1.0
Shape2=Path BoxShade | StrokeWidth (5*#RelativeScale#) | Stroke Color #Color2# | StrokeStartCap Triangle | StrokeEndCap Triangle | Scale -1.0,1.0 | Offset (-175*#RelativeScale#),0
LeftBox=0,0 | LineTo (200*#RelativeScale#),0 | LineTo (200*#RelativeScale#),(100*#RelativeScale#) | LineTo (185*#RelativeScale#),(115*#RelativeScale#) | LineTo (185*#RelativeScale#),(190*#RelativeScale#) | LineTo (175*#RelativeScale#),(200*#RelativeScale#) | LineTo 0,(200*#RelativeScale#) | ClosePath 1
BoxShade=(200*#RelativeScale#),0 | LineTo (200*#RelativeScale#),(100*#RelativeScale#) | LineTo (185*#RelativeScale#),(115*#RelativeScale#) | LineTo (185*#RelativeScale#),(190*#RelativeScale#) | LineTo (175*#RelativeScale#),(200*#RelativeScale#)

[TimeBox]
Meter=Shape
X=(#GlobalX#-(100*#RelativeScale#))
Y=(#GlobalY#-(110*#RelativeScale#))
Shape=Rectangle 0,0,(200*#RelativeScale#),(-100*#RelativeScale#) | Fill Color #Color1# | StrokeWidth 1 | Stroke Color 255,255,255,50
DynamicVariables=1
Group=Boxes

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ Time                                                                                                 ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[MeasureTime]
Measure=Time
Format=%H:%M
UpdateDivider=1
Group=TimeFormat24H

[MeasureSec]
Measure=Time
Format=%S
MinValue=0
MaxValue=60
UpdateDivider=1

[MeasureDate]
Measure=Time
Format=%A, %B %d
FormatLocale=Local
UpdateDivider=1

[Time]
Meter=String
MeasureName=MeasureTime
Text=%1
X=(100*#RelativeScale#)r
Y=(-95*#RelativeScale#)r
MeterStyle=SemiBoldText
FOntSize=(30*#RelativeScale#)
StringAlign=Center
DynamicVariables=1
UpdateDivider=1
FontFace=Segoe UI

[SecondBar]
Meter=bar
MeasureName=MeasureSec
BarOrientation=Horizontal
UpdateDivider=1
W=(120*#RelativeScale#)
H=(5*#RelativeScale#)
X=-60r
Y=(53*#RelativeScale#)r
SolidColor=255,255,255,50
BarColor=255,255,255

[Date]
Meter=String
MeasureName=MeasureDate
Text=%1
X=60r
Y=(3*#RelativeScale#)R
MeterStyle=RegularText
FOntSize=(12*#RelativeScale#)
StringAlign=Center
UpdateDivider=1
FontFace=Segoe UI

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ Icons Selected                                                                                       ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[SelectedBox]
Meter=Shape
Shape=Rectangle -5,-5,43,43,2,2 | StrokeWidth 0 | Fill Color FFFFFF50
Hidden=1

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ Icons                                                                                                ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝
 
[IconContainer]
Meter=String
X=(#GlobalX#-80)
Y=(#GlobalY#-80)
W=(160)
H=(160)
SolidColor=255,255,255
DynamicVariables=1
Group=Boxes
MouseScrollDownAction=[!CommandMeasure "mPath" "PageDown"][!Delay 16][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeterGroup Icons][!Redraw]
MouseScrollUpAction=[!CommandMeasure "mPath" "PageUp"][!Delay 16][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeterGroup Icons][!Redraw]



[Icon1]
Meter=Image
MeterStyle=IconStyle
X=0
Y=0

[Icon2]
Meter=Image
MeterStyle=IconStyle

[Icon3]
Meter=Image
MeterStyle=IconStyle

[Icon4]
Meter=Image
MeterStyle=IconStyle
X=0
Y=21R

[Icon5]
Meter=Image
MeterStyle=IconStyle

[Icon6]
Meter=Image
MeterStyle=IconStyle

[Icon7]
Meter=Image
MeterStyle=IconStyle
X=0
Y=21R

[Icon8]
Meter=Image
MeterStyle=IconStyle

[Icon9]
Meter=Image
MeterStyle=IconStyle

@include=#@#GetItemIcons.inc


;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ Tray                                                                                                 ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[TrayBox]
Meter=Shape
X=(#GlobalX#-(100*#RelativeScale#))
Y=(#GlobalY#+(110*#RelativeScale#))
Shape=Path ThisShape | StrokeWidth 1 | Stroke Color 255,255,255,50 | Fill Color #Color1#
ThisShape=0,0 | LineTo (200*#RelativeScale#),0 | LineTo (200*#RelativeScale#),(40*#RelativeScale#) | LineTo (190*#RelativeScale#),(50*#RelativeScale#) | LineTo (10*#RelativeScale#),(50*#RelativeScale#) | LineTo 0,(40*#RelativeScale#) | ClosePath 1
DynamicVariables=1
Group=Boxes