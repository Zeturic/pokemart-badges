#include "s86_open_shop.h"

u32 s86_open_shop (u8* pos) {
    item_t* itemlist = (item_t*) script_read_word(pos);
    if (itemlist == MART_DYNAMIC) itemlist = select_inventory();
    
    pokemart_menu(itemlist);
    script_env_2_context_set_ctx_paused();
    return 1;
}

item_t* select_inventory (void) {
    u32 level = 0;
    
    for (u32 i = 0; i < 8; ++i)
        if (checkflag(mart_advancement_flags[i]))
            ++level;
    
    return inventories[level];
}

// flags for all the badges
u16 mart_advancement_flags[] = {
    0x820, 0x821, 0x822, 0x823, 0x824, 0x825, 0x826, 0x827
};