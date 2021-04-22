#SingleInstance force
#NoTrayIcon
$1::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!SetOption "HotKeyPage" "String" "1" "Jaxlaunch\HeaderFooter"""
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasure "HotKeyPage" "Jaxlaunch\HeaderFooter"""
	return
$2::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!SetOption "HotKeyPage" "String" "2" "Jaxlaunch\HeaderFooter"""
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasure "HotKeyPage" "Jaxlaunch\HeaderFooter"""
	return
$c::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!SetOption "HotKeyPage" "String" "3" "Jaxlaunch\HeaderFooter"""
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasure "HotKeyPage" "Jaxlaunch\HeaderFooter"""
	return
$q::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!SetOption "HotKeyPage" "String" "4" "Jaxlaunch\HeaderFooter"""
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasure "HotKeyPage" "Jaxlaunch\HeaderFooter"""
	return
$z::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!SetOption "HotKeyPage" "String" "5" "Jaxlaunch\HeaderFooter"""
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasure "HotKeyPage" "Jaxlaunch\HeaderFooter"""
	return

$Tab::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasure "ReceiverLock" "Jaxlaunch\Pages"""
	return

$Space::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!CommandMeasure "PlayerStateMeasure" "PlayPause" "Jaxlaunch\HeaderFooter"""
	return

LWin & F1::
MsgBox, Windows key + F1
return