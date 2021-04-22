;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ LoadActions                                                                                          ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[Unload]
Measure=Calc
OnUpdateAction=[!HideMeterGroup MenuGroup1][!HideFade][!DisableMeasure #CURRENTSECTION#]#UnloadAnimation##HideCustomSkinMenu#
DIsabled=1

[OnLoad]
Measure=Calc
OnUpdateAction=[!ZPos 1]#LoadAnimation#[!EnableMeasure Unload]#ShowCustomSkinMenu#
IfCondition=(MMouseX <= #SCREENAREAWIDTH@1#)
IfTrueAction=[!Move #SCREENAREAX@1# 0]
IfCondition2=(MMouseX > #SCREENAREAWIDTH@1#)
IfTrueAction2=[!Move #SCREENAREAX@2# 0]
IfCondition3=(MMouseX > (#SCREENAREAWIDTH@1#+#SCREENAREAWIDTH@2#))
IfTrueAction3=[!Move #SCREENAREAX@3# 0]
IfConditionMode=1
DynamicVariables=1
Group=UpdateAfterMousePos | NoUpdateOnLoad

[MMouseX]
 Measure=Plugin
 Plugin=MouseXY
 Dimension=X
 Group=UpdateOnLoad
 OnUpdateAction=[!UpdateMeasureGroup UpdateAfterMousePos][!SetVariable GlobalX [MMouseX]]
 DynamicVariables=1
;[!Setvariable GlobalX ([MMouseX])]

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