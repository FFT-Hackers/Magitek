#include <windows.h>

__declspec(dllexport) void TekInit()
{
    MessageBoxA(NULL, "Hi from the DLL!", "Magitek", 0);
}
