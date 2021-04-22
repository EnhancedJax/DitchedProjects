[BottomBar]
Meter=Shape
X=(#SCREENAREAWIDTH#/2)
Y=(#ScreenAreaHeight#*90/100)
Shape=Rectangle (-(#SCREENAREAWIDTH#/2)+[Item1:X]-10),0,(-[Item1:X]+#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-[mIndexFiles])-(10)*([mIndexFiles]/2-[mIndexFiles]-1)),(#TrayWidth#*1.1),#CornerSize#,#CornerSize# | StrokeWidth 0 | Fill Color #ColorMode#,100
Group=TrayIcons
DynamicVariables=1
UpdateDivider=1

@Include4=#@#GetItems.inc

[IconsStyle]
DynamicVariables=1
RightMouseUpAction=[!SetOption MenuForTraycons X ([#CURRENTSECTION#:X]+(#TrayWidth#-10)/2)][!SetOption MenuForTraycons Y ([#CURRENTSECTION#:Y]-10)][!UpdateMeter MenuForTraycons][!ShowMeterGroup MenuGroup1][!SetOption ForceFull LeftMouseUpAction """[!HideMeterGroup MenuGroup1][!Redraw][!SetOption ForceFull LeftMouseUpAction "[!UpdateMeasure Unload]"][!Delay 1000][!UpdateMeter ForceFull]"""][!UpdateMeter ForceFull][!Redraw]
Group=TrayIcons
LeftMouseDownAction=[!SetOption #CURRENTSECTION# ImageTint 100,100,100][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Item1]
Meter=Image
H=(#TrayWidth#-10)
Y=8r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(1-1))-(10)*([mIndexFiles]/2-(1-1)))
ImageName=#@#Applications\Icons\[mIndex1Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex1Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item2]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(2-1))-(10)*([mIndexFiles]/2-(2-1)))
ImageName=#@#Applications\Icons\[mIndex2Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex2Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item3]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(3-1))-(10)*([mIndexFiles]/2-(3-1)))
ImageName=#@#Applications\Icons\[mIndex3Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex3Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item4]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(4-1))-(10)*([mIndexFiles]/2-(4-1)))
ImageName=#@#Applications\Icons\[mIndex4Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex4Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item5]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(5-1))-(10)*([mIndexFiles]/2-(5-1)))
ImageName=#@#Applications\Icons\[mIndex5Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex5Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item6]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(6-1))-(10)*([mIndexFiles]/2-(6-1)))
ImageName=#@#Applications\Icons\[mIndex6Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex6Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item7]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(7-1))-(10)*([mIndexFiles]/2-(7-1)))
ImageName=#@#Applications\Icons\[mIndex7Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex7Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item8]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(8-1))-(10)*([mIndexFiles]/2-(8-1)))
ImageName=#@#Applications\Icons\[mIndex8Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex8Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item9]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(9-1))-(10)*([mIndexFiles]/2-(9-1)))
ImageName=#@#Applications\Icons\[mIndex9Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex9Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item10]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(10-1))-(10)*([mIndexFiles]/2-(10-1)))
ImageName=#@#Applications\Icons\[mIndex10Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex10Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item11]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(11-1))-(10)*([mIndexFiles]/2-(11-1)))
ImageName=#@#Applications\Icons\[mIndex11Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex11Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item12]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(12-1))-(10)*([mIndexFiles]/2-(12-1)))
ImageName=#@#Applications\Icons\[mIndex12Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex12Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item13]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(13-1))-(10)*([mIndexFiles]/2-(13-1)))
ImageName=#@#Applications\Icons\[mIndex13Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex13Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item14]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(14-1))-(10)*([mIndexFiles]/2-(14-1)))
ImageName=#@#Applications\Icons\[mIndex14Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex14Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item15]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(15-1))-(10)*([mIndexFiles]/2-(15-1)))
ImageName=#@#Applications\Icons\[mIndex15Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex15Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item16]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(16-1))-(10)*([mIndexFiles]/2-(16-1)))
ImageName=#@#Applications\Icons\[mIndex16Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex16Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item17]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(17-1))-(10)*([mIndexFiles]/2-(17-1)))
ImageName=#@#Applications\Icons\[mIndex17Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex17Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item18]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(18-1))-(10)*([mIndexFiles]/2-(18-1)))
ImageName=#@#Applications\Icons\[mIndex18Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex18Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item19]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(19-1))-(10)*([mIndexFiles]/2-(19-1)))
ImageName=#@#Applications\Icons\[mIndex19Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex19Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item20]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(20-1))-(10)*([mIndexFiles]/2-(20-1)))
ImageName=#@#Applications\Icons\[mIndex20Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex20Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item21]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(21-1))-(10)*([mIndexFiles]/2-(21-1)))
ImageName=#@#Applications\Icons\[mIndex21Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex21Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item22]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(22-1))-(10)*([mIndexFiles]/2-(22-1)))
ImageName=#@#Applications\Icons\[mIndex22Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex22Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item23]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(23-1))-(10)*([mIndexFiles]/2-(23-1)))
ImageName=#@#Applications\Icons\[mIndex23Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex23Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item24]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(24-1))-(10)*([mIndexFiles]/2-(24-1)))
ImageName=#@#Applications\Icons\[mIndex24Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex24Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item25]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(25-1))-(10)*([mIndexFiles]/2-(25-1)))
ImageName=#@#Applications\Icons\[mIndex25Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex25Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item26]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(26-1))-(10)*([mIndexFiles]/2-(26-1)))
ImageName=#@#Applications\Icons\[mIndex26Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex26Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item27]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(27-1))-(10)*([mIndexFiles]/2-(27-1)))
ImageName=#@#Applications\Icons\[mIndex27Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex27Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[Item28]
Meter=Image
H=(#TrayWidth#-10)
Y=r
X=(#SCREENAREAWIDTH#/2-(#TrayWidth#-10)*([mIndexFiles]/2-(28-1))-(10)*([mIndexFiles]/2-(28-1)))
ImageName=#@#Applications\Icons\[mIndex28Name].png
LeftMouseUpAction=[!CommandMeasure "mIndex28Name" "FollowPath"][!SetOption #CURRENTSECTION# ImageTint 255,255,255][!UpdateMeter #CURRENTSECTION#][!Redraw]
MeterStyle=IconsStyle

[MenuForTraycons]
Meter=Shape
Shape=Path MyPath | StrokeWidth 0 | Fill Color #ColorMode2# | Scale 0.5,0.7
MyPath=-10,-10 | CurveTo 10,-10,0,5 | LineTo 18,-20 | CurveTo 25,-22,19.5,-22 | LineTo -25,-22 | CurveTo -18,-20,-19.5,-22
Shape2=Rectangle -40,-19,300,-100,20,20 | StrokeWidth 0 | Fill Color #ColorMode2#
Group=MenuGroup1
Hidden=1

[Option1]
Meter=String
X=-40r
Y=(-19-(100)/2-15)r
W=300
H=30
Text="        Open Applications Folder"
MeterStyle=RegularText
Group=MenuGroup1
Hidden=1
FontColor=#ColorModeOpposite#
LeftMouseUpAction=["#@#Applications\"][!UpdateMeasure Unload]
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #ColorModeOpposite#,50][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #ColorModeOpposite#,0][!UpdateMeter #CURRENTSECTION#][!Redraw]

[OptionImage1]
Meter=Image
ImageName=#@#Graphics\Icons\Applications.png
X=r
Y=-15r
W=30
H=30
Hidden=1
Group=MenuGroup1

[Option2]
Meter=String
X=r
Y=15R
W=300
H=30
Text="        Open Icons Folder"
MeterStyle=RegularText
Group=MenuGroup1
Hidden=1
FontColor=#ColorModeOpposite#
LeftMouseUpAction=["#@#Applications\Icons\"][!UpdateMeasure Unload]
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #ColorModeOpposite#,50][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #ColorModeOpposite#,0][!UpdateMeter #CURRENTSECTION#][!Redraw]

[OptionImage2]
Meter=Image
ImageName=#@#Graphics\Icons\Icons.png
MeterStyle=OptionImage1