

[NoteDetection]
 Meter=Shape
 Shape=Rectangle 0,0,187,270 | StrokeWidth 0 | Fill Color #DEVMODE#
 X=550
 Y=163
 MouseOverAction=[!CommandMeasure TextBoxTween "Start('TextBoxSlide')"][!UpdateMeter TextEdit1][!ShowMeterGroup TextBoxText][!EnableMeasureGroup TextBoxInput]
 MouseLeaveAction=[!CommandMeasure TextBoxTween "Reverse('TextBoxSlide')"][!HideMeterGroup TextBoxText][!DisableMeasureGroup TextBoxInput]
 UpdateDivider=-1
 Hidden=1

[QuickNoteBox]
 Meter=Image
 ImageName=#@#Images\LAUNCHER\Text.png
 X=360
 Y=163
 Hidden=1
 UpdateDivider=-1
 Group=TextBoxTween | Buttons
 ImageAlpha=#TextBoxAlpha#
 DynamicVariables=1

;=======================================================================

[TextEdit1]
Meter=Image
SolidColor=#DEVMODE#
W=165
H=24
X=560
Y=185
LeftMouseUpAction=[!CommandMeasure TextBox1 "ExecuteBatch 1-2"][!UpdateMeasure TextBox1][!SetOption CheckText String 1][!SetOption NoteDetection MouseLeaveAction ""][!UpdateMeter NoteDetection]
Hidden=1
UpdateDivider=-1
Group=TextBoxText | TextBoxTween

[TextString1]
Meter=String
Text=#First#
X=r
Y=5r
AntiAlias=1
FontFace=Oxanium
FontColor=255,255,255,#TextBoxAlpha#
FontSize=10
DynamicVariables=1
clipstring=1
ToolTipText=-#First#
Hidden=1
W=([TextEdit1:W]+10)
H=[TextEdit1:H]
UpdateDivider=-1
Group=TextBoxText | TextBoxTween

[TextBox1]
Measure=plugin
Plugin=InputText
X=[TextEdit1:X]
Y=([TextEdit1:Y]+5)
W=[TextEdit1:W]
H=([TextEdit1:H]-5)
AntiAlias=1
FontFace=Oxanium
FontSize=10
SolidColor=255,255,255
FontColor=000000
Command1=[!SetVariable First "$UserInput$"][!UpdateMeter TextString1][!UpdateMeter NoteDetection][!CommandMeasure "TextBox2 ExecuteBatch 1"][!SetOption CheckText String 1]
Command2=[!WriteKeyValue Variables First "[TextBox1]" "#@#variables.inc"]
DynamicVariables=1
FocusDismiss=1
OnDismissAction=[!SetOption NoteDetection MouseLeaveAction "[!CommandMeasure TextBoxTween Reverse('TextBoxSlide')]"][!UpdateMeter NoteDetection]
DefaultValue=#First#
Group=TextBoxInput
UpdateDivider=-1

;=======================================================================

[TextEdit2]
Meter=Image
SolidColor=#DEVMODE#
W=165
H=24
X=560
Y=(185+24+5)
LeftMouseDownAction=[!CommandMeasure "TextBox2 ExecuteBatch 1"][!UpdateMeasure TextBox2][!SetOption CheckText String 1][!SetOption NoteDetection MouseLeaveAction ""][!UpdateMeter NoteDetection]
Hidden=1
UpdateDivider=-1
Group=TextBoxText | TextBoxTween

[TextString2]
Meter=String
Text=#Second#
X=r
Y=5r
AntiAlias=1
FontFace=Oxanium
FontColor=255,255,255,#TextBoxAlpha#
FontSize=10
DynamicVariables=1
clipstring=1
Hidden=1
ToolTipText=-#Second#
W=([TextEdit2:W]+10)
H=[TextEdit2:H]
UpdateDivider=-1
Group=TextBoxText | TextBoxTween

[TextBox2]
Measure=plugin
Plugin=InputText
X=[TextEdit2:X]
Y=([TextEdit2:Y]+5)
W=[TextEdit2:W]
H=([TextEdit2:H]-5)
AntiAlias=1
FontFace=Oxanium
FontSize=10
SolidColor=255,255,255
FontColor=000000
Command1=[!SetVariable Second "$UserInput$"][!UpdateMeter TextString2][!UpdateMeter NoteDetection][!CommandMeasure "TextBox3 ExecuteBatch 1"][!SetOption CheckText String 1]
DynamicVariables=1
FocusDismiss=1
OnDismissAction=[!SetOption NoteDetection MouseLeaveAction "[!CommandMeasure TextBoxTween Reverse('TextBoxSlide')]"][!UpdateMeter NoteDetection]
DefaultValue=#Second#
Group=TextBoxInput
UpdateDivider=-1

;=======================================================================

[TextEdit3]
Meter=Image
SolidColor=#DEVMODE#
W=165
H=24
X=560
Y=(185+24*2+5*2)
LeftMouseDownAction=[!CommandMeasure "TextBox3 ExecuteBatch 1"][!UpdateMeasure TextBox3][!SetOption CheckText String 1][!SetOption NoteDetection MouseLeaveAction ""][!UpdateMeter NoteDetection]
Hidden=1
UpdateDivider=-1
Group=TextBoxText | TextBoxTween

