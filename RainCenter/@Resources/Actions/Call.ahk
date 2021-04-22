#SingleInstance force
#NoTrayIcon


$LWin::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasureGroup "UpdateOnLoad" "RainCenter\Main"""
	return
	
~Esc::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasure "Unload" "RainCenter\Main"""
	return

LWin & F1::
MsgBox, Windows key + F1
return
