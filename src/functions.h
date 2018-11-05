#pragma once
#include "types.h"

void pokemart_menu(u16* itemlist);
void script_env_2_context_set_ctx_paused(void);
u32 script_read_word(u8*);
bool checkflag(u16);

u16* select_inventory();