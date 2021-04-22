strComputer = "."

Dim Wsh
Set Wsh = CreateObject("WScript.Shell")
Set objWMIService = GetObject("winmgmts:" _
& "{impersonationLevel=impersonate}!\\" _
& strComputer & "\root\cimv2")
Set colProcessList = objWMIService.ExecQuery _
("Select * from Win32_Process Where Name = 'Rainmeter.exe'")
For Each objProcess in colProcessList
Wsh.AppActivate objProcess.ProcessId
Next