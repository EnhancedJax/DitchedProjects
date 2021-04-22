#SingleInstance Force
#NoTrayIcon

IniRead, OutputVar, CloseInstance.ini, Variables, Module

CloseScript(Name)
	{
	DetectHiddenWindows On
	SetTitleMatchMode RegEx
	IfWinExist, i)%Name%.* ahk_class AutoHotkey
		{
		WinClose
		WinWaitClose, i)%Name%.* ahk_class AutoHotkey, , 2
		}
	}

CloseScript("Start.ahk")
ExitApp