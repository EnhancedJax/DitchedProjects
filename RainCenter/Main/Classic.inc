[MMouseY]
 Measure=Plugin
 Plugin=MouseXY
 Dimension=Y
 Group=UpdateOnLoad
 OnUpdateAction=[!SetVariable GlobalY [MMouseY]][!UpdateMeter backgroundbox][!Redraw]
 DynamicVariables=1

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ SECTION SECTION SECTION                                                                              ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[Variables]
GlobalX=
GlobalY=

[backgroundbox]
Meter=Shape
X=(#GlobalX#-(100*#RelativeScale#))
Y=(#GlobalY#-(100*#RelativeScale#))
Shape=Rectangle 0,0,(200*#RelativeScale#),(200*#RelativeScale#),#CornerSize#,#CornerSize# | Fill Color #ColorMode#,50 | StrokeWidth0 
DynamicVariables=1