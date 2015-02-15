# VanishBar
A tool to hide the Windows taskbar

VanishBar is a Win32 console application written in C++ that has the ability to hide or show the Windows taskbar. This could be helpful in situations like the following one: You're trying to run LiteStep on top of Windows Explorer and you're having the problem that the Windows Explorer flickers through LiteStep.

How to use it (the easy way)

Just start 'VanishBarUI.exe' and click 'Hide taskbar' to hide your taskbar or the other one to show your taskbar.

How to use it (the not-so-easy-but-almost-invisible way)

You can use the console application by creating and running a shortcut of 'VanishBar.exe' with the following arguments.

Usage: VanishBar.exe [-t] -h/-s

* -t    When this argument is given, messages won't be shown.
* -c    Tells you, if your taskbar is visible or not. Using '-t' with this attribute is senseless.
* -h    Hide the taskbar
* -s    Show the taskbar again

Example:

* VanishBar.exe -t -h   Hides the taskbar without showing messages.

The compiled application can be downloaded from the 'Debug' directory.
