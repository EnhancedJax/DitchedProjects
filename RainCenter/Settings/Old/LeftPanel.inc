[Cross]
Meter=image
imagename=#@#graphics\icons\close.png
X=10
Y=10
W=(20*#RelativeScale#)
SolidColor=0,0,0,1
LeftMouseUpAction=[!ActivateConfig "RainCenter\Main"][!WriteKeyvalue AppearanceHeader Text "Appearance <" "LeftPanel.inc"][!WriteKeyvalue MusicPlayerHeader Text "Music Player" "LeftPanel.inc"][!WriteKeyvalue ThemesHeader Text "Themes" "LeftPanel.inc"][!WriteKeyvalue SkinHeader Text "Skin" "LeftPanel.inc"][!WriteKeyvalue Whatthis Text "FAQ" "LeftPanel.inc"][!DeactivateConfig]

[SettingsHeader]
MEter=String
Text=Settings
MeterStyle=BoldText
StringAlign=Left
X=(30*#RelativeScale#)
Y=8
SolidColor=0,0,0,1
FOntSize=(15*#RelativeScale#)

[AppearanceHeader]
MEter=String
Text=Appearance <
MeterStyle=RegularText
StringAlign=Left
X=(10*#RelativeScale#)
Y=(40*#RelativeScale#)
SolidColor=0,0,0,1
FOntSize=(12*#RelativeScale#)
LeftMouseUpAction=[!WriteKeyvalue AppearanceHeader Text "Appearance  <" "LeftPanel.inc"][!WriteKeyvalue MusicPlayerHeader Text "Music Player" "LeftPanel.inc"][!WriteKeyvalue ThemesHeader Text "Themes" "LeftPanel.inc"][!WriteKeyvalue SkinHeader Text "Skin" "LeftPanel.inc"][!WriteKeyvalue Whatthis Text "FAQ" "LeftPanel.inc"][!ActivateConfig "RainCenter\Settings" "Apperance.ini"]

[MusicPlayerHeader]
MEter=String
Text=Music Player
MeterStyle=RegularText
StringAlign=Left
X=(10*#RelativeScale#)
Y=(25*#RelativeScale#)r
SolidColor=0,0,0,1
FOntSize=(12*#RelativeScale#)
LeftMouseUpAction=[!WriteKeyvalue AppearanceHeader Text "Appearance" "LeftPanel.inc"][!WriteKeyvalue MusicPlayerHeader Text "Music Player  <" "LeftPanel.inc"][!WriteKeyvalue ThemesHeader Text "Themes" "LeftPanel.inc"][!WriteKeyvalue SkinHeader Text "Skin" "LeftPanel.inc"][!WriteKeyvalue Whatthis Text "FAQ" "LeftPanel.inc"][!ActivateConfig "RainCenter\Settings" "MusicPlayer.ini"]

[ThemesHeader]
MEter=String
Text=Themes
MeterStyle=RegularText
StringAlign=Left
X=(10*#RelativeScale#)
Y=(25*#RelativeScale#)r
SolidColor=0,0,0,1
FOntSize=(12*#RelativeScale#)
LeftMouseUpAction=[!WriteKeyvalue AppearanceHeader Text "Appearance" "LeftPanel.inc"][!WriteKeyvalue MusicPlayerHeader Text "Music Player" "LeftPanel.inc"][!WriteKeyvalue ThemesHeader Text "Themes  <" "LeftPanel.inc"][!WriteKeyvalue SkinHeader Text "Skin" "LeftPanel.inc"][!WriteKeyvalue Whatthis Text "FAQ" "LeftPanel.inc"][!ActivateConfig "RainCenter\Settings" "Themes.ini"]

[SkinHeader]
MEter=String
Text=Skin
MeterStyle=RegularText
StringAlign=Left
X=(10*#RelativeScale#)
Y=(25*#RelativeScale#)r
SolidColor=0,0,0,1
FOntSize=(12*#RelativeScale#)
LeftMouseUpAction=[!WriteKeyvalue AppearanceHeader Text "Appearance" "LeftPanel.inc"][!WriteKeyvalue MusicPlayerHeader Text "Music Player" "LeftPanel.inc"][!WriteKeyvalue ThemesHeader Text "Themes" "LeftPanel.inc"][!WriteKeyvalue SkinHeader Text "Skin  <" "LeftPanel.inc"][!WriteKeyvalue Whatthis Text "FAQ" "LeftPanel.inc"][!ActivateConfig "RainCenter\Settings" "#Theme#.ini"]

[Whatthis]
MEter=String
Text=FAQ
MeterStyle=RegularText
StringAlign=Left
X=(10*#RelativeScale#)
Y=(25*#RelativeScale#)r
SolidColor=0,0,0,1
FOntSize=(12*#RelativeScale#)
LeftMouseUpAction=[!WriteKeyvalue AppearanceHeader Text "Appearance" "LeftPanel.inc"][!WriteKeyvalue MusicPlayerHeader Text "Music Player" "LeftPanel.inc"][!WriteKeyvalue ThemesHeader Text "Themes" "LeftPanel.inc"][!WriteKeyvalue SkinHeader Text "Skin" "LeftPanel.inc"][!WriteKeyvalue Whatthis Text "FAQ  <" "LeftPanel.inc"][!ActivateConfig "RainCenter\Settings" "FAQ.ini"]
