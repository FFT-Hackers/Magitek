#include <mog/mog.h>

__declspec(dllexport) void tekInit()
{
    // Disable the "Restart with Steam" feature
    mogReplaceSkip(mogVirtualAddress(0x613a8), 0x22);
}
