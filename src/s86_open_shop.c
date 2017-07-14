#include "s86_open_shop.h"

u32 s86_open_shop (u8* pos) {
    item_t* itemlist = (item_t*) script_read_word(pos);
    if (itemlist == MART_DYNAMIC) itemlist = select_inventory();
    
    pokemart_menu(itemlist);
    script_env_2_context_set_ctx_paused();
    return 1;
}

item_t* select_inventory (void) {
    #ifdef USE_INITIAL_INVENTORY
    if (!checkflag(INITIAL_INVENTORY_END_FLAG))
        return inventory_initial;
    #endif
    
    u32 level = 0;
    
    for (u32 i = 0; i < 8; ++i)
        if (checkflag(mart_advancement_level[i]))
            ++level;
    
    return inventories[level];
}

u16 mart_advancement_level[] = {
    0x820, 0x821, 0x822, 0x823, 0x824, 0x825, 0x826, 0x827
};