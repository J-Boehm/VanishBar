# VanishBar
## A tool to hide the Windows taskbar

VanishBar is a Win32 console application written in C++ that has the ability to hide or show the Windows taskbar. This could be helpful in situations like the following one: You're trying to run LiteStep on top of Windows Explorer and you're having the problem that the Windows Explorer flickers through LiteStep.

### How to use it

There are three ways to use it:

1. Without arguments:  Will open the VanishBar user interface in which you can hide or show your taskbar manually.
2. '-h' argument:     Will hide your taskbar without showing any window.
3. '-s' argument:     Will show your taskbar without showing any window.

You can use the arguments for example in your Litestep skin where you click a popup item that hides or shows your Windows taskbar.

The compiled application can be downloaded from the 'Debug' directory.
