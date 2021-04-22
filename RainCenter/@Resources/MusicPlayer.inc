;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;║ Music Player                                                                                         ║
;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[Player]
Measure=Plugin
Plugin=WebNowPlaying
PlayerName=#Player#
PlayerType=TITLE 
DisableLeadingZero=1
OnChangeAction=[!UpdateMeasureGroup LazyMusicMeasures]
UpdateDivider=1

[PlayerStateMeasure]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=State
IfCondition=PlayerStateMeasure = 1
IfTrueAction=[!SetOption PlayPause ImageName #@#Graphics\Icons\Pause.png][!UpdateMeter PlayPause][!Redraw]
IfCondition2=PlayerStateMeasure = 2
IfTrueAction2=[!SetOption PlayPause ImageName #@#Graphics\Icons\Play.png][!UpdateMeter PlayPause][!Redraw]
IfCondition3=PlayerStateMeasure = 0
IfTrueAction3=[!HideMeterGroup Music][!DisableMeasureGroup MusicMeasures][!ShowMeterGroup EmptySpotifyBox][!HideMeter SpotifyBox]
IfFalseAction3=[!ShowMeterGroup Music][!EnableMeasureGroup MusicMeasures][!UpdateMeasureGroup MusicMeasures][!UpdateMeterGroup Music][!HideMeterGroup EmptySpotifyBox][!ShowMeter SpotifyBox][!Redraw]
IfConditionMode=0
UpdateDivider=1
DynamicVariables=1

[AlbumArt]
Measure=Plugin
Plugin=WebNowPlaying
PlayerName=[Player]
PlayerType=COVER
IfConditionMode=1
Group=MusicMeasures | LazyMusicMeasures
OnUpdateAction=[!UpdateMeter AlbumArtImage][!UpdateMeasureGroup Chameleon][!Redraw]
CoverPath=#@#Graphics\Backgrounds\Cover.png

[Album]
Measure=Plugin
Plugin=WebNowPlaying
PlayerName=[Player]
PlayerType=ALBUM
Group=MusicMeasures | LazyMusicMeasures

[Artist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerName=[Player]
PlayerType=ARTIST
Group=MusicMeasures | LazyMusicMeasures

[Total]
Measure=Plugin
Plugin=WebNowPlaying
PlayerName=[Player]
PlayerType=DURATION
UpdateDivider=1
Group=MusicMeasures

[Current]
Measure=Plugin
Plugin=WebNowPlaying
PlayerName=[Player]
PlayerType=POSITION
UpdateDivider=1
Group=MusicMeasures

[Percent]
Measure=Calc
Formula=Current/Total
UpdateDivider=1
Group=MusicMeasures

[GetSuffle]
Measure=Plugin
Plugin=WebNowPlaying
PlayerName=[Player]
PlayerType=Shuffle
UpdateDivider=1
OnChangeAction=[!UpdateMeasure Exporter]
Group=MusicMeasures
[GetRepeat]
Measure=Plugin
Plugin=WebNowPlaying
PlayerName=[Player]
PlayerType=Repeat
UpdateDivider=1
OnChangeAction=[!UpdateMeasure Exporter]
Group=MusicMeasures
[GetRating]
Measure=Plugin
Plugin=WebNowPlaying
PlayerName=[Player]
PlayerType=Rating
UpdateDivider=1
OnChangeAction=[!UpdateMeasure Exporter]
Group=MusicMeasures
[Exporter]
Measure=Calc
IfCondition=(GetSuffle = 1)
IfTrueAction=[!SetOption Suffle MeterStyle "MusicButtonStyle | YesStyle"][!UpdateMeter Suffle][!ShowMeter Dot1]
IfFalseAction=[!SetOption Suffle MeterStyle "MusicButtonStyle | NoStyle"][!UpdateMeter Suffle][!HideMeter Dot1]
IfCondition2=(GetRepeat = 0)
IfTrueAction2=[!SetOption Repeat MeterStyle "MusicButtonStyle | NoStyle"][!UpdateMeter Repeat][!HideMeter Dot2]
IfCondition3=(GetRepeat = 1)
IfTrueAction3=[!SetOption Repeat MeterStyle "MusicButtonStyle | YesStyle"][!SetOption Repeat ImageName "#@#Graphics\Icons\Repeat.png"][!UpdateMeter Repeat][!ShowMeter Dot2]
IfFalseAction3=[!SetOption Repeat ImageName "#@#Graphics\Icons\Repeat1.png"]
IfCondition4=(GetRepeat = 2)
IfTrueAction4=[!SetOption Repeat MeterStyle "MusicButtonStyle | YesStyle"][!UpdateMeter Repeat][!ShowMeter Dot2]
IfCondition5=(GetRating = 5)
IfTrueAction5=[!SetOption Heart ImageName "#@#Graphics\Icons\Fullheart.png"][!SetOption Heart LeftMouseUpAction """[!CommandMeasure "PlayerStateMeasure" "SetRating 0"]"""][!UpdateMeter Heart]
IfFalseAction5=[!SetOption Heart ImageName "#@#Graphics\Icons\Heart.png"][!SetOption Heart LeftMouseUpAction """[!CommandMeasure "PlayerStateMeasure" "SetRating 5"]"""][!UpdateMeter Heart]
IfConditionMode=1
OnUpdateAction=[!redraw]
DynamicVariables=1
UpdateDivider=-1
Group=MusicMeasures

;╔══════════════════════════════════════════════════════════════════════════════════════════════════════╗
;║ Music Player METERS                                                                                  ║
;╚══════════════════════════════════════════════════════════════════════════════════════════════════════╝

[AlbumArtImage]
Meter=Image
ImageName=#@#Graphics\Backgrounds\Cover.png
MaskImageName=#@#Graphics\Backgrounds\Mask.png
X=(#BoxWidth#+5-65*#RelativeScale#/2)
Y=(7*#RelativeScale#)
W=(65*#RelativeScale#)
H=(65*#RelativeScale#)
PreserveAspectRatio=2
Container=SpotifyContainer
DynamicVariables=1
UpdateDivider=1
MouseOverAction=[!ShowMeter Heart][!SetOption AlbumArtImage ImageTint "0,0,0,50"][!UpdateMeter AlbumArtImage][!Redraw]
MouseLeaveAction=[!HideMeter Heart][!SetOption AlbumArtImage ImageTint "FFFFFF"][!UpdateMeter AlbumArtImage][!Redraw]
Group=Music

[Heart]
Meter=Image
X=((65/2-20/2)*#RelativeScale#)r
Y=((65/2-20/2)*#RelativeScale#)r
SolidColor=0,0,0,1
Container=SpotifyContainer
W=(20*#RelativeScale#)
H=(20*#RelativeScale#)
Hidden=1
LeftMouseUpAction=[!CommandMeasure "PlayerStateMeasure" "SetRating 5"]
UpdateDivider=-1

[ImageShadow]
Meter=Shape
X=(#BoxWidth#+5-65*#RelativeScale#/2-2)
Y=(5*#RelativeScale#)
Shape=Rectangle 0,0,(69*#RelativeScale#),(69*#RelativeScale#),7,7 | StrokeWidth 0 | fill color 0,0,0,50
UpdateDivider=-1
Container=SpotifyContainer
Group=Music

[SongName]
Meter=String
MeasureName=Player
Text=%1
X=(#BoxWidth#+5)
Y=(75*#RelativeScale#)
W=(#BoxWidth#*2)
Clipstring=1
FontColor=#ColorModeOpposite#
FontSize=(12*#RelativeScale#)
MeterStyle=SemiBoldText
StringALign=Center
Container=SpotifyContainer
UpdateDivider=1
Group=Music

[ArtistName]
Meter=String
MeasureName=Artist
Text=%1
X=r
Y=(93*#RelativeScale#)
W=(#BoxWidth#*2)
H=(15*#RelativeScale#)
FontSize=(10*#RelativeScale#)
ClipString=1
FontSize=10
FontColor=150,150,150
MeterStyle=RegularText
StringALign=Center
Container=SpotifyContainer
UpdateDivider=1
Group=Music

[MusicButtonStyle]
W=(26*#RelativeScale#)
Container=SpotifyContainer
SolidColor=0,0,0,1
Group=Music

[Suffle]
Meter=Image
ImageName=#@#Graphics\Icons\Suffle.png
X=#SuffleX#
Y=#SuffleY#
LeftMouseUpAction=[!CommandMeasure "PlayerStateMeasure" "Shuffle"]
UpdateDivider=-1
MeterStyle=MusicButtonStyle
[YesStyle]
ImageTint=1DB954
[NoStyle]
ImageTint=FFFFFF
[Dot1]
Meter=Shape
MeterStyle=DotStyle
[DotStyle]
X=r
Y=r
Container=SpotifyContainer
Shape=Rectangle 13,23,3,3,1.5,1.5 | Fill Color 1DB954 | StrokeWidth 0
UpdateDivider=-1
Hidden=1
Group=Music

[Rewind]
Meter=Image
ImageName=#@#Graphics\Icons\RW.png
X=(#SuffleX#+30*#RelativeScale#)
Y=#SuffleY#
MeterStyle=MusicButtonStyle
ImageTint=200,200,200
LeftMouseUpAction=[!CommandMeasure "PlayerStateMeasure" "Previous"]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint FFFFFF][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint 200,200,200][!UpdateMeter #CURRENTSECTION#][!Redraw]
UpdateDivider=-1

[PlayPause]
Meter=Image
X=(#SuffleX#+30*2*#RelativeScale#)
Y=#SuffleY#
ImageName=
MeterStyle=MusicButtonStyle
ImageTint=220,220,220
LeftMouseUpAction=[!CommandMeasure "PlayerStateMeasure" "PlayPause"]
MouseOverAction=[!SetOption #CURRENTSECTION# X (#SuffleX#+30*2-2)][!SetOption #CURRENTSECTION# Y (#SuffleY#-2)][!SetOption #CURRENTSECTION# W (30*#RelativeScale#)][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# X (#SuffleX#+30*2)][!SetOption #CURRENTSECTION# Y #SuffleY#][!SetOption #CURRENTSECTION# W (26*#RelativeScale#)][!UpdateMeter #CURRENTSECTION#][!Redraw]
UpdateDivider=-1

[Forward]
Meter=Image
X=(#SuffleX#+30*3*#RelativeScale#)
Y=#SuffleY#
ImageName=#@#Graphics\Icons\FF.png
MeterStyle=MusicButtonStyle
ImageTint=200,200,200
LeftMouseUpAction=[!CommandMeasure "PlayerStateMeasure" "Next"]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint FFFFFF][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint 200,200,200][!UpdateMeter #CURRENTSECTION#][!Redraw]
UpdateDivider=-1

[Repeat]
Meter=Image
ImageName=#@#Graphics\Icons\Repeat.png
X=(#SuffleX#+30*4*#RelativeScale#)
Y=#SuffleY#
LeftMouseUpAction=[!CommandMeasure "PlayerStateMeasure" "Repeat"]
UpdateDivider=-1
MeterStyle=MusicButtonStyle
[RepeatStyle]
ImageName=#@#Graphics\Icons\Repeat.png
[RepeatStyle1]
ImageName=#@#Graphics\Icons\Repeat1.png
[Dot2]
Meter=Shape
X=-3r
MeterStyle=DotStyle


[MusicCurrentVolume]
Measure=Plugin
Plugin=WebNowPlaying
PlayerName=[Player]
PlayerType=VOLUME
IfCondition=(MusicCurrentVolume = -1)
IfFalseAction=[!SetVariable VolumeBarX "([MusicCurrentVolume]*#VolumeBarW#/100+([VolumeBarHitbox:X]))"][!SetOption #CURRENTSECTION# OnUpdateAction """"""]
OnChangeAction=[!SetVariable VolumeBarX "([MusicCurrentVolume]*#VolumeBarW#/100+([VolumeBarHitbox:X]))"][!UpdateMeasure MeasurePercent][!UpdateMeterGroup Volume][!Redraw]
IfConditionMode=1
DynamicVariables=1
UpdateDivider=1
Group=MusicMeasures

[MeasurePercent]
Measure=Calc
Formula=((#VolumeBarX#-([VolumeBarHitbox:X]))*100/((([VolumeBarHitbox:X])+#VolumeBarW#)-([VolumeBarHitbox:X])))
;The formula for percentage in range is "((Input-Min)*100/(Max-Min))"
DynamicVariables=1
Group=MusicMeasures

[MeasureMouse]
Measure=Plugin
Plugin=Mouse
LeftMouseDragAction=[!SetVariable VolumeBarX "(Clamp(($MouseX$),([VolumeBarHitbox:X]),(([VolumeBarHitbox:X])+#VolumeBarW#)))"][!CommandMeasure "MusicCurrentVolume" "SetVolume [MeasurePercent]"][!UpdateMeasure MeasurePercent][!UpdateMeterGroup Volume][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureMouse "Stop"][!SetOPtion ForceFull LeftMouseUpAction """[!UpdateMeasure UNload]"""][!SetOption MusicCurrentVolume OnChangeAction """[!SetVariable VolumeBarY (([*MusicCurrentVolume:*]/-1+100)*(#*SquareWidth*#*2)/100+[*VolumeSliderBox:Y*])][!UpdateMeasure MeasurePercent][!UpdateMeterGroup Volume][!Redraw]"""][!Delay 1000][!UpdateMeter ForceFull][!UpdateMeasure MusicCurrentVolume]
RelativeToSkin=1
RequireDragging=1
DynamicVariables=1
Group=MusicMeasures

[VolumeSignState1]
RightMouseUpAction=[!SetVariable PreVolume [MeasurePercent]][!CommandMeasure "MusicCurrentVolume" "SetVolume 0"][!SetVariable VolumeBarX ([VolumeBarHitbox:X])][!Redraw][!UpdateMeterGroup Volume][!UpdateMeasure MeasurePercent][!UpdateMeter VolumeSign]
[VolumeSignState2]
RightMouseUpAction=[!CommandMeasure "MusicCurrentVolume" "SetVolume #PreVolume#"][!SetVariable VolumeBarX "(#PreVolume#*#VolumeBarW#/100+([VolumeBarHitbox:X]))"][!UpdateMeasure MeasurePercent][!UpdateMeterGroup Volume][!Redraw]

[VolumeBar]
Meter=Shape
X=((#SuffleX#-(#VolumeBarW#-146)/2)*#RelativeScale#)
Y=(#SuffleY#+30*#RelativeScale#)
Shape=Rectangle 0,0,#VolumeBarW#,5,2,5 | Fill Color 40,40,40 | StrokeWidth 0
Shape2=Rectangle 0,0,(#VolumeBarX#-([VolumeBarHitbox:X])),5,2.5 | Fill Color #VolumeColor# | StrokeWidth 0
DynamicVariables=1
Container=SpotifyContainer
Group=Volume | Music

[VolumeBarHitbox]
Meter=Shape
Shape=Rectangle 0,0,#VolumeBarW#,15 | Fill Color 0,0,0,1 | StrokeWidth 0
X=r
Y=-5r
LeftMouseDownAction=[!SetOPtion ForceFull LeftMouseUpAction """"""][!SetOption MusicCurrentVolume OnChangeAction """"""][!UpdateMeter MusicCurrentVolume][!UpdateMeter ForceFull][!CommandMeasure MeasureMouse "Start"]
Container=SpotifyContainer
MouseOverAction=[!SetVariable VolumeColor 29,185,84][!UpdateMeter VolumeBar][!Redraw]
MouseLeaveAction=[!SetVariable VolumeColor B3B3B3][!UpdateMeter VolumeBar][!Redraw]
MeterStyle=VolumeSignState1
Group=Volume | Music