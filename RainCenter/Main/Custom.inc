;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ LoadActions                                                                                          ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[Unload]
Measure=Calc
OnUpdateAction=[!DeactivateConfig "RainCenter\Power" "Main.ini"][!EnableMeasureGroup UpdateonLoad][!HideMeterGroup MenuGroup1][!HideFade][!DisableMeasure #CURRENTSECTION#]#UnloadAnimation##HideCustomSkinMenu#
DIsabled=1

[OnLoad]
Measure=Calc
OnUpdateAction=[!ZPos 1]#LoadAnimation#[!DisableMeasureGroup UpdateonLoad][!EnableMeasure Unload]#ShowCustomSkinMenu#
IfCondition=(AudioMeasureMouseX <= #SCREENAREAWIDTH@1#)
IfTrueAction=[!Move #SCREENAREAX@1# 0]
IfCondition2=(AudioMeasureMouseX > #SCREENAREAWIDTH@1#)
IfTrueAction2=[!Move #SCREENAREAX@2# 0]
IfCondition3=(AudioMeasureMouseX > (#SCREENAREAWIDTH@1#+#SCREENAREAWIDTH@2#))
IfTrueAction3=[!Move #SCREENAREAX@3# 0]
IfConditionMode=1
DynamicVariables=1
Group=UpdateAfterMousePos | NoUpdateOnLoad

[AudioMeasureMouseX]
 Measure=Plugin
 Plugin=MouseXY
 Dimension=X
 Group=UpdateOnLoad
 OnUpdateAction=[!UpdateMeasureGroup UpdateAfterMousePos]
;[!Setvariable GlobalX ([AudioMeasureMouseX])]

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ SECTION SECTION SECTION                                                                              ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