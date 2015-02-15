// VanDLL.cpp : Definiert die exportierten Funktionen für die DLL-Anwendung.
//

#include "stdafx.h"
#include "VanDLL.h"

namespace VanDLL
{
	bool VanishCommands::CheckTaskbar()
	{
		if (IsWindowVisible(FindWindow(L"Shell_TrayWnd", L"")))
			return true;
		else
			return false;
	}

	void VanishCommands::HideTaskbar()
	{
		ShowWindow(FindWindow(L"Shell_TrayWnd", L""), SW_HIDE);
	}

	void VanishCommands::ShowTaskbar()
	{
		ShowWindow(FindWindow(L"Shell_TrayWnd", L""), SW_SHOW);
	}
}