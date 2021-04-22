[mPath]
Measure=Plugin
Plugin=FileView
Path="#@#Applications\AccessCenter"
DynamicVariables=1
COunt=#Count#
UpdateDivider=1
ShowDotDot=0
ShowFolder=0
Group=Icons

[Icon1Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=Large
Index=1
Group=Children | Icons

[Icon2Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=Large
Index=2
Group=Children | Icons

[Icon3Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=Large
Index=3
Group=Children | Icons

[Icon4Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=Large
Index=4
Group=Children | Icons

[Icon5Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=Large
Index=5
Group=Children | Icons

[Icon6Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=Large
Index=6
Group=Children | Icons

[Icon7Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=Large
Index=7
Group=Children | Icons

[Icon8Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=Large
Index=8
Group=Children | Icons

[Icon9Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=Icon
IconSize=Large
Index=9
Group=Children | Icons

[UserName]
Measure=PLugin
Plugin=SysInfo
SysInfoType=USER_NAME
DynamicVariables=1
OnUpdateAction=[!SetVariable UserName [UserName]][!CommandMeasure mPath2 "Update"]

[mPath2]
Measure=Plugin
Plugin=FileView
Path="C:\Users\#UserName#\Downloads"
DynamicVariables=1
COunt=10
UpdateDivider=1
ShowDotDot=0
ShowFolder=1
Group=Icons

[DL1Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath2]
Index=1
Type=FileName
Group=Children | Download

[DL2Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath2]
Index=2
Type=FileName
Group=Children | Download

[DL3Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath2]
Index=3
Type=FileName
Group=Children | Download

[DL4Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath2]
Index=4
Type=FileName
Group=Children | Download

[DL5Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath2]
Index=5
Type=FileName
Group=Children | Download

[DL6Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath2]
Index=6
Type=FileName
Group=Children | Download

[DL7Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath2]
Index=7
Type=FileName
Group=Children | Download

[DL8Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath2]
Index=8
Type=FileName
Group=Children | Download

[DL9Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath2]
Index=9
Type=FileName
Group=Children | Download

[DL10Measure]
Measure=Plugin
Plugin=FileView
Path=[mPath2]
Index=10
Type=FileName
Group=Children | Download