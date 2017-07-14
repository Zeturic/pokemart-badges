#include "pokemart_badges.h"

void pokemart_badges (void) {
    pokemart_menu(inventories[select_inventory()]);
    script_env_2_context_set_ctx_paused();
}

u32 select_inventory (void) {
    u32 badge_count = 0;
    
    for (u32 i = 0; i < 8; ++i)
        if (checkflag(badge_flags[i]))
            ++badge_count;
    
    return badge_count;
}

u16 badge_flags[] = {
    0x820, 0x821, 0x822, 0x823, 0x824, 0x825, 0x826, 0x827
};