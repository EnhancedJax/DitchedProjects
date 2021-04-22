[ExpressionCalculator]
Meter=String
X=((#BoxWidth#*2+10)*5/10)
Y=(#BoxWidth#*0.8/10)
MeterStyle=RegularText
FontSize=10
StringAlign=CenterCenter
FontColor=100,100,100
Text="ExpressionCalculator"
Container=CalculatorContainer

[FormulaHistory]
Meter=String
X=((#BoxWidth#*2+10)*9.3/10)
Y=(#BoxWidth#*2.2/10)
MeterStyle=RegularText
W=((#BoxWidth#*2+10)*9/10)
StringAlign=RightCenter
SolidColor=0,0,0,1
FontColor=70,70,70
Text="#FormulaHistory#="
Container=CalculatorContainer
LeftMouseUpAction=[!SetClip #FormulaHIstory#][!SetOption #CURRENTSECTION# Text "Copied to clipboard"][!UpdateMeter #CURRENTSECTION#][!Redraw][!Delay 1000][!SetOption #CURRENTSECTION# Text "#*FormulaHistory*#="][!UpdateMeter #CURRENTSECTION#]
DynamicVariables=1
Group=Calculator

[OpenRainmeterFormula]
Meter=Image
ImageName=#@#Graphics\Icons\Help.png
X=((#BoxWidth#*2+10)*0.7/10)
Y=(#BoxWidth#*3/10-8)
ImageTint=70,70,70
LeftMouseUpAction=["https://docs.rainmeter.net/manual/formulas/"]
Container=CalculatorContainer

[FormulaInput]
Meter=String
X=((#BoxWidth#*2+10)*9.3/10)
Y=(#BoxWidth#*3.8/10)
W=((#BoxWidth#*2+10)*9/10)
MeterStyle=RegularText
StringAlign=RightCenter
SolidColor=0,0,0,1
Text=#Formula#
DynamicVariables=1
FontColor=#ColorModeOpposite#
LeftMouseUpAction=[!CommandMeasure "FormulaPlugin" "ExecuteBatch ALL"]
Container=CalculatorContainer
Group=Calculator

[CalcFormula]
Measure=Calc
Formula=#Formula#
Group=NoUpdateOnLoad
Disabled=1
OnUpdateAction=[!SetVariable FormulaHistory #Formula#]
DynamicVariables=1

[FormulaPlugin]
Measure=Plugin
Plugin=InputText
FontFace=SF Pro Display
AntiAlias=1
FontColor=#ColorModeOpposite#
FontSize=12
StringAlign=Right
W=((#BoxWidth#*2+10)*8/10)
X=([CalculatorBox:X]+(#BoxWidth#*2+10)*1.2/10)
Y=([CalculatorBox:Y]+#BoxWidth#*3/10)
SolidColor=#ColorMode2#
DefaultValue="#Formula#"
Command1=[!SetVariable Formula """$UserInput$"""][!UpdateMeasure CalcFormula][!SetVariable Formula [CalcFormula]][!UpdateMeterGroup Calculator][!Redraw]
FocusDismiss=1
DynamicVariables=1

[ABC]
Meter=String
X=((#BoxWidth#*2+10)*1.3/10)
Y=(#BoxWidth#*6.9/10)
MeterStyle=RegularText
FOntSize=11
StringAlign=LeftCenter
SolidColor=0,0,0,1
FontColor=70,70,70
Text="a          b          c           x1                x2"
Container=CalculatorContainer

[QuadA]
Meter=String
X=((#BoxWidth#*2+10)*1.5/10)
Y=(#BoxWidth#*7.5/10)
W=40
ClipString=2
MeterStyle=RegularText
StringAlign=Center
SolidColor=0,0,0,1
FontColor=#ColorModeOpposite#
Text=#QuadA#
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure QuadAInput "ExecuteBatch ALL"]
Container=CalculatorContainer

[QuadB]
Meter=String
X=R
Y=r
W=40
ClipString=2
MeterStyle=RegularText
StringAlign=Center
Text=#QuadB#
DynamicVariables=1
FontColor=#ColorModeOpposite#
LeftMouseUpAction=[!CommandMeasure QuadBInput "ExecuteBatch ALL"]
Container=CalculatorContainer

[QuadC]
Meter=String
X=R
Y=r
W=40
ClipString=2
MeterStyle=RegularText
StringAlign=Center
Text=#QuadC#
DynamicVariables=1
FontColor=#ColorModeOpposite#
LeftMouseUpAction=[!CommandMeasure QuadCInput "ExecuteBatch ALL"]
Container=CalculatorContainer

[QuadPos]
Meter=String
X=35r
Y=r
W=65
MeterStyle=RegularText
StringAlign=Left
Text=[QuadCalcPos]
DynamicVariables=1
FontColor=#ColorModeOpposite#
LeftMouseUpAction=!SetClip "[QuadCalcPos], [QuadCalcNeg]"
Container=CalculatorContainer
Group=QuadAns

[QuadNeg]
Meter=String
X=R
Y=r
W=70
MeterStyle=RegularText
StringAlign=Left
Text=[QuadCalcNeg]
DynamicVariables=1
FontColor=#ColorModeOpposite#
LeftMouseUpAction=!SetClip "[QuadCalcPos], [QuadCalcNeg]"
Container=CalculatorContainer
Group=QuadAns

[QuadAInput]
Measure=Plugin
Plugin=InputText
FontFace=SF Pro Display
AntiAlias=1
FontColor=#ColorModeOpposite#
FontSize=12
StringAlign=Center
W=40
X=([CalculatorBox:X]+(#BoxWidth#*2+10)*1.5/10-20)
Y=([CalculatorBox:Y]+#BoxWidth#*7.5/10)
SolidColor=#ColorMode2#
DefaultValue="#QuadA#"
Command1=[!SetVariable QuadA """$UserInput$"""][!UpdateMeter QuadA][!Redraw][!CommandMeasure QuadBInput "ExecuteBatch ALL"]
FocusDismiss=1
DynamicVariables=

[QuadBInput]
Measure=Plugin
Plugin=InputText
FontFace=SF Pro Display
AntiAlias=1
FontColor=#ColorModeOpposite#
FontSize=12
StringAlign=Center
W=40
X=([CalculatorBox:X]+(#BoxWidth#*2+10)*1.5/10+20)
Y=([CalculatorBox:Y]+#BoxWidth#*7.5/10)
SolidColor=#ColorMode2#
DefaultValue="#QuadB#"
Command1=[!SetVariable QuadB """$UserInput$"""][!UpdateMeter QuadB][!Redraw][!CommandMeasure QuadCInput "ExecuteBatch ALL"]
FocusDismiss=1
DynamicVariables=1

[QuadCInput]
Measure=Plugin
Plugin=InputText
FontFace=SF Pro Display
AntiAlias=1
FontColor=#ColorModeOpposite#
FontSize=12
StringAlign=Center
W=40
X=([CalculatorBox:X]+(#BoxWidth#*2+10)*1.5/10+60)
Y=([CalculatorBox:Y]+#BoxWidth#*7.5/10)
SolidColor=#ColorMode2#
DefaultValue="#QuadC#"
Command1=[!SetVariable QuadC """$UserInput$"""][!UpdateMeter QuadC][!UpdateMeasureGroup QuadCalc][!Redraw]
FocusDismiss=1
DynamicVariables=1

[QuadCalcPos]
Measure=Calc
Disabled=1
Formula=(-#QuadB#+sqrt(#QuadB#**2 - 4*#QuadA#*#QuadC#))/(2*#QuadA#)
DynamicVariables=1
OnUpdateAction=[!UpdateMeter QuadPos]
Substitute="-nan(ind)":"NoSolu"
Group=QuadCalc | NoUpdateOnLoad

[QuadCalcNeg]
Measure=Calc
Disabled=1
Formula=(-#QuadB#-sqrt(#QuadB#*#qUADb# - 4*#QuadA#*#QuadC#))/(2*#QuadA#)
DynamicVariables=1
OnUpdateAction=[!UpdateMeter QuadNeg]
Substitute="-nan(ind)":"NoSolu"
Group=QuadCalc | NoUpdateOnLoad

[QuadCalculator]
Meter=String
X=((#BoxWidth#*2+10)*5/10)
Y=(#BoxWidth#*9.2/10)
MeterStyle=RegularText
FontSize=10
StringAlign=CenterCenter
FontColor=100,100,100
Text="QuadCalculator"
Container=CalculatorContainer