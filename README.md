The implementation in this repository is very infexible.

Some of the official games upgrade mart inventories after story events that aren't gym battles. For example, ORAS adds Poké Balls and Antidotes to Marts after the player has received the Pokédex. This code has no support for that sort of thing whatsoever.

Another limitation is that there's no way to have more than one growing inventory. For example, maybe in your hack you want to split the standard items between two clerks, one focused on healing items and the other on exploration items like Escape Ropes and Repels. You'd probably want both of those to expand over time, but there's no support for that.

Because of those limitations, I highly suggest you use [Spherical Ice](https://www.pokecommunity.com/member.php?u=67281)'s [script](https://www.pokecommunity.com/showpost.php?p=8471369&postcount=15) instead. While it doesn't directly support the things I mentioned above either, modifying it to do so would be far easier than modifying this.

If you are determined to use this, the code can be found in the `code` branch.
