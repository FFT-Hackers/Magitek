#include <stdint.h>
#include <windows.h>

void TekReplaceFunction(void* dst, void* newAddr)
{
    DWORD oldProtect;
    uint32_t jmpDelta;

    jmpDelta = (uint32_t)newAddr - ((uint32_t)dst + 5);
    VirtualProtect(dst, 5, PAGE_READWRITE, &oldProtect);
    *(uint8_t*)(dst) = 0xe9;
    *((uint32_t*)((uint8_t*)dst + 1)) = jmpDelta;
    VirtualProtect(dst, 5, oldProtect, &oldProtect);
    FlushInstructionCache(GetCurrentProcess(), dst, 5);
}

__declspec(dllexport) void TekInit()
{
    MessageBoxA(NULL, "Hi from the DLL!", "Magitek", 0);
}
