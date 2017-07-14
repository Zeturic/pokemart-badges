#include "inventories.h"

item_t inventory_zero_badges[] = {
    ITEM_TM10,
    ITEM_NONE
};

item_t inventory_one_badge[] = {
    ITEM_TM11,
    ITEM_NONE
};

item_t inventory_two_badges[] = {
    ITEM_TM12,
    ITEM_NONE
};

item_t inventory_three_badges[] = {
    ITEM_TM13,
    ITEM_NONE
};

item_t inventory_four_badges[] = {
    ITEM_TM14,
    ITEM_NONE
};

item_t inventory_five_badges[] = {
    ITEM_TM15,
    ITEM_NONE
};

item_t inventory_six_badges[] = {
    ITEM_TM16,
    ITEM_NONE
};

item_t inventory_seven_badges[] = {
    ITEM_TM17,
    ITEM_NONE
};

item_t inventory_eight_badges[] = {
    ITEM_TM18,
    ITEM_NONE
};

item_t* inventories[] = {
  inventory_zero_badges, inventory_one_badge, inventory_two_badges,
  inventory_three_badges, inventory_four_badges, inventory_five_badges,
  inventory_six_badges, inventory_seven_badges, inventory_eight_badges 
};

#ifdef USE_INITIAL_INVENTORY
item_t inventory_initial[] = {
    ITEM_TM09,
    ITEM_NONE
};
#endif