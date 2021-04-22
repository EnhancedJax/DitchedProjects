[Background]
Meter=IMAGE
ImageName=#@#\Graphics\BG.png
X=188
Y=345
Group=page3 | Buttons
Hidden=1
UpdateDivider=-1

[SearchLabel]
Meter=String
X=303
Y=17r
W=218
H=18
FontColor=255,255,255
FontFace=Oxanium Bold
FontSize=12
AntiAlias=1
StringAlign=Center
Text=Enter
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"][!SetOption CheckText String 1][!CommandMeasure "SearchInput" "ExecuteBatch 1"]
Group=page3 | Buttons
Hidden=1
UpdateDivider=-1

[SearchInput]
Measure=Plugin
Plugin=InputText
X=194
Y=(345+15)
W=218
H=18
Command1=["http://www.google.com/search?q=$UserInput$"][!SetOption CheckText String 0]
SolidColor=968900
FontColor=FFFFFF
FontFace=Oxanium
FontSize=8
AntiAlias=1
StringAlign=Center
FocusDismiss=1
UpdateDivider=-1
Group=page3 | Buttons



;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ WEB  LIST                                                                                            ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[web0]
Meter=Image
ImageName=#@#Images\#web0#.png
X=(281.5-(#WebCount1#/2)*(#AppSize#)-(#WebCount1#/2)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page3 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#web0#"][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#WebCount1#/2)*(#AppSize#)-(#WebCount1#/2)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"][#weblink0#]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#weblink0#"]
UpdateDivider=-1

[web1]
Meter=Image
ImageName=#@#Images\#web1#.png
X=(281.5-(#WebCount1#/2-1)*(#AppSize#)-(#WebCount1#/2-1)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page3 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#web1#"][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#WebCount1#/2-1)*(#AppSize#)-(#WebCount1#/2-1)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#weblink1#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#weblink1#"]
UpdateDivider=-1

[web2]
Meter=Image
ImageName=#@#Images\#web2#.png
X=(281.5-(#WebCount1#/2-2)*(#AppSize#)-(#WebCount1#/2-2)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page3 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#web2#"][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#WebCount1#/2-2)*(#AppSize#)-(#WebCount1#/2-2)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#weblink2#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#weblink2#"]
UpdateDivider=-1

[web3]
Meter=Image
ImageName=#@#Images\#web3#.png
X=(281.5-(#WebCount1#/2-3)*(#AppSize#)-(#WebCount1#/2-3)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page3 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#web3#"][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#WebCount1#/2-3)*(#AppSize#)-(#WebCount1#/2-3)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#weblink3#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#weblink3#"]
UpdateDivider=-1

[web4]
Meter=Image
ImageName=#@#Images\#web4#.png
X=(281.5-(#WebCount1#/2-4)*(#AppSize#)-(#WebCount1#/2-4)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page3 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#web4#"][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#WebCount1#/2-4)*(#AppSize#)-(#WebCount1#/2-4)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#weblink4#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#weblink4#"]
UpdateDivider=-1

[web5]
Meter=Image
ImageName=#@#Images\#web5#.png
X=(281.5-(#WebCount1#/2-5)*(#AppSize#)-(#WebCount1#/2-5)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page3 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#web5#"][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#WebCount1#/2-5)*(#AppSize#)-(#WebCount1#/2-5)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#weblink5#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#weblink5#"]
UpdateDivider=-1

[web6]
Meter=Image
ImageName=#@#Images\#web6#.png
X=(281.5-(#WebCount1#/2-6)*(#AppSize#)-(#WebCount1#/2-6)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page3 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#web6#"][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#WebCount1#/2-6)*(#AppSize#)-(#WebCount1#/2-6)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#weblink6#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#weblink6#"]
UpdateDivider=-1

[web7]
Meter=Image
ImageName=#@#Images\#web7#.png
X=(281.5-(#WebCount1#/2-7)*(#AppSize#)-(#WebCount1#/2-7)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page3 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#web7#"][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#WebCount1#/2-7)*(#AppSize#)-(#WebCount1#/2-7)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#weblink7#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#weblink7#"]
UpdateDivider=-1

