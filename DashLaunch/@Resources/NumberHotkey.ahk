#SingleInstance force
#NoTrayIcon
$1::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!SetOption "HotKeyPage" "String" "1" "Dashlaunch\HeaderFooter"""
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasure "HotKeyPage" "Dashlaunch\HeaderFooter"""
	return
$2::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!SetOption "HotKeyPage" "String" "2" "Dashlaunch\HeaderFooter"""
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasure "HotKeyPage" "Dashlaunch\HeaderFooter"""
	return
$c::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!SetOption "HotKeyPage" "String" "3" "Dashlaunch\HeaderFooter"""
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasure "HotKeyPage" "Dashlaunch\HeaderFooter"""
	return
$q::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!SetOption "HotKeyPage" "String" "4" "Dashlaunch\HeaderFooter"""
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasure "HotKeyPage" "Dashlaunch\HeaderFooter"""
	return
$z::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!SetOption "HotKeyPage" "String" "5" "Dashlaunch\HeaderFooter"""
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasure "HotKeyPage" "Dashlaunch\HeaderFooter"""
	return

$Tab::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasure "ReceiverLock" "Dashlaunch\Pages"""
	return

$Space::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!CommandMeasure "PlayerStateMeasure" "PlayPause" "Dashlaunch\HeaderFooter"""
	return

LWin & F1::
MsgBox, Windows key + F1
return