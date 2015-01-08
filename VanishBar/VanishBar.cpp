// VanishBar.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "VV   VV    A    NN   NN II   SSSSS HH   HH BBBBB      A    RRRRR  \n"
				"VV   VV   AAA   NNN  NN II  SSSSSS HH   HH BBBBBBB   AAA   RRRRRRR\n"
				"VV   VV  AAAAA  NNNN NN II SSS     HH   HH BB   BB  AAAAA  RR   RR\n"
				"VVV VVV AA   AA NN NNNN II  SSSSS  HHHHHHH BBBBBB  AA   AA RRRRRR " << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
		cout << " VV VV  AAAAAAA NN  NNN II     SSS HH   HH BB   BB AAAAAAA RR   RR\n"
				" VVVVV  AA   AA NN   NN II SSSSSS  HH   HH BBBBBBB AA   AA RR   RR\n"
				"  VVV   AA   AA NN   NN II SSSSS   HH   HH BBBBB   AA   AA RR   RR" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "__________________________________________________________________" << endl;
		cerr << "Usage: VanishBar [-t] -h/-s\n\n" <<
				"	-t	Disable messages\n" <<
				"	-s	Show taskbar\n" <<
				"	-h	Hide taskbar\n" <<
				"\n[] = Optional parameter" << endl;
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
				ShowWindow(FindWindow(L"Shell_TrayWnd", L""), SW_HIDE);
				if (showtext)
				{
					cout << "Your taskbar should be hidden now." << endl;
					system("pause");
				}
			}
			else if (arg == "-s")
			{
				ShowWindow(FindWindow(L"Shell_TrayWnd", L""), SW_SHOW);
				if (showtext)
				{
					cout << "Your taskbar should be visible now." << endl;
					system("pause");
				}
			}
		}
		return 0;
	}
}

