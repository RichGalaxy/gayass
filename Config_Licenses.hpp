/*
*    class:
*        variable = Variable Name
*        displayName = License Name
*        price = License Price
*        illegal = Illegal License
*        side = side indicator
*/
class Licenses {
    //Civilian Licenses
    class driver {
        variable = "driver";
        displayName = "STR_License_Driver";
        price = 1000;
        illegal = false;
        side = "civ";
    };

    class trucking {
        variable = "trucking";
        displayName = "STR_License_Truck";
        price = 10000;
        illegal = false;
        side = "civ";
    };
	
    class home {
        variable = "home";
        displayName = "STR_License_Home";
        price = 50000;
        illegal = false;
        side = "civ";
    };

    class gun {
        variable = "gun";
        displayName = "STR_License_Firearm";
        price = 10000;
        illegal = false;
        side = "civ";
    };

    //Processing Licenses
    class farming {
        variable = "farming";
        displayName = "STR_License_Farming";
        price = 1500;
        illegal = false;
        side = "civ";
    };

    class copper {
        variable = "copper";
        displayName = "STR_License_Copper";
        price = 3000;
        illegal = false;
        side = "civ";
    };
	
    class iron {
        variable = "iron";
        displayName = "STR_License_Iron";
        price = 5000;
        illegal = false;
        side = "civ";
    };
	
    class coal {
        variable = "coal";
        displayName = "STR_License_Coal";
        price = 8000;
        illegal = false;
        side = "civ";
    };

    class diamond {
        variable = "diamond";
        displayName = "STR_License_Diamond";
        price = 12000;
        illegal = false;
        side = "civ";
    };

    class gold {
        variable = "gold";
        displayName = "STR_License_Gold";
        price = 18000;
        illegal = false;
        side = "civ";
    };

    class sulfur {
        variable = "sulfur";
        displayName = "STR_License_Sulfur";
        price = 22000;
        illegal = false;
        side = "civ";
    };
	
    class oil {
        variable = "oil";
        displayName = "STR_License_Oil";
        price = 10000;
        illegal = false;
        side = "civ";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_License_Marijuana";
        price = 30000;
        illegal = true;
        side = "civ";
    };
	
    //Civilian Licenses - WHITELISTED
    class mafia {
        variable = "mafia";
        displayName = "STR_License_mafia";
        price = 1000;
        illegal = false;
        side = "civ";
    };
	
    class mayor {
        variable = "mayor";
        displayName = "STR_License_mayor";
        price = 1000;
        illegal = false;
        side = "civ";
    };
	
    class casino {
        variable = "casino";
        displayName = "STR_License_casino";
        price = 1000;
        illegal = false;
        side = "civ";
    };
	
    class lawyer {
        variable = "lawyer";
        displayName = "STR_License_lawyer";
        price = 1000;
        illegal = false;
        side = "civ";
    };

    //Police Licenses - WHITELISTED
    class swat {
        variable = "swat";
        displayName = "STR_License_swat";
        price = 1000;
        illegal = false;
        side = "cop";
    };
	
    class fbi {
        variable = "fbi";
        displayName = "STR_License_fbi";
        price = 1000;
        illegal = false;
        side = "cop";
    };
	
    class rifle {
        variable = "rifle";
        displayName = "STR_License_rifle";
        price = 1000;
        illegal = false;
        side = "cop";
    };
};
