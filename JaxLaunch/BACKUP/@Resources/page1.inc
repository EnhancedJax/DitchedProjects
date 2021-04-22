;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ ROW 1                                                                                                ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[App0]
Meter=Image
ImageName=#@#Images\#app0#.png
X=(281.5-(#AppCount1#/2)*(#AppSize#)-(#AppCount1#/2)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app0#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount1#/2)*(#AppSize#)-(#AppCount1#/2)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink0#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink0#"]
UpdateDivider=-1

[App1]
Meter=Image
ImageName=#@#Images\#app1#.png
X=(281.5-(#AppCount1#/2-1)*(#AppSize#)-(#AppCount1#/2-1)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app1#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount1#/2-1)*(#AppSize#)-(#AppCount1#/2-1)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink1#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink1#"]
UpdateDivider=-1

[App2]
Meter=Image
ImageName=#@#Images\#app2#.png
X=(281.5-(#AppCount1#/2-2)*(#AppSize#)-(#AppCount1#/2-2)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app2#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount1#/2-2)*(#AppSize#)-(#AppCount1#/2-2)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink2#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink2#"]
UpdateDivider=-1

[App3]
Meter=Image
ImageName=#@#Images\#app3#.png
X=(281.5-(#AppCount1#/2-3)*(#AppSize#)-(#AppCount1#/2-3)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app3#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount1#/2-3)*(#AppSize#)-(#AppCount1#/2-3)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink3#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink3#"]
UpdateDivider=-1

[App4]
Meter=Image
ImageName=#@#Images\#app4#.png
X=(281.5-(#AppCount1#/2-4)*(#AppSize#)-(#AppCount1#/2-4)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app4#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount1#/2-4)*(#AppSize#)-(#AppCount1#/2-4)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink4#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink4#"]
UpdateDivider=-1

[App5]
Meter=Image
ImageName=#@#Images\#app5#.png
X=(281.5-(#AppCount1#/2-5)*(#AppSize#)-(#AppCount1#/2-5)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app5#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount1#/2-5)*(#AppSize#)-(#AppCount1#/2-5)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink5#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink5#"]
UpdateDivider=-1

[App6]
Meter=Image
ImageName=#@#Images\#app6#.png
X=(281.5-(#AppCount1#/2-6)*(#AppSize#)-(#AppCount1#/2-6)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app6#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount1#/2-6)*(#AppSize#)-(#AppCount1#/2-6)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink6#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink6#"]
UpdateDivider=-1

[App7]
Meter=Image
ImageName=#@#Images\#app7#.png
X=(281.5-(#AppCount1#/2-7)*(#AppSize#)-(#AppCount1#/2-7)*#AppGap#)
Y=(#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app7#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount1#/2-7)*(#AppSize#)-(#AppCount1#/2-7)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(0)*#AppGap#+(0)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink7#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink7#"]
UpdateDivider=-1

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ ROW 2                                                                                                ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[App8]
Meter=Image
ImageName=#@#Images\#app8#.png
X=(281.5-(#AppCount2#/2)*(#AppSize#)-(#AppCount2#/2)*#AppGap#)
Y=(#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app8#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount2#/2)*(#AppSize#)-(#AppCount2#/2)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink8#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink8#"]
UpdateDivider=-1

[App9]
Meter=Image
ImageName=#@#Images\#app9#.png
X=(281.5-(#AppCount2#/2-1)*(#AppSize#)-(#AppCount2#/2-1)*#AppGap#)
Y=(#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app9#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount2#/2-1)*(#AppSize#)-(#AppCount2#/2-1)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink9#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink9#"]
UpdateDivider=-1

[App10]
Meter=Image
ImageName=#@#Images\#app10#.png
X=(281.5-(#AppCount2#/2-2)*(#AppSize#)-(#AppCount2#/2-2)*#AppGap#)
Y=(#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app10#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount2#/2-2)*(#AppSize#)-(#AppCount2#/2-2)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink10#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink10#"]
UpdateDivider=-1

[App11]
Meter=Image
ImageName=#@#Images\#app11#.png
X=(281.5-(#AppCount2#/2-3)*(#AppSize#)-(#AppCount2#/2-3)*#AppGap#)
Y=(#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app11#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount2#/2-3)*(#AppSize#)-(#AppCount2#/2-3)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink11#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink11#"]
UpdateDivider=-1

[App12]
Meter=Image
ImageName=#@#Images\#app12#.png
X=(281.5-(#AppCount2#/2-4)*(#AppSize#)-(#AppCount2#/2-4)*#AppGap#)
Y=(#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app12#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount2#/2-4)*(#AppSize#)-(#AppCount2#/2-4)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink12#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink12#"]
UpdateDivider=-1

[App13]
Meter=Image
ImageName=#@#Images\#app13#.png
X=(281.5-(#AppCount2#/2-5)*(#AppSize#)-(#AppCount2#/2-5)*#AppGap#)
Y=(#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app13#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount2#/2-5)*(#AppSize#)-(#AppCount2#/2-5)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink13#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink13#"]
UpdateDivider=-1

[App14]
Meter=Image
ImageName=#@#Images\#app14#.png
X=(281.5-(#AppCount2#/2-6)*(#AppSize#)-(#AppCount2#/2-6)*#AppGap#)
Y=(#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app14#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount2#/2-6)*(#AppSize#)-(#AppCount2#/2-6)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink14#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink14#"]
UpdateDivider=-1

[App15]
Meter=Image
ImageName=#@#Images\#app15#.png
X=(281.5-(#AppCount2#/2-7)*(#AppSize#)-(#AppCount2#/2-7)*#AppGap#)
Y=(#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app15#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount2#/2-7)*(#AppSize#)-(#AppCount2#/2-7)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(1)*#AppGap#+(1)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink15#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink15#"]
UpdateDivider=-1

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ ROW 3                                                                                                ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[App16]
Meter=Image
ImageName=#@#Images\#app16#.png
X=(281.5-(#AppCount3#/2-0)*(#AppSize#)-(#AppCount3#/2-0)*#AppGap#)
Y=(#AppHeight#+(2)*#AppGap#+(2)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app16#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount3#/2-0)*(#AppSize#)-(#AppCount3#/2-0)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(2)*#AppGap#+(2)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink16#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink16#"]
UpdateDivider=-1

[App17]
Meter=Image
ImageName=#@#Images\#app17#.png
X=(281.5-(#AppCount3#/2-1)*(#AppSize#)-(#AppCount3#/2-1)*#AppGap#)
Y=(#AppHeight#+(2)*#AppGap#+(2)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app17#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount3#/2-1)*(#AppSize#)-(#AppCount3#/2-1)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(2)*#AppGap#+(2)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink17#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink17#"]
UpdateDivider=-1

[App18]
Meter=Image
ImageName=#@#Images\#app18#.png
X=(281.5-(#AppCount3#/2-2)*(#AppSize#)-(#AppCount3#/2-2)*#AppGap#)
Y=(#AppHeight#+(2)*#AppGap#+(2)*(#AppSize#))
W=#AppSize#
H=#AppSize#
Group=page1 | Buttons
Hidden=1
MouseOverAction=#PlayHover#[!SetOption Time MeasureName ""][!SetOption Time Text "#app17#"][!UpdateMeter Time][!SetOption #CURRENTSECTION# W ([#CURRENTSECTION#:W]+#AppMod#)][!SetOption #CURRENTSECTION# H ([#CURRENTSECTION#:H]+#AppMod#)][!SetOption #CURRENTSECTION# X ([#CURRENTSECTION#:X]-#AppMod#/2)][!SetOption #CURRENTSECTION# Y ([#CURRENTSECTION#:Y]-#AppMod#/2)][!UpdateMeter #CURRENTSECTION#]
MouseLeaveAction=[!SetOption Time MeasureName "MTime"][!SetOption Time Text ""][!UpdateMeter Time][!SetOption #CURRENTSECTION# W (#AppSize#)][!SetOption #CURRENTSECTION# H (#AppSize#)][!SetOption #CURRENTSECTION# X (281.5-(#AppCount3#/2-2)*(#AppSize#)-(#AppCount3#/2-2)*#AppGap#)][!SetOption #CURRENTSECTION# Y (#AppHeight#+(2)*#AppGap#+(2)*(#AppSize#))][!UpdateMeter #CURRENTSECTION#]
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"]["#applink18#"]
MiddleMouseUpAction=[!SetOption CheckText String 1]["#applink18#"]
UpdateDivider=-1

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ MUISC PLAYER                                                                                         ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[MeasureStateButton]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=#Player#
PlayerType=STATE
Disabled=1
UpdateDivider=500
Group=Disabled_Page1 | SongMeasure

[MeasureArtist]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=#Player#
PlayerType=ARTIST
Substitue="":""
Disabled=1
Group=Disabled_Page1 | SongMeasure
UpdateDivider=500
OnUpdateAction=!UpdateMeterGroup SongDetails

[MeasureTitle]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=#Player#
PlayerType=TITLE
Substitue="":""
Disabled=1
Group=Disabled_Page1 | SongMeasure
UpdateDivider=500
OnUpdateAction=!UpdateMeterGroup SongDetails

[MeterArtist]
Meter=String
MeasureName=MeasureArtist
StringAlign=Center
StringCase=Upper
FontFace=Oxanium Bold
FontSize=12
FontColor=FFFFFF
X=302
Y=364
Text="%1"
AntiAlias=1
Hidden=1
UpdateDivider=-1
Group=page1 | Buttons | SongDetails

[MeterTitle]
Meter=String
MeasureName=MeasureTitle
StringAlign=Center
StringCase=Upper
FontFace=Oxanium Regular
FontSize=8
FontColor=FFFFFF
X=0r
Y=0R
Text="%1"
AntiAlias=1
Hidden=1
UpdateDivider=-1
Group=page1 | Buttons | SongDetails

[SongControl]
Meter=Shape
Shape=Rectangle -50,0,100,25 | Fill Color #DEVMODE# | StrokeWidth 0
X=302
Y=364
UpdateDivider=-1
Hidden=1
Group=page1 | Buttons
LeftMouseUpAction=[Play "#@#Sounds\Select.wav"][!CommandMeasure "MeasureStateButton" "Previous"][!Delay 500][!UpdateMeasureGroup SongMeasure]
MiddleMouseUpAction=[Play "#@#Sounds\Select.wav"][!CommandMeasure "MeasureStateButton" "PlayPause"][!Delay 500][!UpdateMeasureGroup SongMeasure]
RightMouseUpAction=[Play "#@#Sounds\Select.wav"][!CommandMeasure "MeasureStateButton" "Next"][!Delay 500][!UpdateMeasureGroup SongMeasure]