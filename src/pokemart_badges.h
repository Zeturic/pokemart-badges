#pragma once

#include "types.h"
#include "items.h"

extern item_t* inventories[];

typedef void (*pokemart_menu_t) (item_t* itemlist);
// #define pokemart_item_setup ((pokemart_item_setup_t) (0x0809ABD8 |1))
#define pokemart_menu ((pokemart_menu_t) (0x0809C164 |1))

typedef void (*script_env_2_context_set_ctx_paused_t) (void);
#define script_env_2_context_set_ctx_paused ((script_env_2_context_set_ctx_paused_t) (0x08069B28 |1))

typedef bool (*checkflag_t) (u16);
#define checkflag ((checkflag_t) (0x0806E6D0 |1))

u16 badge_flags[];
u32 select_inventory (void);