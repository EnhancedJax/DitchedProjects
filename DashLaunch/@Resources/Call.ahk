#SingleInstance force
#NoTrayIcon


$LWin::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasureGroup "UpdateOnLoad" "Dashlaunch\QuickMenu"""
	return

#1::
	send {LWin Up}
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!SetVariable "Page" "1" "Dashlaunch\QuickMenu"""
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasureGroup "UpdateOnLoad" "Dashlaunch\QuickMenu"""
	return
#2::
	send {LWin Up}
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!SetVariable "Page" "2" "Dashlaunch\QuickMenu"""
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasureGroup "UpdateOnLoad" "Dashlaunch\QuickMenu"""
	return
#c::
	send {LWin Up}
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!SetVariable "Page" "3" "Dashlaunch\QuickMenu"""
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasureGroup "UpdateOnLoad" "Dashlaunch\QuickMenu"""
	return
#q::
	send {LWin Up}
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!SetVariable "Page" "4" "Dashlaunch\QuickMenu"""
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasureGroup "UpdateOnLoad" "Dashlaunch\QuickMenu"""
	return
#z::
	send {LWin Up}
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!SetVariable "Page" "5" "Dashlaunch\QuickMenu"""
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasureGroup "UpdateOnLoad" "Dashlaunch\QuickMenu"""
	return

#Esc::ExitApp

LWin & F1::
MsgBox, Windows key + F1
return
