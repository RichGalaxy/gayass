	/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*   {"life_coplevel", "SCALAR", 1 } },
    {"life_swatlevel", "SCALAR", 1 } },
*/
class WeaponShops {
    //Civ Shops
    class gun {
        name = "Legal Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "CG_BAT", "Bat", 500, -1 },
            { "RH_m9", "Baretta M9", 4000, -1 },
            { "RH_cz75", "CZ 75 Pistol", 5000, -1 },
            { "RH_g17", "Glock 17", 6500, -1 },
            { "RH_g19", "Glock 19", 6500, -1 },
            { "RH_kimber_nw", "Kimber Night Warrior", 10000, -1 },
            { "RH_deagle", "Desert Eagle", 14000, -1 }
        };
        mags[] = {
            { "nonlethal_swing", "Bat Ammo", 50 },
            { "RH_15Rnd_9x19_M9", "15Rnd 9x19 M9", 50 },
            { "RH_16Rnd_9x19_cz", "16Rnd 9x19 CZ", 50 },
            { "RH_17Rnd_9x19_g17", "17Rnd 9x19 G17", 50 },
            { "RH_17Rnd_9x19_g17", "17Rnd 9x19 G19", 50 },
            { "RH_7Rnd_45cal_m1911", "7Rnd .45 CAL", 50 },	
            { "RH_7Rnd_50_AE", "7Rnd .50 AE", 100 }
        };
        accs[] = {};
    };

    class farm {
        name = "Farming Tools";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ASN_Melee_Pickaxe", "Mining Pickaxe", 250, -1 },
			{ "ASN_Melee_Axe", "Hatchet", 250, -1 },
            { "ASN_firewatering", "Watering Can", 300, -1 }
        };
        mags[] = {};
        accs[] = {};
    };

    class genstore {
        name = "General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "Binoculars", 150, -1 },
            { "ItemMap", "Map", 50, -1 },
            { "FirstAidKit", "Bandage", 100, -1 }
        };
    };
	
	class copgenstore {
        name = "Cop General Store";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "Binoculars", 150, -1 },
            { "ItemMap", "Map", 50, -1 },
            { "FirstAidKit", "Bandage", 100, -1 }
        };
    };

    class f_station_store {
        name = "Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "Binoculars", 150, -1 },
            { "ItemMap", "Map", 50, -1 },
            { "FirstAidKit", "Bandage", 100, -1 }
        };
    };

    class cop_basic {
        name = "Pistol Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a Cadet!" };
        items[] = {
            { "CG_BATON", "Police Baton", 0, -1, "call life_coplevel >= 1" },
            { "CSW_M26C", "Taser Pistol", 0, -1, "call life_coplevel >= 1" },
            { "RH_M9", "Barret M9", 0, -1, "call life_coplevel >= 2" },
            { "RH_fn57", "FN Five-Seven", 2000, -1, "call life_coplevel >= 2" },
            { "RH_uspm", "USP40 Match", 2500, -1, "call life_coplevel >= 3" }
        };
        mags[] = {
			{ "nonlethal_swing", "Police Baton Ammo", 0 },
            { "CSW_Taser_Probe_Mag", "Taser Pistol Mag", 0 },
            { "RH_15Rnd_9x19_M9", "15Rnd 9x19 M9", 0 },
            { "RH_20Rnd_57x28_FN", "20Rnd 57x28 FN", 0 },
            { "RH_16Rnd_40cal_usp", "16Rnd .40 USP", 0 }
        };
    };
	
    class rifle {
        name = "Rifle Shop";
        side = "cop";
        license = "rifle";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Deputy!" };
        items[] = {
            { "CG_BATON", "Police Baton", 0, -1, "call life_coplevel >= 1" },
            { "CSW_M26C", "Taser Pistol", 0, -1, "call life_coplevel >= 1" },
            { "RH_M4sbr_b", "Vitor", 3000, -1, "call life_coplevel >= 2" },
            { "RH_Hk416s", "HK416 D10", 3200, -1, "call life_coplevel >= 3" },
            { "RH_Hk416", "HK416 D14", 3200, -1, "call life_coplevel >= 3" },
            { "RH_m4", "M4", 3500, -1, "call life_coplevel >= 4" },
            { "RH_M4_ris", "M4 RIS", 4500, -1, "call life_coplevel >= 4" },
            { "RH_M27IAR", "M27 IAR", 5000, -1, "call life_coplevel >= 5" },
            { "RH_M4A6", "M4A6", 5500, -1, "call life_coplevel >= 6" },
            { "hlc_rifle_rpk", "RPK", 6500, -1, "call life_coplevel >= 6" },
            { "RH_eotech553", "Eotech 553", 50, -1, "" },
            { "RH_ta31rmr", "ACOG TA31F", 50, -1, "" },
            { "RH_compm2l", "Aimpoint CompM2", 50, -1, "" },
            { "RH_compm4s", "Aimpoint CompM4S", 50, -1, "" },
            { "optic_MRCO", "MRCO", 50, -1, "" },
            { "optic_DMS", "DMS", 50, -1, "" }
        };
        mags[] = {
			{ "nonlethal_swing", "Police Baton Ammo", 0 },
            { "CSW_Taser_Probe_Mag", "Taser Pistol Mag", 0 },
            { "RH_30Rnd_556x45_M855A1", "5.56 Ammo", 50 },
            { "RH_30Rnd_68x43_FMJ", "6.8 Ammo", 50 },
            { "hlc_30Rnd_762x39_b_ak", "RPK 7.62 Ammo", 50 }
        };
    };
	
    class swat {
        name = "SWAT Shop";
        side = "cop";
        license = "swat";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be SWAT!" };
        items[] = {
            { "RH_M4sbr_b", "Vitor", 3000, -1, "call life_coplevel >= 2" },
            { "RH_Hk416s", "HK416 D10", 3200, -1, "call life_coplevel >= 3" },
            { "RH_Hk416", "HK416 D14", 3200, -1, "call life_coplevel >= 3" },
            { "RH_m4", "M4", 3500, -1, "call life_coplevel >= 4" },
            { "RH_M4_ris", "M4 RIS", 4500, -1, "call life_coplevel >= 4" },
            { "RH_M27IAR", "M27 IAR", 5000, -1, "call life_coplevel >= 5" },
            { "RH_M4A6", "M4A6", 5500, -1, "call life_coplevel >= 6" },
            { "hlc_rifle_rpk", "RPK", 6500, -1, "call life_coplevel >= 6" },
            { "RH_eotech553", "Eotech 553", 50, -1, "" },
            { "RH_ta31rmr", "ACOG TA31F", 50, -1, "" },
            { "RH_compm2l", "Aimpoint CompM2", 50, -1, "" },
            { "RH_compm4s", "Aimpoint CompM4S", 50, -1, "" },
            { "optic_MRCO", "MRCO", 50, -1, "" },
            { "optic_DMS", "DMS", 50, -1, "" }
        };
        mags[] = {
            { "RH_30Rnd_556x45_M855A1", "5.56 Ammo", 50 },
            { "RH_30Rnd_68x43_FMJ", "6.8 Ammo", 50 },
            { "hlc_30Rnd_762x39_b_ak", "RPK 7.62 Ammo", 50 }
        };
        accs[] = {
            { "optic_aco", "ACO Red", 50, -1, "" },
            { "RH_eotech553", "Eotech 553", 50, -1, "" },
            { "RH_ta31rmr", "ACOG TA31F", 50, -1, "" },
            { "RH_compm2l", "Aimpoint CompM2", 50, -1, "" },
            { "RH_compm4s", "Aimpoint CompM4S", 50, -1, "" },
            { "optic_MRCO", "MRCO", 50, -1, "" },
        };
    };
	
    class fbi {
        name = "FBI Shop";
        side = "cop";
        license = "fbi";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be FBI!" };
        items[] = {
            { "RH_M4sbr_b", "Vitor", 3000, -1, "call life_coplevel >= 2" },
            { "RH_Hk416s", "HK416 D10", 3200, -1, "call life_coplevel >= 3" },
            { "RH_Hk416", "HK416 D14", 3200, -1, "call life_coplevel >= 3" },
            { "RH_m4", "M4", 3500, -1, "call life_coplevel >= 4" },
            { "RH_M4_ris", "M4 RIS", 4500, -1, "call life_coplevel >= 4" },
            { "RH_M27IAR", "M27 IAR", 5000, -1, "call life_coplevel >= 5" },
            { "RH_M4A6", "M4A6", 5500, -1, "call life_coplevel >= 6" },
            { "hlc_rifle_rpk", "RPK", 6500, -1, "call life_coplevel >= 6" },
            { "RH_eotech553", "Eotech 553", 50, -1, "" },
            { "RH_ta31rmr", "ACOG TA31F", 50, -1, "" },
            { "RH_compm2l", "Aimpoint CompM2", 50, -1, "" },
            { "RH_compm4s", "Aimpoint CompM4S", 50, -1, "" },
            { "optic_MRCO", "MRCO", 50, -1, "" },
            { "optic_DMS", "DMS", 50, -1, "" }
        };
        mags[] = {
            { "RH_30Rnd_556x45_M855A1", "5.56 Ammo", 50 },
            { "RH_30Rnd_68x43_FMJ", "6.8 Ammo", 50 },
            { "hlc_30Rnd_762x39_b_ak", "RPK 7.62 Ammo", 50 }
        };
        accs[] = {
            { "optic_aco", "ACO Red", 50, -1, "" },
            { "RH_eotech553", "Eotech 553", 50, -1, "" },
            { "RH_ta31rmr", "ACOG TA31F", 50, -1, "" },
            { "RH_compm2l", "Aimpoint CompM2", 50, -1, "" },
            { "RH_compm4s", "Aimpoint CompM4S", 50, -1, "" },
            { "optic_MRCO", "MRCO", 50, -1, "" },
            { "optic_DMS", "DMS", 50, -1, "" }
        };
    };
	
    class mafia {
        name = "Mafia Weapons Shop";
        side = "civ";
        license = "mafia";
        level[] = { "", "", -1, "" };
        items[] = {
            { "RH_m9", "Baretta M9", 3000, -1 },
            { "RH_cz75", "CZ 75 Pistol", 4000, -1 },
            { "RH_g17", "Glock 17", 5000, -1 },
            { "RH_g19", "Glock 19", 5000, -1 },
            { "RH_kimber_nw", "Kimber Night Warrior", 8000, -1 },
            { "RH_deagle", "Desert Eagle", 14000, -1 },
            { "RH_sbr9", "SBR9", 25000, 0 },
            { "hlc_rifle_ak74", "AK-74", 34000, 0 },
            { "hlc_rifle_aks74u", "AKS-74U", 42000, -1 },
            { "hlc_rifle_rpk12", "RPK-12", 50000, -1 },
            { "hlc_rifle_rpk74n", "RPK-74N", 65000, 0 },
            { "RH_M4sbr_b", "Vitor", 85000, 0 },
            { "RH_Hk416s", "HK416 D10", 105000, 0 },
            { "RH_Hk416", "HK416 D14", 107000, 0 },
            { "RH_eotech553", "Eotech 553", 50, -1, "" },
            { "RH_ta31rmr", "ACOG TA31F", 50, -1, "" },
            { "RH_compm2l", "Aimpoint CompM2", 50, -1, "" },
            { "RH_compm4s", "Aimpoint CompM4S", 50, -1, "" },
            { "optic_MRCO", "MRCO", 50, -1, "" },
            { "optic_DMS", "DMS", 50, -1, "" }
        };
        mags[] = {
            { "RH_15Rnd_9x19_M9", "15Rnd 9x19 M9", 50 },
            { "RH_16Rnd_9x19_cz", "16Rnd 9x19 CZ", 50 },
            { "RH_17Rnd_9x19_g17", "17Rnd 9x19 G17", 50 },
            { "RH_17Rnd_9x19_g17", "17Rnd 9x19 G19", 50 },
            { "RH_7Rnd_45cal_m1911", "7Rnd .45 CAL", 50 },	
            { "RH_7Rnd_50_AE", "7Rnd .50 AE", 50 },
            { "RH_32Rnd_9mm_M822", "32Rnd 9mm SBR9", 50 },
			{ "hlc_30Rnd_545x39_B_AK", "AK-74 Ammo", 50 },
            { "hlc_30Rnd_545x39_B_AK", "AKS-74U Ammo", 50 },
            { "hlc_30Rnd_545x39_B_AK", "RPK-12 Ammo", 50 },
            { "hlc_30Rnd_545x39_B_AK", "RPK-74N Ammo", 50 },
            { "RH_30Rnd_556x45_M855A1", "Vitor 5.56 Ammo", 50 },
            { "RH_30Rnd_556x45_M855A1", "HK416 5.56 Ammo", 50 }
        };
    };

	//Medic Shops
    class med_basic {
        name = "EMS Store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 0, 0 },
            { "Binocular", "", 0, 0 },
            { "FirstAidKit", "", 0, 0 },
			{ "Medikit", "", 0, 0 },
            { "NVGoggles", "", 0, 0 }
        };
        mags[] = {};
        accs[] = {};
    };
};