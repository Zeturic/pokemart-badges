#include "global.h"

u32 s86_open_shop(u8* pos) {
    const u16* itemlist = (const u16*) script_read_word(pos);
    if (itemlist == MART_DYNAMIC) itemlist = select_inventory();
    
    pokemart_menu(itemlist);
    script_env_2_context_set_ctx_paused();
    return 1;
}

const u16* select_inventory() {
    u32 level = 0;
    
    for (u32 i = 0; i < 8; ++i)
        if (checkflag(FLAG_FIRST_BADGE + i))
            ++level;
    
    return inventories[level];
}