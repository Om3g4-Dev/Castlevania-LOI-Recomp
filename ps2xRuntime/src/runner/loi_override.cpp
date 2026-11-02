#include "game_overrides.h"
#include "ps2_runtime.h"

static void ApplyLoIOverride(PS2Runtime& runtime) {
    // Привязываем адрес V-Blank к нативной реализации
    ps2_game_overrides::bindAddressHandler(runtime, 0x006E5380, "sceGsSyncVCallback");
}

PS2_REGISTER_GAME_OVERRIDE(
    "Castlevania - Lament of Innocence",
    "SLUS_207.33",
    0x400008,
    0,
    ApplyLoIOverride
);