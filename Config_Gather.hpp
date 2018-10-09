class CfgGather {
    class Resources {
        class apple {
            amount = 1;
            zones[] = { "apple_1", "apple_2", "apple_3", "apple_4" };
            item = "";
            zoneSize = 30;
        };

        class peach {
            amount = 1;
            zones[] = { "peaches_1", "peaches_2", "peaches_3", "peaches_4" };
            item = "";
            zoneSize = 30;
        };

        class heroin_unprocessed {
            amount = 1;
            zones[] = { "heroin_1" };
            item = "";
            zoneSize = 30;
        };

        class cocaine_unprocessed {
            amount = 1;
            zones[] = { "cocaine_1" };
            item = "";
            zoneSize = 30;
        };

        class cannabis {
            amount = 1;
            zones[] = { "weed_1" };
            item = "";
            zoneSize = 30;
        };
    };

/*
This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
Example:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { "copper_unrefined" };
This will make players mine only copper_unrefined
Now let's go deeper
Example 2:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
    };
    This will give :
    25(±1)% to copper_unrefined;
    70(±1)% to iron_unrefined;
    5%(±1)% to diamond_uncut;

                                                         ! Watch Out !
 If percents are used,you MUST put more than 1 resource in the mined parameter
 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
 mined[] = { "copper_unrefined" }; OK
 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/

    class Minerals {
        class copper_unrefined {
            amount = 1;
            zones[] = { "copper_mine" };
            item = "pickaxe";
            mined[] = {"copper_unrefined"};
            zoneSize = 30;
        };

        class iron_unrefined {
            amount = 1;
            zones[] = { "iron_mine" };
            item = "pickaxe";
            mined[] = { "iron_unrefined" };
            zoneSize = 30;
        };

        class coal_unrefined {
            amount = 1;
            zones[] = { "coal_mine" };
            item = "pickaxe";
            mined[] = { "coal_unrefined" };
            zoneSize = 30;
        };

        class diamond_uncut {
            amount = 1;
            zones[] = { "diamond_mine" };
            item = "pickaxe";
            mined[] = { "diamond_uncut" };
            zoneSize = 30;
        };
		
        class gold_unrefined {
            amount = 1;
            zones[] = { "gold_mine" };
            item = "pickaxe";
            mined[] = { "gold_unrefined" };
            zoneSize = 30;
        };

        class sulfur_unrefined {
            amount = 1;
            zones[] = { "sulfur_mine" };
            item = "pickaxe";
            mined[] = { "sulfur_unrefined" };
            zoneSize = 40;
        };
		
        class scrap_raw {
            amount = 1;
            zones[] = { "scrap_raw" };
            item = "pickaxe";
            mined[] = {"scrap_raw"};
            zoneSize = 30;
        };

        class oil_unprocessed {
            amount = 1;
            zones[] = { "oil_field_1", "oil_field_2" };
            item = "";
            mined[] = { "oil_unprocessed" };
            zoneSize = 30;
        };
    };
};