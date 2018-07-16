## Gym Badge Based Poké Mart Inventory

Starting in Diamond and Pearl, Poké Marts started adding items to their inventory as you progress through the game and collect Gym Badges. This prevents the issue where the Poké Marts in early game areas are essentially useless by the end of the game.

This enhances Fire Red's `pokemart` scripting command, allowing it to do the same, without breaking statically set item lists.

### How do I customize this?

Open `inventories.h`. This contains several arrays (`inventory_zero_badges`, `inventory_five_badges`, etc) which correspond to the shop's inventory after a particular number of badges. Set them as you see fit (currently they correspond to HGSS's item list). Basically, they just consist of a list of items, ending in `ITEM_NONE`, so they should be fairly simple to modify.

### How do I insert this?

Drop a Fire Red ROM into the projects root directory, and name it `rom.gba`. To configure where to start looking for free space, modify `config.ini`. Then, run "python scripts/makinoa".

Your output will be in `test.gba`.

### How do I use this?

If your script does something like `pokemart 0x800000`, the argument is understood as a static item list. However, `pokemart 0` will count the number of badges, and use that to pick an item list from `src/inventories.c`. This means if you immediately play `test.gba`, you won't see anything different (because all the scripts in the vanilla game use a static item list).