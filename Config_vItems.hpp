class VirtualShops {
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "toolkit", "fuelFull", "bandages", "waterBottle", "redgull", "peach", "apple", "tbacon", "cprKit" };
    };
	
    class blackmarket {
        name = "STR_Shops_BlackMarket";
        side = "civ";
        conditions = "";
        items[] = { "lockpick", "zipties", "blindfold", "codeCracker", "blastingCharge", "demolitioncharge", "speedbomb" };
    };
	
    class bar {
        name = "STR_Shops_Bar";
        side = "civ";
        conditions = "";
        items[] = { "beer", "whiskey", "tbacon" };
    };
	
    class dunkin {
        name = "STR_Shops_Dunkin";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };
	
    class mcdonalds {
        name = "STR_Shops_mcdonalds";
        side = "civ";
        conditions = "";
        items[] = { "fries", "sandwich", "nuggets", "burger", "pepsi" };
    };
	
    class tacohell {
        name = "STR_Shops_tacohell";
        side = "civ";
        conditions = "";
        items[] = { "taco", "burrito", "paratha", "cola" };
    };

    class furniture {
        name = "STR_Shops_Furniture";
        side = "civ";
        conditions = "";
        items[] = { "storagesmall", "storagebig", "plp_ct_woodboxlightmedium", "furniturewoodtable","furnituretarget","furnitureportgen","furniturefmradio","furniturewoodblue","furnituremetalrack","furniturePalletVert","furnitureMapAltis","furnitureSunChairGreen","furnitureSunChair","furnitureSleepingBagBrown","furnitureSleepingBagBlue","furnitureSleepingBag","furniturecampingtable","furnitureopenlaptop","furniturebagshort","furniturechair","furnituredesk" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "bandages", "morphine", "defibrillator", "toolkit", "waterBottle", "redgull", "tbacon", "apple", "peach", "fuelFull", "cprKit" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "toolkit", "fuelFull", "bandages", "waterBottle", "redgull", "peach", "apple", "tbacon", "cprKit" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "toolkit", "fuelFull", "bandages", "waterBottle", "redgull", "peach", "apple", "tbacon", "cprKit" };
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "marijuana" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class minerals  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "copper_refined", "iron_refined", "coal_refined", "diamond_cut", "gold_refined" };
    };
	
    class seeds  {
        name = "STR_Shops_Seeds";
        side = "civ";
        conditions = "";
        items[] = { "cannabis_seed", "sunflower_seed", "bean_seed", "pumpkin_seed", "wheat_seed", "cotton_seed" };
    };
	
    class plants  {
        name = "STR_Shops_Plants";
        side = "civ";
        conditions = "";
        items[] = { "sunflower", "bean", "pumpkin", "wheat", "cotton" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "toolkit", "fuelFull", "defusekit", "defibrillator", "cprKit", "panicbutton", "morphine", "bandages", "handcuffs", "keys", "spikeStrip", "waterBottle", "tbacon" };
    };
};

class VirtualItems {

    class oilSupplies {
        variable = "oilSupplies";
        displayName = "STR_Item_oilSupplies";
        weight = 20;
        buyPrice = -1;
        sellPrice = 5000;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_oilSupplies.paa";
    };

    class speedbomb {
        variable = "speedbomb";
        displayName = "STR_Item_speedbomb";
        weight = 8;
        buyPrice = 120000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_speedbomb.paa";
    };

    class fueldart {
        variable = "fueldart";
        displayName = "STR_Item_fueldart";
        weight = 7;
        buyPrice = 5000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_fuelrocket.paa";
    };
	
    class greengem {
        variable = "greengem";
        displayName = "STR_Item_greengem";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_greengem.paa";
    };
	
    class bluegem {
        variable = "bluegem";
        displayName = "STR_Item_bluegem";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_bluegem.paa";
    };

    //end food.drink
	
