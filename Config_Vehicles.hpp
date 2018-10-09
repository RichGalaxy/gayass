class CarShops {
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "ivory_190e", "" },
            { "ivory_gti", "" },
            { "ivory_gt500", "" },
            { "ivory_rs4", "" },
            { "ivory_e36", "" },
            { "ivory_isf", "" },
            { "ivory_m3", "" },
            { "ivory_evox", "" },
            { "ivory_wrx", "" },
            { "ivory_r34", "" },
            { "ivory_suburban", "" },
            { "ivory_elise", "" },
            { "ivory_challenger", "" }
        };
    };
	
    class civ_luxury {
        side = "civ";
        vehicles[] = {
            { "ivory_r8", "" },
            { "ivory_c", "" },
            { "ivory_911", "" },
            { "ivory_supra", "" },
            { "ivory_lfa", "" },
            { "ivory_mp4", "" },
            { "ivory_lp560", "" },
            { "ivory_rev", "" },
            { "ivory_ccx", "" },
            { "ivory_f1", "" },
            { "ivory_veyron", "" }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "Jonzie_Flat_Bed", "" },
            { "Jonzie_Tanker_Truck", "" },
            { "Jonzie_Box_Truck", "" }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "ivory_b206", "" },
            { "dezkit_b206_hs", "" }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Scooter_Transport_01_F", "" },
            { "C_Rubberboat", "" },
            { "vvv_NewYacht", "" }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "M_Ambulance", "" },
            { "M_CVPI_EMS", "" },
            { "M_Tahoe_EMS", "" },
            { "RR_Firetruck", "" }
        };
    };

    class med_air_shop {
        side = "med";
        vehicles[] = {
            { "dezkit_b206_ems", "" },
            { "dezkit_b206_rescue", "" },
            { "C_hh60j_unarmed_F", "" }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "M_CVPI", "call life_coplevel >= 2" },
            { "M_FPIS", "call life_coplevel >= 3" },
            { "M_Charger12", "call life_coplevel >= 4" },
            { "M_Tahoe", "call life_coplevel >= 4" },
            { "M_Silverado_cab", "call life_coplevel >= 5" },
            { "M_Silverado", "call life_coplevel >= 5" },
            { "M_Charger12_UC_Black", "call life_coplevel >= 6" },
            { "M_Tahoe_UC_Black", "call life_coplevel >= 6" }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "dezkit_b206_police", "call life_coplevel >= 5" }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "C_Boat_Civil_01_police_F", "call life_coplevel >= 5" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class ivory_190e {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2500;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ",

        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_gti {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 6000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_gt500 {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_rs4 {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 18000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_e36 {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 24000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_isf {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 38000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_m3 {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 52000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_evox {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 72000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_wrx {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 86000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };
	
    class ivory_r34 {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 94000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };
	
    class ivory_suburban {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 102000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };
	
    class ivory_elise {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_challenger {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 140000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };
	
    class ivory_r8 {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_c {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 185000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_911 {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 240000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_supra {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 360000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };
	
    class ivory_lfa {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 420000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };
	
    class ivory_mp4 {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 620000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };
	
    class ivory_lp560 {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };
	
    class ivory_rev {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };
	
    class ivory_ccx {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_f1 {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1800000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };
	
    class ivory_veyron {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2600000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

	
    class Jonzie_Flat_Bed {
        vItemSpace = 50;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = { };
    };

    class Jonzie_Tanker_Truck {
        vItemSpace = 80;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 280000;
        textures[] = { };
    };

    class Jonzie_Box_Truck {
        vItemSpace = 120;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 380000;
        textures[] = { };
    };

	
    class ivory_b206 {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = { };
    };
	
    class dezkit_b206_hs {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = { };
    };
	
    class C_Scooter_Transport_01_F {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };
	
    class C_Rubberboat {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 40000;
        textures[] = { };
    };
	
    class vvv_NewYacht {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 820000;
        textures[] = { };
    };
	
    class M_Ambulance {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 2000;
        textures[] = { };
    };
	
    class M_CVPI_EMS {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 2500;
        textures[] = { };
    };
	
    class M_Tahoe_EMS {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };
	
    class RR_Firetruck {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	
    class dezkit_b206_ems {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	
    class dezkit_b206_rescue {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	
    class C_hh60j_unarmed_F {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 6000;
        textures[] = { };
    };
	
    class M_CVPI {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 1000;
        textures[] = { };
    };
	
    class M_FPIS {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 1500;
        textures[] = { };
    };
	
    class M_Charger12 {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 2500;
        textures[] = { };
    };
	
    class M_Tahoe {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };
	
    class M_Silverado_cab {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };
	
    class M_Silverado {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 3000;
        textures[] = { };
    };
	
    class M_Charger12_UC_Black {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 4500;
        textures[] = { };
    };
	
    class M_Tahoe_UC_Black {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 4500;
        textures[] = { };
    };
	
    class dezkit_b206_police {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 5000;
        textures[] = { };
    };
	
    class C_Boat_Civil_01_police_F {
        vItemSpace = 20;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 2000;
        textures[] = { };
    };
};