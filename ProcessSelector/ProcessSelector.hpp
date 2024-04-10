#pragma once
#include <Windows.h>

namespace ProcessSelector
{
	DWORD ask_pid();
	HWND get_window_contains_name(const char* window_name);
}
