#pragma once

#include "types.h"
#include "items.h"
#include "inventories.h"

typedef void (*pokemart_menu_t) (item_t* itemlist);
#define pokemart_menu ((pokemart_menu_t) (0x0809C164 |1))

typedef void (*script_env_2_context_set_ctx_paused_t) (void);
#define script_env_2_context_set_ctx_paused ((script_env_2_context_set_ctx_paused_t) (0x08069B28 |1))

typedef u32 (*script_read_word_t) (u8*);
#define script_read_word ((script_read_word_t) (0x08069910 |1))

typedef bool (*checkflag_t) (u16);
#define checkflag ((checkflag_t) (0x0806E6D0 |1))

extern u16 mart_advancement_flags[];
item_t* select_inventory (void);

#define MART_DYNAMIC 0