## Gym Badge Based Poké Mart Inventory

Starting in Diamond and Pearl, Poké Marts started adding items to their inventory as you progress through the game and collect Gym Badges. This prevents the issue where the Poké Marts in early game areas are essentially useless by the end of the game.

This enhances Fire Red's `pokemart` scripting command, allowing it to do the same, without breaking statically set item lists.

### How do I insert this?

Open `inventories.h`. This contains several arrays (`inventory_zero_badges`, `inventory_five_badges`, etc) which correspond to the shop's inventory after a particular number of badges. Set them as you see fit (currently they correspond to HGSS's item list). Basically, they just consist of a list of items, ending in `ITEM_NONE`, so they should be fairly simple to modify.

Drop a Fire Red ROM into the projects root directory, and name it `BPRE0.gba`.

Build everything using `python scripts/build` or `python scripts/build2`, whichever works for you. One of the two should work, as long as you have your environment set up properly.

Then, you can insert it with `python scripts/insert`, `python scripts/insert2`, or `python scripts/insert3`. Again, use whichever works in your environment. By default, the insert scripts will insert the code at `0x800000`; if you need to put it somewhere else (because you already put something there), you can choose where you want to insert it with the `--offset` option.

For example, if you want to insert at `0x900000`, you would convert to decimal (`9437184`), and then use `python scripts/insert --offset 9437184` (again, you can use whichever of the three insert scripts work for your environment). And, yes, converting to decimal is required.

Once you've ran the build and insert scripts, your output will be in `test.gba`.

### How do I use this?

If your script does something like `pokemart 0x800000`, the argument is understood as a static item list. However, `pokemart 0` will count the number of badges, and use that to pick an item list from `src/inventories.c`. This means if you immediately play `test.gba`, you won't see anything different (because all the scripts will use a static item list).
