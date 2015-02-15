// VanishBar.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//
#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <windows.h>

#using <VanDLL.dll>

using namespace std;
using namespace VanDLL;

int main(int argc, char *argv[])
{
	cout << "VanishBar 2.0 Console\n" <<
		"__________________________________________________________________\n" << endl;
	if (argc < 2)
	{
		cerr << "Usage: VanishBar [-t] -c|-h|-s\n\n" <<
				"\t-t\tDisable messages\n" <<
				"\t-c\tCheck if taskbar is visible or not\n" <<
				"\t-s\tShow taskbar\n" <<
				"\t-h\tHide taskbar\n" <<
				"\n[] = Optional parameter" <<
				"\n__________________________________________________________________" << endl;
		system("pause");
		return 1;
	}
	else
	{
		bool showtext = true;
		vector<string> args;
		for (int i = 1; i < argc; i++)
			args.push_back(argv[i]);
		for each (string arg in args)
		{
			if (arg == "-t") showtext = false;
			else if (arg == "-h")
			{
				VanishCommands::HideTaskbar();
				if (showtext)
				{
					cout << "Your taskbar should be hidden now." <<
							"\n__________________________________________________________________" << endl;
					system("pause");
				}
			}
			else if (arg == "-s")
			{
				VanishCommands::ShowTaskbar();
				if (showtext)
				{
					cout << "Your taskbar should be visible now." <<
							"\n__________________________________________________________________" << endl;
					system("pause");
				}
			}
			else if (arg == "-c")
			{
				if (!showtext) cout << "ERROR: Disabling messages is senseless when using this parameter." << endl;
				if (VanishCommands::CheckTaskbar())
					cout << "Your taskbar is visible." << endl;
				else
					cout << "Your taskbar is not visible." << endl;
				cout << "\n__________________________________________________________________" << endl;
				system("pause");
			}
		}
		return 0;
	}
}

