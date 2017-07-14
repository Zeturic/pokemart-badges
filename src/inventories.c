#include "inventories.h"

item_t inventory_zero_badges[] = {
    ITEM_POKEBALL,
    ITEM_POTION,
    ITEM_ANTIDOTE,
    ITEM_PARLYZHEAL,
    ITEM_NONE
};

item_t inventory_one_badge[] = {
    ITEM_POKEBALL,
    ITEM_POTION,
    ITEM_SUPERPOTION,
    ITEM_ANTIDOTE,
    ITEM_PARLYZHEAL,
    ITEM_AWAKENING,
    ITEM_BURNHEAL,
    ITEM_ICEHEAL,
    ITEM_ESCAPEROPE,
    ITEM_REPEL,
    ITEM_NONE
};

#define inventory_two_badges inventory_one_badge
/*item_t inventory_two_badges[] = {
    ITEM_NONE
};*/

item_t inventory_three_badges[] = {
    ITEM_POKEBALL,
    ITEM_GREATBALL,
    ITEM_POTION,
    ITEM_SUPERPOTION,
    ITEM_REVIVE,
    ITEM_ANTIDOTE,
    ITEM_PARLYZHEAL,
    ITEM_AWAKENING,
    ITEM_BURNHEAL,
    ITEM_ICEHEAL,
    ITEM_ESCAPEROPE,
    ITEM_REPEL,
    ITEM_SUPERREPEL,
    ITEM_NONE
};

#define inventory_four_badges inventory_three_badges
/*item_t inventory_four_badges[] = {
    ITEM_NONE
};*/

item_t inventory_five_badges[] = {
    ITEM_POKEBALL,
    ITEM_GREATBALL,
    ITEM_ULTRABALL,
    ITEM_POTION,
    ITEM_SUPERPOTION,
    ITEM_HYPERPOTION,
    ITEM_REVIVE,
    ITEM_ANTIDOTE,
    ITEM_PARLYZHEAL,
    ITEM_AWAKENING,
    ITEM_BURNHEAL,
    ITEM_ICEHEAL,
    ITEM_FULLHEAL,
    ITEM_ESCAPEROPE,
    ITEM_REPEL,
    ITEM_SUPERREPEL,
    ITEM_NONE
};

#define inventory_six_badges inventory_five_badges
/*item_t inventory_six_badges[] = {
    ITEM_NONE
};*/

item_t inventory_seven_badges[] = {
    ITEM_POKEBALL,
    ITEM_GREATBALL,
    ITEM_ULTRABALL,
    ITEM_POTION,
    ITEM_SUPERPOTION,
    ITEM_HYPERPOTION,
    ITEM_MAXPOTION,
    ITEM_REVIVE,
    ITEM_ANTIDOTE,
    ITEM_PARLYZHEAL,
    ITEM_AWAKENING,
    ITEM_BURNHEAL,
    ITEM_ICEHEAL,
    ITEM_FULLHEAL,
    ITEM_ESCAPEROPE,
    ITEM_REPEL,
    ITEM_SUPERREPEL,
    ITEM_MAXREPEL,
    ITEM_NONE
};

item_t inventory_eight_badges[] = {
    ITEM_POKEBALL,
    ITEM_GREATBALL,
    ITEM_ULTRABALL,
    ITEM_POTION,
    ITEM_SUPERPOTION,
    ITEM_HYPERPOTION,
    ITEM_MAXPOTION,
    ITEM_FULLRESTORE,
    ITEM_REVIVE,
    ITEM_ANTIDOTE,
    ITEM_PARLYZHEAL,
    ITEM_AWAKENING,
    ITEM_BURNHEAL,
    ITEM_ICEHEAL,
    ITEM_FULLHEAL,
    ITEM_ESCAPEROPE,
    ITEM_REPEL,
    ITEM_SUPERREPEL,
    ITEM_MAXREPEL,
    ITEM_NONE
};

item_t* inventories[] = {
  inventory_zero_badges, inventory_one_badge, inventory_two_badges,
  inventory_three_badges, inventory_four_badges, inventory_five_badges,
  inventory_six_badges, inventory_seven_badges, inventory_eight_badges 
};

#ifdef USE_INITIAL_INVENTORY
item_t inventory_initial[] = {
    ITEM_POTION,
    ITEM_ANTIDOTE,
    ITEM_PARLYZHEAL,
    ITEM_NONE
};
#endif