    class fries {
		variable = "fries";
		displayName = "STR_fries";
		weight = 2;
		buyPrice = 25;
		sellPrice = 10;
		illegal = false;
		edible = 100;
		icon = "images\icons\ico_fries.paa";
	};

    class sandwich {
		variable = "sandwich";
		displayName = "STR_sandwich";
		weight = 2;
		buyPrice = 30;
		sellPrice = 10;
		illegal = false;
		edible = 100;
		icon = "images\icons\ico_sandwich.paa";
	};

    class nuggets {
		variable = "nuggets";
		displayName = "STR_nuggets";
		weight = 2;
		buyPrice = 30;
		sellPrice = 10;
		illegal = false;
		edible = 100;
		icon = "images\icons\ico_nuggets.paa";
	};
	
    class burger {
		variable = "burger";
		displayName = "STR_burger";
		weight = 2;
		buyPrice = 40;
		sellPrice = 10;
		illegal = false;
		edible = 100;
		icon = "images\icons\ico_burger.paa";
	};
	
    class pepsi {
		variable = "pepsi";
		displayName = "STR_pepsi";
		weight = 2;
		buyPrice = 40;
		sellPrice = 10;
		illegal = false;
		edible = 100;
		icon = "images\icons\ico_pepsi.paa";
	};
	
    class taco {
		variable = "taco";
		displayName = "STR_taco";
		weight = 2;
		buyPrice = 30;
		sellPrice = 10;
		illegal = false;
		edible = 100;
		icon = "images\icons\ico_taco.paa";
	};
	
    class burrito {
		variable = "burrito";
		displayName = "STR_burrito";
		weight = 2;
		buyPrice = 35;
		sellPrice = 10;
		illegal = false;
		edible = 100;
		icon = "images\icons\ico_burrito.paa";
	};
	
    class paratha {
		variable = "paratha";
		displayName = "STR_paratha";
		weight = 2;
		buyPrice = 40;
		sellPrice = 10;
		illegal = false;
		edible = 100;
		icon = "images\icons\ico_paratha.paa";
	};

    class cola {
		variable = "cola";
		displayName = "STR_cola";
		weight = 2;
		buyPrice = 40;
		sellPrice = 10;
		illegal = false;
		edible = 100;
		icon = "images\icons\ico_cola.paa";
	};

    //alchohol
    class beer {
		variable = "beer";
		displayName = "STR_Item_beer";
		weight = 2;
		buyPrice = 40;
		sellPrice = 10;
		illegal = false;
		edible = 100;
		icon = "images\icons\ico_beer.paa";
	};

	class whiskey {
		variable = "whiskey";
		displayName = "STR_Item_whiskey";
		weight = 2;
		buyPrice = 50;
		sellPrice = 10;
		illegal = false;
		edible = 100;
		icon = "images\icons\ico_whiskey.paa";
	};

    //end alch

    class codeCracker {
        variable = "codeCracker";
        displayName = "STR_Item_codeCracker";
        weight = 2;
        buyPrice = 20000;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "images\icons\codeCracker.paa";
    };

    class zipties {
        variable = "zipties";
        displayName = "STR_Item_ZipTies";
        weight = 0;
        buyPrice = 1200;
        sellPrice = 200;
        illegal = true;
        edible = -1;
        icon = "images\icons\ziptie.paa";
    };
	
	class blindfold {
        variable = "blindfold";
        displayName = "STR_Item_Blindfold";
        weight = 0;
        buyPrice = 500;
        sellPrice = 100;
        illegal = true;
        edible = -1;
        icon = "images\icons\blindfold.paa";
    };

    class cprKit {
        variable = "cprKit";
        displayName = "STR_Item_CPRMediKit";
        weight = 5;
        buyPrice = 500;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_defib.paa";
    };  

    class panicbutton {
        variable = "panicbutton";
        displayName = "STR_Item_panicbutton";
        weight = 5;
        buyPrice = 50;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_panicbutton.paa";
    };  

