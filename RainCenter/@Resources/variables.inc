;——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
[Variables]
;——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————


LocationCode=8f0658124f5f5b725ca5ed254decc028fd2099a8ac1843faa2ceb206c9b464d1
URL=https://weather.com/#Language#/weather/today/l/#LocationCode#
Language=en-GB
;en-US  for F
DateFormat=%h %#d
TimeFormat=
;None or TimeFormat12H
ShowWeatherUpdate=0
ColorMode=0,0,0
ColorMode2=28,28,28
ColorMode3=140,140,140
ColorModeOpposite=255,255,255
Color1=12,12,19
Color2=90,236,192
AnimationSpeed=400
Player=WebNowPlaying
Font=SF Pro Display
Bluring=None
Bottombar=BottomBar
CustomSkinMenu=
ShowBackground=No
Theme=iPad
ShowTaskbar=1
;————————————————————————————————————————————————————————————————————————
RelativeScale=1
BoxWidth=(#ScreenAreaWidth#*#RelativeScale#*8/100)
SquareWidth=(#ScreenAreaWidth#*#RelativeScale#*4/100)
CornerSize=(#RelativeScale#*15)
Animation=False
LoadAnimation=[!ShowFade]
UnloadAnimation=
UnloadSkinX=1216
contrast=0
ShowCustomSkinMenu=
HideCustomSkinMenu=
shutdown=logout
shutdownaction=[shutdown -l]

;REGEX————————————————————————————————————————————————————————————————————————


;HideOnStart=[!Hide][!EnableMeasureGroup UpdateonLoad][!DisableMeasure Unload] ////// [!Show][!DisableMeasureGroup UpdateonLoad][!enableMeasure Unload]
;LoadAnimation=[!ActivateConfig "RainCenter\Animation" "Load.ini"][!Delay #AnimationSpeed#][!HideFade "RainCenter\Animation"][!ShowFade][!DeactivateConfig "RainCenter\Animation"]
;UnloadAnimation=[!ActivateConfig "RainCenter\Animation" "Unload.ini"][!Delay #AnimationSpeed#][!DeactivateConfig "RainCenter\Animation"]

;;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;;║ METERSTYLES                                                                                          ║
;;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[BoldText]
FontFace=#Font#
FontWeight=800
AntiAlias=1
FontColor=FFFFFF
FontSize=12
StringALign=LeftCenter

[SemiBoldText]
FontFace=#Font#
FontWeight=500
AntiAlias=1
FontColor=FFFFFF
FontSize=12
StringALign=LeftCenter

[RegularText]
FontFace=#Font#
AntiAlias=1
FontColor=FFFFFF
FontSize=12
StringALign=LeftCenter
