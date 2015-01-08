# VanishBar
A tool to hide the Windows taskbar

VanishBar is a Win32 console application written in C++ that has the ability to hide or show the Windows taskbar. This could be helpful in situations like the following one: You're trying to run LiteStep on top of Windows Explorer and you're having the problem that the Windows Explorer flickers through LiteStep.

Usage: VanishBar.exe [-t] -h/-s

-t    When this argument is given, messages won't be shown.
-h    Hide the taskbar
-s    Show the taskbar again
