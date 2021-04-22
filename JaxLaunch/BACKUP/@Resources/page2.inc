;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ GAME LIST                                                                                            ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[GameContainer]
Meter=Shape
Shape=Rectangle 0,0,461,200 | Fill Color 255,255,255,255 | StrokeWidth 0
X=69
Y=200
UpdateDivider=-1
Group=page2 | Buttons

[GameContainerDevMode]
Meter=Shape
Shape=Rectangle 0,0,461,200 | Fill Color #DEVMODE# | StrokeWidth 0
X=r
Y=r
Group=page2
Hidden=1
MouseScrollDownAction=[!SetVariable GameXScroll "(Clamp(#GameXScroll#+50, (0-(#GameMaxIndex#-4)*#AppSize#*2.3-(#GameMaxIndex#-4)*#AppGap#*2), 0))"][!UpdateMeterGroup page2]
MouseScrollUpAction=[!SetVariable GameXScroll "(Clamp(#GameXScroll#-50, (0-(#GameMaxIndex#-4)*#AppSize#*2.3-(#GameMaxIndex#-4)*#AppGap#*2), 0))"][!UpdateMeterGroup page2]
Group=page2 | Buttons
DynamicVariables=1
UpdateDivider=-1

[Game0]
Meter=Image
ImageName=#@#Images\Game\#game0#.png
X=(#GameXScroll#+(0)*(#AppSize#*2)+(0)*(#AppGap#*2))
Y=25
W=(#AppSize#*2.3)
H=(#AppSize#*4)
Group=page2 | Buttons | Games
Hidden=1
ImageAlpha=255
SolidColor=255,255,255,0
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game0#Selected.png"]#PlayHover#[!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game0#.png"][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#gamelink0#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#gamelink0#"]
Container=GameContainer
GameIndex=0
DynamicVariables=1
UpdateDivider=-1

[Game1]
Meter=Image
ImageName=#@#Images\Game\#game1#.png
X=(#AppGap#-2)R
Y=25
W=(#AppSize#*2.3)
H=(#AppSize#*4)
Group=page2 | Buttons | Games
Hidden=1
ImageAlpha=255
SolidColor=255,255,255,0
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game1#Selected.png"]#PlayHover#[!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game1#.png"][!UpdateMeter #CURRENTSECTION#]
LeftMouseDownAction=[Play "#@#Sounds\Select.wav"]["#gamelink1#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#gamelink1#"]
Container=GameContainer
DynamicVariables=1
UpdateDivider=-1

[Game2]
Meter=Image
ImageName=#@#Images\Game\#game2#.png
X=(#AppGap#-2)R
Y=25
W=(#AppSize#*2.3)
H=(#AppSize#*4)
Group=page2 | Buttons | Games
Hidden=1
ImageAlpha=255
SolidColor=255,255,255,0
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game2#Selected.png"]#PlayHover#[!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game2#.png"][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#gamelink2#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#gamelink2#"]
Container=GameContainer
DynamicVariables=1
UpdateDivider=-1

[Game3]
Meter=Image
ImageName=#@#Images\Game\#game3#.png
X=(#AppGap#-2)R
Y=25
W=(#AppSize#*2.3)
H=(#AppSize#*4)
Group=page2 | Buttons | Games
Hidden=1
ImageAlpha=255
SolidColor=255,255,255,0
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game3#Selected.png"]#PlayHover#[!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game3#.png"][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#gamelink3#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#gamelink3#"]
Container=GameContainer
DynamicVariables=1
UpdateDivider=-1

[Game4]
Meter=Image
ImageName=#@#Images\Game\#game4#.png
X=(#AppGap#-2)R
Y=25
W=(#AppSize#*2.3)
H=(#AppSize#*4)
Group=page2 | Buttons | Games
Hidden=1
ImageAlpha=255
SolidColor=255,255,255,0
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game4#Selected.png"]#PlayHover#[!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game4#.png"][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#gamelink4#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#gamelink4#"]
Container=GameContainer
DynamicVariables=1
UpdateDivider=-1

[Game5]
Meter=Image
ImageName=#@#Images\Game\#game5#.png
X=(#AppGap#-2)R
Y=25
W=(#AppSize#*2.3)
H=(#AppSize#*4)
Group=page2 | Buttons | Games
Hidden=1
ImageAlpha=255
SolidColor=255,255,255,0
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game5#Selected.png"]#PlayHover#[!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game5#.png"][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#gamelink5#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#gamelink5#"]
Container=GameContainer
DynamicVariables=1
UpdateDivider=-1

[Game6]
Meter=Image
ImageName=#@#Images\Game\#game6#.png
X=(#AppGap#-2)R
Y=25
W=(#AppSize#*2.3)
H=(#AppSize#*4)
Group=page2 | Buttons | Games
Hidden=1
ImageAlpha=255
SolidColor=255,255,255,0
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game6#Selected.png"]#PlayHover#[!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game6#.png"][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#gamelink6#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#gamelink6#"]
Container=GameContainer
DynamicVariables=1
UpdateDivider=-1

[Game7]
Meter=Image
ImageName=#@#Images\Game\#game7#.png
X=(#AppGap#-2)R
Y=25
W=(#AppSize#*2.3)
H=(#AppSize#*4)
Group=page2 | Buttons | Games
Hidden=1
ImageAlpha=255
SolidColor=255,255,255,0
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game7#Selected.png"]#PlayHover#[!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#@#Images\Game\#game7#.png"][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#gamelink7#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#gamelink7#"]
Container=GameContainer
DynamicVariables=1
UpdateDivider=-1