[TextString3]
Meter=String
Text=#Third#
X=r
Y=5r
AntiAlias=1
FontFace=Oxanium
FontColor=255,255,255,#TextBoxAlpha#
FontSize=10
DynamicVariables=1
clipstring=1
Hidden=1
ToolTipText=-#Third#
W=([TextEdit3:W]+10)
H=[TextEdit3:H]
UpdateDivider=-1
Group=TextBoxText | TextBoxTween

[TextBox3]
Measure=plugin
Plugin=InputText
X=[TextEdit3:X]
Y=([TextEdit3:Y]+5)
W=[TextEdit3:W]
H=([TextEdit3:H]-5)
AntiAlias=1
FontFace=Oxanium
FontSize=10
SolidColor=255,255,255
FontColor=000000
Command1=[!SetVariable Third "$UserInput$"][!UpdateMeter TextString3][!UpdateMeter NoteDetection][!CommandMeasure "TextBox4 ExecuteBatch 1"][!SetOption CheckText String 1]
DynamicVariables=1
FocusDismiss=1
OnDismissAction=[!SetOption NoteDetection MouseLeaveAction "[!CommandMeasure TextBoxTween Reverse('TextBoxSlide')]"][!UpdateMeter NoteDetection]
DefaultValue=#Third#
Group=TextBoxInput
UpdateDivider=-1

;=======================================================================

[TextEdit4]
Meter=Image
SolidColor=#DEVMODE#
W=165
H=24
X=560
Y=(185+24*3+5*3)
LeftMouseDownAction=[!CommandMeasure "TextBox4 ExecuteBatch 1"][!UpdateMeasure TextBox4][!SetOption CheckText String 1][!SetOption NoteDetection MouseLeaveAction ""][!UpdateMeter NoteDetection]
Hidden=1
UpdateDivider=-1
Group=TextBoxText | TextBoxTween

[TextString4]
Meter=String
Text=#Fourth#
X=r
Y=5r
AntiAlias=1
FontFace=Oxanium
FontColor=255,255,255,#TextBoxAlpha#
FontSize=10
DynamicVariables=1
clipstring=1
Hidden=1
ToolTipText=-#Fourth#
W=([TextEdit4:W]+10)
H=[TextEdit4:H]
UpdateDivider=-1
Group=TextBoxText | TextBoxTween

[TextBox4]
Measure=plugin
Plugin=InputText
X=[TextEdit4:X]
Y=([TextEdit4:Y]+5)
W=[TextEdit4:W]
H=([TextEdit4:H]-5)
AntiAlias=1
FontFace=Oxanium
FontSize=10
SolidColor=255,255,255
FontColor=000000
Command1=[!SetVariable Fourth "$UserInput$"][!UpdateMeter TextString4][!UpdateMeter NoteDetection][!CommandMeasure "TextBox5 ExecuteBatch 1"][!SetOption CheckText String 1]
DynamicVariables=1
FocusDismiss=1
OnDismissAction=[!SetOption NoteDetection MouseLeaveAction "[!CommandMeasure TextBoxTween Reverse('TextBoxSlide')]"][!UpdateMeter NoteDetection]
DefaultValue=#Fourth#
Group=TextBoxInput
UpdateDivider=-1

;=======================================================================

[TextEdit5]
Meter=Image
SolidColor=#DEVMODE#
W=165
H=24
X=560
Y=(185+24*4+5*4)
LeftMouseDownAction=[!CommandMeasure "TextBox5 ExecuteBatch 1"][!UpdateMeasure TextBox5][!SetOption CheckText String 1][!SetOption NoteDetection MouseLeaveAction ""][!UpdateMeter NoteDetection]
Hidden=1
UpdateDivider=-1
Group=TextBoxText | TextBoxTween

[TextString5]
Meter=String
Text=#Fifth#
X=r
Y=5r
AntiAlias=1
FontFace=Oxanium
FontColor=255,255,255,#TextBoxAlpha#
FontSize=10
DynamicVariables=1
clipstring=1
Hidden=1
ToolTipText=-#Fifth#
W=([TextEdit5:W]+10)
H=[TextEdit5:H]
UpdateDivider=-1
Group=TextBoxText | TextBoxTween

[TextBox5]
Measure=plugin
Plugin=InputText
X=[TextEdit5:X]
Y=([TextEdit5:Y]+5)
W=[TextEdit5:W]
H=([TextEdit5:H]-5)
AntiAlias=1
FontFace=Oxanium
FontSize=10
SolidColor=255,255,255
FontColor=000000
Command1=[!SetVariable Fifth "$UserInput$"][!UpdateMeter TextString5][!UpdateMeter NoteDetection][!CommandMeasure "TextBox6 ExecuteBatch 1"][!SetOption CheckText String 1]
DynamicVariables=1
FocusDismiss=1
OnDismissAction=[!SetOption NoteDetection MouseLeaveAction "[!CommandMeasure TextBoxTween Reverse('TextBoxSlide')]"][!UpdateMeter NoteDetection]
DefaultValue=#Fifth#
Group=TextBoxInput
UpdateDivider=-1