    class morphine {
        variable = "morphine";
        displayName = "STR_Item_Morphine";
        weight = 2;
        buyPrice = 200;
        sellPrice = 50;
        illegal = true;
        edible = -1;
        icon = "images\icons\Morphine.paa";
    };

    class bandages {
        variable = "bandages";
        displayName = "STR_Item_Bandages";
        weight = 2;
        buyPrice = 20;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_bandages.paa";
    };

    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_pickaxe.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 250;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 200;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 200;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 200;
        sellPrice = 50;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 2500;
        sellPrice = 100;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_lockpick.paa";
    };

    class handcuffs {
        variable = "handcuffs";
        displayName = "STR_Item_handcuff";
        weight = 1;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_cuffs.paa";
    };	

    class keys {
        variable = "keys";
        displayName = "STR_Item_Keys";
        weight = 1;
        buyPrice = 20;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_keys.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_blastingCharge.paa";
    };

    class demolitioncharge {
        variable = "demolitioncharge";
        displayName = "STR_Item_demolitioncharge";
        weight = 10;
        buyPrice = 20000;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_demolitioncharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 40000;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 250;
        sellPrice = 50;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_defuseKit.paa";
    };

     class storagesmall {
        variable = "storageSmall";
		displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 25000;
        sellPrice = 2000;
        varPrice = 1;
        maxPrice = 25000;
        minPrice = 2000;
        factor = 0;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_storageSmall.paa";
		furniture = false;
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 80000;
        sellPrice = 2000;
        varPrice = 1;
        maxPrice = 80000;
        minPrice = 2000;
        factor = 0;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_storageBig.paa";
		furniture = false;
    };
	
    class plp_ct_woodboxlightmedium {
        variable = "plp_ct_woodboxlightmedium";
        displayName = "STR_Item_CrateBL";
        weight = 10;
        buyPrice = 80000;
        sellPrice = 2000;
        varPrice = 1;
        maxPrice = 80000;
        minPrice = 2000;
        factor = 0;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_storageBig.paa";
		furniture = false;
    };

	class furnituredesk {
		variable = "furnitureDesk";
        displayName = "STR_Item_FurnitureDK";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_TableDesk_F.jpg";
		furniture = true;
	};
	
	class furniturechair {
		variable = "furnitureChair";
        displayName = "STR_Item_FurnitureCH";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_CampingChair_V1_F.jpg";
		furniture = true;
	};
	
	class furniturebagshort {
		variable = "furnitureBagShort";
        displayName = "STR_Item_FurnitureBS";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_BagFence_Short_F.jpg";
		furniture = true;
	};
	
	class furnitureopenlaptop {
		variable = "furnitureOpenLaptop";
        displayName = "STR_Item_FurnitureOL";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 13750;
        minPrice = 13750;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Laptop_unfolded_F.jpg";
		furniture = true;
	};
	
	class furniturecampingtable {
		variable = "furnitureCampingTable";
        displayName = "STR_Item_FurnitureCT";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 5OO;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_CampingTable_F.jpg";
		furniture = true;
	};
	
	class furnituresleepingbag {
		variable = "furnitureSleepingBag";
        displayName = "STR_Item_FurnitureSB";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Sleeping_bag_F.jpg";
		furniture = true;
	};
	
	class furnituresleepingbagblue {
		variable = "furnitureSleepingBagBlue";
        displayName = "STR_Item_FurnitureSBBL";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Sleeping_bag_F.jpg";
		furniture = true;
	};
	
	class furnituresleepingbagbrown {
		variable = "furnitureSleepingBagBrown";
        displayName = "STR_Item_FurnitureSBBR";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Sleeping_bag_F.jpg";
		furniture = true;
	};
	
	class furnituresunchair {
		variable = "furnitureSunChair";
        displayName = "STR_Item_FurnitureSCH";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Sun_chair_F.jpg";
		furniture = true;
	};
	
	class furnituresunchairgreen {
		variable = "furnitureSunChairGreen";
        displayName = "STR_Item_FurnitureSCHG";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Sun_chair_green_F.jpg";
		furniture = true;
	};
	
	class furnituremapaltis {
		variable = "furnitureMapAltis";
        displayName = "STR_Item_FurnitureMA";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\MapBoard_altis_F.jpg";
		furniture = true;
	};
	
	class furniturepalletvert {
		variable = "furniturePalletVert";
        displayName = "STR_Item_FurniturePV";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Pallet_vertical_F.jpg";
		furniture = true;
	};
	
	class furnituremetalrack {
		variable = "furnitureMetalRack";
        displayName = "STR_Item_FurnitureMR";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Metal_wooden_rack_F.jpg";
		furniture = true;
	};
	class furniturewoodblue {
		variable = "furnitureWoodBlue";
        displayName = "STR_Item_FurnitureWB";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_ShelvesWooden_blue_F.jpg";
		furniture = true;
	};
	
	class furniturefmradio {
		variable = "furnitureFMRadio";
        displayName = "STR_Item_FurnitureFMR";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_FMradio_F.jpg";
		furniture = true;
	};
	
	class furnitureportgen {
		variable = "furniturePortGen";
        displayName = "STR_Item_FurniturePG";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = true;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Portable_generator_F.jpg";
		furniture = true;
	};
	
	class furnituretarget {
		variable = "furnitureTarget";
        displayName = "STR_Item_FurnitureTT";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Target_F.jpg";
		furniture = true;
	};
	
	class furniturewoodtable {
		variable = "furnitureWoodTable";
        displayName = "STR_Item_FurnitureWT";
        weight = 10;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_WoodenTable_small_F.jpg";
		furniture = true;
	};

    class furniturespotlight {
		variable = "furnitureSpotlight";
        displayName = "STR_Item_Spotlight";
        weight = 6;
        buyPrice = 1000;
        sellPrice = 500;
		varPrice = 1;
        maxPrice = 1000;
        minPrice = 500;
		factor = 0;
        illegal = false;
        edible = -1;
        icon = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_PortableLight_single_F.jpg";
		furniture = true;
	};

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 2;
        buyPrice = -1;
        sellPrice = 280;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_copperOre.paa";
    };
	
    class scrap_raw {
        variable = "scrapRaw";
        displayName = "STR_Item_ScrapRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 4;
        buyPrice = -1;
        sellPrice = 150;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_ironOre.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 4;
        buyPrice = -1;
        sellPrice = 180;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_iron.paa";
    };

    class coal_unrefined {
        variable = "coalUnrefined";
        displayName = "STR_Item_Coal";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_coalUnprocessed.paa";
    };

    class coal_refined {
        variable = "coalRefined";
        displayName = "STR_Item_CoalR";
        weight = 4;
        buyPrice = -1;
        sellPrice = 200;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_coalProcessed.paa";
    };

    class gold_unrefined {
        variable = "goldUnrefined";
        displayName = "STR_Item_Gold";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_gold.paa";
    };

    class gold_refined {
        variable = "goldRefined";
        displayName = "STR_Item_GoldR";
        weight = 4;
        buyPrice = -1;
        sellPrice = 260;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_goldr.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 4;
        buyPrice = -1;
        sellPrice = 230;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_diamondCut.paa";
    };

    class sulfur_unrefined {
        variable = "sulfurUnrefined";
        displayName = "STR_Item_Sulfur";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_sulfur.paa";
    };

    class sulfur_refined {
        variable = "sulfurRefined";
        displayName = "STR_Item_Sulfurr";
        weight = 4;
        buyPrice = -1;
        sellPrice = 280;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_sulfurr.paa";
    };

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 2;
        buyPrice = -1;
        sellPrice = 600;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_heroinProcessed.paa";
    };
	
    class cannabis_seed {
        variable = "cannabis_seed";
        displayName = "STR_Item_Cannabis_Seed";
        weight = 3;
        buyPrice = 25;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };
	
    class sunflower_seed {
        variable = "sunflower_seed";
        displayName = "STR_Item_sunflower_seed";
        weight = 2;
        buyPrice = 10;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_sunflower.paa";
    };
	
    class sunflower {
        variable = "sunflower";
        displayName = "STR_Item_sunflower";
        weight = 3;
        buyPrice = -1;
        sellPrice = 180;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_sunflower.paa";
    };
	
    class bean_seed {
        variable = "bean_seed";
        displayName = "STR_Item_bean_seed";
        weight = 2;
        buyPrice = 10;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_bean.paa";
    };
	
    class bean{
        variable = "bean";
        displayName = "STR_Item_bean";
        weight = 2;
        buyPrice = -1;
        sellPrice = 160;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_bean.paa";
    };
	
    class pumpkin_seed {
        variable = "pumpkin_seed";
        displayName = "STR_Item_pumpkin_seed";
        weight = 2;
        buyPrice = 5;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_pumpkin.paa";
    };
	
    class pumpkin {
        variable = "pumpkin";
        displayName = "STR_Item_pumpkin";
        weight = 2;
        buyPrice = -1;
        sellPrice = 145;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_pumpkin.paa";
    };
	
    class wheat_seed {
        variable = "wheat_seed";
        displayName = "STR_Item_wheat_seed";
        weight = 2;
        buyPrice = 5;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_wheat.paa";
    };
	
    class wheat {
        variable = "wheat";
        displayName = "STR_Item_wheat";
        weight = 2;
        buyPrice = -1;
        sellPrice = 135;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_wheat.paa";
    };
	
    class cotton_seed {
        variable = "cotton_seed";
        displayName = "STR_Item_cotton_seed";
        weight = 2;
        buyPrice = 5;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_cotton.paa";
    };
	
    class cotton {
        variable = "cotton";
        displayName = "STR_Item_cotton";
        weight = 2;
        buyPrice = -1;
        sellPrice = 135;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_cotton.paa";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = -1;
        sellPrice = 320;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_cannabis.paa";
    };
	
    class wood {
        variable = "wood";
        displayName = "STR_Item_wood";
        weight = 2;
        buyPrice = -1;
        sellPrice = 120;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_log.paa";
    };
	
    class pinus_wood {
        variable = "pinus_wood";
        displayName = "STR_Item_pinus_wood";
        weight = 2;
        buyPrice = -1;
        sellPrice = 120;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_log.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 2;
        buyPrice = -1;
        sellPrice = 420;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_cocaineProcessed.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 40;
        sellPrice = 10;
        illegal = false;
        edible = 65;
        icon = "images\icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 20;
        sellPrice = 10;
        illegal = false;
        edible = 100;
        icon = "images\icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 20;
        sellPrice = 5;
        illegal = false;
        edible = 65;
        icon = "images\icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 10;
        icon = "images\icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 10;
        icon = "images\icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 50;
        sellPrice = 20;
        illegal = false;
        edible = 40;
        icon = "images\icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 70;
        sellPrice = 20;
        illegal = false;
        edible = 30;
        icon = "images\icons\ico_donuts.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 40;
        sellPrice = 20;
        illegal = false;
        edible = 30;
        icon = "images\icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 20;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 50;
        sellPrice = 20;
        illegal = false;
        edible = 25;
        icon = "images\icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 20;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 50;
        sellPrice = 20;
        illegal = false;
        edible = 30;
        icon = "images\icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 60;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 100;
        icon = "images\icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 60;
        sellPrice = 40;
        illegal = false;
        edible = 80;
        icon = "images\icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 30;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 70;
        sellPrice = 40;
        illegal = false;
        edible = 100;
        icon = "images\icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 100;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 150;
        sellPrice = 120;
        illegal = false;
        edible = 100;
        icon = "images\icons\ico_turtleSoup.paa";
    };
};
