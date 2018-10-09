/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Clothing", 0, "" },
            { "NP_traje_test", "Jacket 1", 50, "" },
            { "NP_traje_test2", "Jacket 2", 50, "" },
            { "NP_traje_test3", "Jacket 3", 50, "" },
            { "NP_traje_test4", "Jacket 4", 50, "" },
            { "NP_traje_test5", "Jacket 5", 50, "" },
            { "NP_traje_test6", "Jacket 6", 50, "" },
            { "NP_traje_test7", "Jacket 7", 50, "" },
            { "NP_traje_test8", "Jacket 8", 50, "" },
            { "NP_traje_test9", "Jacket 9", 50, "" },
            { "NP_traje_test10", "Jacket 10", 50, "" },
            { "np_shirt_1", "Shirt 1", 80, "" },
            { "np_shirt_2", "Shirt 2", 80, "" },
            { "np_shirt_3", "Shirt 3", 80, "" },
            { "np_shirt_4", "Shirt 4", 80, "" },
            { "np_shirt_5", "Shirt 5", 80, "" },
            { "np_shirt_6", "Shirt 6", 80, "" },
            { "np_shirt_7", "Shirt 7", 80, "" },
            { "np_shirt_8", "Shirt 8", 80, "" },
            { "vvv_character_sport_1", "Shorts 1", 100, "" },
            { "vvv_character_sport_2", "Shorts 2", 100, "" },
            { "vvv_character_sport_7", "Shorts 3", 100, "" },
            { "vvv_character_sport", "Shorts 4", 100, "" },
            { "vvv_traje_jackoy", "Jackoy 1", 100, "" },
            { "vvv_traje_jackoy2", "Jackoy 2", 100, "" },
            { "vvv_traje_jackoy3", "Jackoy 3", 100, "" },
            { "vvv_traje_jackoy4", "Jackoy 4", 100, "" },
            { "vvv_traje_jackoy5", "Jackoy 5", 100, "" },
            { "vvv_traje_jackoy6", "Jackoy 6", 100, "" },
            { "vvv_traje_jackoy7", "Jackoy 7", 100, "" },
            { "vvv_traje_jackoy8", "Jackoy 8", 100, "" },
            { "vvv_character_agente_47", "Suit Pants + Shirt 1", 250, "" },
            { "vvv_character_agente_472", "Suit Pants + Shirt 2", 250, "" },
            { "vvv_character_agente_473", "Suit Pants + Shirt 3", 250, "" },
            { "vvv_character_agente_474", "Suit Pants + Shirt 4", 250, "" },
            { "vvv_character_agente_475", "Suit Pants + Shirt 5", 250, "" },
            { "vvv_character_rock1", "Rock Outfit 1", 350, "" },
            { "vvv_character_rock2", "Rock Outfit 2", 350, "" },
            { "vvv_character_rock3", "Rock Outfit 3", 350, "" },
            { "vvv_character_rock4", "Rock Outfit 4", 350, "" },
            { "KAEL_SUITS_BR_F15", "Black Suit", 500, "" },
            { "KAEL_SUITS_BR_F22", "Black Suit 2", 500, "" },
            { "KAEL_SUITS_BR_F26", "Brown Suit", 500, "" },
            { "KAEL_SUITS_BR_F28", "Brown Suit 2", 500, "" },
            { "KAEL_SUITS_BR_F30", "Navy Suit", 500, "" },
            { "KAEL_SUITS_BR_F31", "Navy Suit 2", 500, "" },
            { "KAEL_SUITS_BR_F3", "Blue Suit", 500, "" },
            { "KAEL_SUITS_BR_F12", "Formal Suit", 500, "" },
            { "KAEL_SUITS_BR_F6", "Yellow Suit", 500, "" },
            { "KAEL_SUITS_BR_F9", "Green Suit", 500, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "TRYK_H_Bandana_H", "Bandana", 30, "" },
            { "TRYK_H_Bandana_wig", "Wig & Bandana", 30, "" },
            { "TRYK_H_Bandana_wig_g", "Goggles & Bandana", 30, "" },
            { "TRYK_R_CAP_BLK", "Black Cap", 40, "" },
            { "TRYK_R_CAP_TAN", "Tan Cap", 40, "" },
            { "TRYK_R_CAP_OD_US", "Green Cap", 40, "" },
            { "TRYK_R_CAP_blk_glasses", "Black Cap & Glasses", 50, "" },
            { "TRYK_R_CAP_od_glasses", "Green Cap & Glasses", 50, "" },
            { "TRYK_H_WIG", "Wig Hair", 60, "" },
            { "TRYK_H_Woolhat", "Black Beanie", 60, "" },
            { "TRYK_H_Woolhat_br", "Brown Beanie", 60, "" },
            { "TRYK_H_Woolhat_tan", "Tan Beanie", 60, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Aviator", "Aviators", 30, "" },
            { "G_Shades_Black", "Black Shades", 20, "" },
            { "G_Shades_Blue", "Blue Shades", 20, "" },
            { "G_Shades_Green", "Green Shades", 20, "" },
            { "G_Spectacles_Tinted", "Tinted Shades", 20, "" },
            { "TRYK_Shemagh_mesh", "Mesh Scarf", 250, "" },
            { "TRYK_Shemagh_G", "Green Scarf", 250, "" },
            { "TRYK_Shemagh", "Tan Scarf", 250, "" },
            { "TRYK_Shemagh_WH", "White Scarf", 250, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Safety_blue_F", "Blue Safety Vest", 300, "" },
            { "V_Safety_orange_F", "Orange Safety Vest", 300, "" },
            { "V_Safety_yellow_F", "Yellow Safety Vest", 300, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "TRYK_B_Alicepack", "Alice Backpack", 2000, "" },
            { "TRYK_B_Coyotebackpack_BLK", "Black Backpack", 2000, "" },
            { "TRYK_B_Coyotebackpack", "Tan Backpack", 2000, "" },
            { "TRYK_B_Coyotebackpack_OD", "Green Backpack", 2000, "" },
            { "TRYK_B_Kitbag_blk", "Black Kitbag", 2000, "" },
            { "TRYK_B_Kitbag_base", "Green Kitbag", 2000, "" },
            { "TRYK_B_tube_blk", "Black Long Backpack", 2000, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "Sheriff_Cadet", "Cadet Uniform", 50, "call life_coplevel >= 1" },
            { "Sheriff_Deputy", "Deputy Uniform", 50, "call life_coplevel >= 2" },
            { "Sheriff_SeniorDeputy", "Snr Deputy Uniform", 50, "call life_coplevel >= 3" },
            { "Sheriff_Sergeant", "Sergeant Uniform", 50, "call life_coplevel >= 4" },
            { "Sheriff_Lieutenant", "Lieutenant Uniform", 50, "call life_coplevel >= 5" },
            { "Sheriff_Captain", "Captain Uniform", 50, "call life_coplevel >= 6" },
            { "Sheriff_Undersheriff", "Undersheriff Uniform", 50, "call life_coplevel >= 7" },
            { "Sheriff_Sheriff", "Sheriff Uniform", 50, "call life_coplevel >= 8" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "Hat", "Sheriff Patrol Hat", 20, "call life_coplevel >= 1" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Aviator", "Aviators", 30, "" },
            { "G_Shades_Black", "Black Shades", 20, "" },
            { "G_Shades_Blue", "Blue Shades", 20, "" },
            { "G_Shades_Green", "Green Shades", 20, "" },
            { "TRYK_Shemagh", "Tan Scarf", 50, "" },
            { "TRYK_Shemagh_WH", "White Scarf", 50, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "beltradio_police", "Sheriff Patrol Belt", 20, "call life_coplevel >= 1" },
            { "Sheriff_LightVest", "Sheriff Heavy Vest", 50, "call life_coplevel >= 1" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_Carryall_cbr", "Invisible Backpack", 20, "call life_coplevel >= 1" }
        };
    };
	
    class swat {
        title = "STR_Shops_C_SWAT";
        conditions = "license_cop_swat";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "steff_swat_private_uniform", "SWAT Officer", 50, "call life_coplevel >= 3" },
			{ "steff_swat_corporal_uniform", "SWAT Corporal", 50, "call life_coplevel >= 4" },
			{ "steff_swat_sergeant_uniform", "SWAT Sergeant", 50, "call life_coplevel >= 5" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "steff_swat_helmet_black", "SWAT Helmet", 50, "call life_coplevel >= 3" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Aviator", "Aviators", 30, "" },
            { "G_Shades_Black", "Black Shades", 20, "" },
            { "G_Shades_Blue", "Blue Shades", 20, "" },
            { "G_Shades_Green", "Green Shades", 20, "" },
            { "TRYK_Shemagh", "Tan Scarf", 50, "" },
            { "TRYK_Shemagh_WH", "White Scarf", 50, "" },
            { "G_Balaclava_blk", "SWAT Balaclava", 50, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "steff_swat_vest_black", "SWAT Vest", 20, "call life_coplevel >= 3" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_Carryall_cbr", "Invisible Backpack", 20, "call life_coplevel >= 1" }
        };
    };
	
    class fbi {
        title = "STR_Shops_C_FBI";
        conditions = "license_cop_fbi";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "Sheriff_FBI", "FBI Uniform", 50, "call life_coplevel >= 4" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "FBI_Cap", "FBI Cap", 50, "call life_coplevel >= 4" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Aviator", "Aviators", 30, "" },
            { "G_Shades_Black", "Black Shades", 20, "" },
            { "G_Shades_Blue", "Blue Shades", 20, "" },
            { "G_Shades_Green", "Green Shades", 20, "" },
            { "TRYK_Shemagh", "Tan Scarf", 50, "" },
            { "TRYK_Shemagh_WH", "White Scarf", 50, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "FBI_LightVest", "FBI Heavy Vest", 50, "call life_coplevel >= 4" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_Carryall_cbr", "Invisible Backpack", 20, "call life_coplevel >= 1" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "A3L_EMS_Off_LT", "EMT Uniform", 50, "" },
            { "A3L_EMS_Off_D", "Paramedic Uniform", 50, "" },
            { "A3L_EMS_Off_Ass", "Snr. Paramedic Uniform", 50, "" },
            { "A3L_EMS_Off_Chief", "Chief Uniform", 50, "" },
            { "vvv_traje_bombero_2", "Fire Fighter Uniform", 50, "" },
            { "vvv_traje_bombero", "Chief Fire Fighter Uniform", 50, "" }
        };
        headgear[] = {
            { "NONE", "Remove Headgear", 0, "" },
            { "TRYK_H_Bandana_H", "Bandana", 30, "" },
            { "TRYK_H_Bandana_wig", "Wig & Bandana", 30, "" },
            { "TRYK_H_Bandana_wig_g", "Goggles & Bandana", 30, "" },
            { "TRYK_R_CAP_BLK", "Black Cap", 40, "" },
            { "TRYK_R_CAP_TAN", "Tan Cap", 40, "" },
            { "TRYK_R_CAP_OD_US", "Green Cap", 40, "" },
            { "TRYK_R_CAP_blk_glasses", "Black Cap & Glasses", 50, "" },
            { "TRYK_R_CAP_od_glasses", "Green Cap & Glasses", 50, "" },
            { "TRYK_H_WIG", "Wig Hair", 60, "" },
            { "TRYK_H_Woolhat", "Black Beanie", 60, "" },
            { "TRYK_H_Woolhat_br", "Brown Beanie", 60, "" },
            { "TRYK_H_Woolhat_tan", "", 60, "" }
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, "" },
            { "G_Aviator", "Aviators", 30, "" },
            { "G_Shades_Black", "Black Shades", 20, "" },
            { "G_Shades_Blue", "Blue Shades", 20, "" },
            { "G_Shades_Green", "Green Shades", 20, "" },
            { "TRYK_Shemagh_mesh", "Mesh Scarf", 50, "" },
            { "TRYK_Shemagh_G", "Green Scarf", 50, "" },
            { "TRYK_Shemagh", "Tan Scarf", 50, "" },
            { "TRYK_Shemagh_WH", "White Scarf", 50, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_Carryall_cbr", "Invisible Backpack", 20, "" },
            { "US_FireFighter_ARI_Drager", "Fire Fighter Backpack", 20, "" }
        };
    };
	
    class mafia {
        title = "STR_Shops_C_MAFIA";
        conditions = "license_civ_mafia";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "vvv_traje_ejecutivo_1", "Mafia Uniform", 50, "" }
        };
        headgear[] = {
            { "NONE", "Remove Mask", 0, "" },
            { "Masque_Anonymous", "Anonymous Mask", 4000, "" },
            { "Masque_Arnold", "Arnold Mask", 4000, "" },
            { "Masque_Aubrey", "Aubrey Mask", 4000, "" },
            { "Masque_Bonnie", "Bonnie Mask", 4000, "" },
            { "Masque_Chains", "Chains Mask", 4000, "" },
            { "Masque_Chuck", "Chuck Mask", 4000, "" },
            { "Masque_Clover", "Clover Mask", 4000, "" },
            { "Masque_Dallas", "Dallas Mask", 4000, "" },
            { "Masque_Gombo", "Gombo Mask", 4000, "" },
            { "Masque_GdG", "Gdg Mask", 4000, "" },
            { "Masque_Hockey", "Hockey Mask", 4000, "" },
            { "Masque_Hoxton", "Hoxton Mask", 4000, "" },
            { "Masque_Incendiaire", "Incendiaire Mask", 4000, "" },
            { "Masque_Macrilleuse", "Macrilleuse Mask", 4000, "" },
            { "Masque_Religieuse", "Religieuse Mask", 4000, "" },
            { "Masque_Smiley", "Smiley Mask", 4000, "" },
            { "Masque_Wolfv2", "Wolf Mask", 4000, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Aviator", "Aviators", 30, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "TRYK_B_Alicepack", "Alice Backpack", 2000, "" },
            { "TRYK_B_Coyotebackpack_BLK", "Black Backpack", 2000, "" },
            { "TRYK_B_Coyotebackpack", "Tan Backpack", 2000, "" },
            { "TRYK_B_Coyotebackpack_OD", "Green Backpack", 2000, "" },
            { "TRYK_B_Kitbag_blk", "Black Kitbag", 2000, "" },
            { "TRYK_B_Kitbag_base", "Green Kitbag", 2000, "" },
            { "TRYK_B_tube_blk", "Black Long Backpack", 2000, "" }
        };
    };
	
    class mask {
        title = "STR_Shops_C_MASK";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Mask", 0, "" },
            { "Masque_Anonymous", "Anonymous Mask", 4000, "" },
            { "Masque_Arnold", "Arnold Mask", 4000, "" },
            { "Masque_Aubrey", "Aubrey Mask", 4000, "" },
            { "Masque_Bonnie", "Bonnie Mask", 4000, "" },
            { "Masque_Chains", "Chains Mask", 4000, "" },
            { "Masque_Chuck", "Chuck Mask", 4000, "" },
            { "Masque_Clover", "Clover Mask", 4000, "" },
            { "Masque_Dallas", "Dallas Mask", 4000, "" },
            { "Masque_Gombo", "Gombo Mask", 4000, "" },
            { "Masque_GdG", "Gdg Mask", 4000, "" },
            { "Masque_Hockey", "Hockey Mask", 4000, "" },
            { "Masque_Hoxton", "Hoxton Mask", 4000, "" },
            { "Masque_Incendiaire", "Incendiaire Mask", 4000, "" },
            { "Masque_Macrilleuse", "Macrilleuse Mask", 4000, "" },
            { "Masque_Religieuse", "Religieuse Mask", 4000, "" },
            { "Masque_Smiley", "Smiley Mask", 4000, "" },
            { "Masque_Wolfv2", "Wolf Mask", 4000, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" }
        };
        headgear[] = {
            { "NONE", "Remove Headgear", 0, "" },
            { "TRYK_H_Bandana_H", "Bandana", 30, "" },
            { "TRYK_H_Bandana_wig", "Wig & Bandana", 30, "" },
            { "TRYK_H_Bandana_wig_g", "Goggles & Bandana", 30, "" },
            { "TRYK_R_CAP_BLK", "Black Cap", 40, "" },
            { "TRYK_R_CAP_TAN", "Tan Cap", 40, "" },
            { "TRYK_R_CAP_OD_US", "Green Cap", 40, "" },
            { "TRYK_R_CAP_blk_glasses", "Black Cap & Glasses", 50, "" },
            { "TRYK_R_CAP_od_glasses", "Green Cap & Glasses", 50, "" },
            { "TRYK_H_WIG", "Wig Hair", 60, "" },
            { "TRYK_H_Woolhat", "Black Beanie", 60, "" },
            { "TRYK_H_Woolhat_br", "Brown Beanie", 60, "" },
            { "TRYK_H_Woolhat_tan", "", 60, "" }
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, "" },
            { "G_Aviator", "Aviators", 30, "" },
            { "G_Shades_Black", "Black Shades", 20, "" },
            { "G_Shades_Blue", "Blue Shades", 20, "" },
            { "G_Shades_Green", "Green Shades", 20, "" },
            { "TRYK_Shemagh_mesh", "Mesh Scarf", 50, "" },
            { "TRYK_Shemagh_G", "Green Scarf", 50, "" },
            { "TRYK_Shemagh", "Tan Scarf", 50, "" },
            { "TRYK_Shemagh_WH", "White Scarf", 50, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };
};
