#define true 1
#define false 0

/*
    Master settings for various features and functionality
*/
class Life_Settings {
/* Logging and Security Settings*/
    /* Security Settings */

    /* Data Logging Settings */
    battlEye_friendlyLogging = false; //False [default] - Read the logs from the server.rpt. True - Read the logs from the publicVariable.log. NOTE: Due to how diag_log works it will log to both files either way and the setting is merely for beautification purposes.
    player_advancedLog = false; //False [default] - No advanced logging. True - Logs house purchase and sale, vehicle purchase, sale, and chop shopping, police arrests, and  creations. Search for: advanced_log
    player_moneyLog = false; //False [default] - No money logging. True - Logs player bank deposits, withdraws, and transfers, bank deposits and withdraws, money picked up off of the ground, and player robbery. Search for: money_log
    player_deathLog = false; //False [default] - No death logging. True - Logs victim and killer, and vehicle or weapon if used, when a player dies. Search for: death_log

/* Database Related Settings */
    save_virtualItems = true; //Save Virtual items (all sides)?
    saved_virtualItems[] = { "toolkit", "fuelFull", "bandages", "waterBottle", "redgull", "peach", "apple", "tbacon", "cprKit", "lockpick", "zipties", "blindfold", "codeCracker", "blastingCharge", "demolitioncharge", "speedbomb", "beer", "whiskey", "tbacon", "coffee", "donuts", "fries", "sandwich", "nuggets", "burger", "pepsi", "taco", "burrito", "paratha", "cola", "storagesmall", "storagebig", "plp_ct_woodboxlightmedium", "furniturewoodtable", "furnituretarget", "furnitureportgen", "furniturefmradio", "furniturewoodblue", "furnituremetalrack", "furniturePalletVert", "furnitureMapAltis", "furnitureSunChairGreen", "furnitureSunChair", "furnitureSleepingBagBrown", "furnitureSleepingBagBlue", "furnitureSleepingBag", "furniturecampingtable", "furnitureopenlaptop", "furniturebagshort", "furniturechair", "furnituredesk", "morphine", "defibrillator", "marijuana", "oil_processed", "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark", "copper_refined", "iron_refined", "coal_refined", "diamond_cut", "gold_refined", "cannabis_seed", "sunflower_seed", "bean_seed", "pumpkin_seed", "wheat_seed", "cotton_seed", "sunflower", "bean", "pumpkin", "wheat", "cotton", "panicbutton" }; //Array of virtual items that can be saved on your player.
    save_playerStats = true; //Save food, water and damage (all sides)?
    save_civilian_weapons = true; //Allow civilians to save weapons on them?
    save_civilian_position = true; //Save civilian location?
    save_civilian_position_restart = false; //Save civilian location only between restarts. 
    //^^^TURN TO TRUE BEFORE LAUNCH
    /* !!!TO SAVE POSITION BETWEEN RESTARTS save_civilian_position MUST BE TRUE!!! */
    save_civilian_positionStrict = false; //Strip the player if possible combat-log?  WARNING: Server crashes and lack of reliable syncing can trigger this.

    /* Vehicle Data Saving */
    save_vehicle_virtualItems = false; //Save virtual items inside the vehicle (all sides)(-- See defined items on next line --)
    save_vehicle_items[] = { "fueldart", "megaphone", "pepsi", "cocaCola", "monsterEnergy", "doritos", "kfc", "zipties", "blindfold", "cprKit", "morphine", "keys", "handcuffs", "pickaxe","fuelFull", "spikeStrip", "lockpick", "defuseKit" };
    save_vehicle_inventory = false; //Save Arma inventory of vehicle to the database
    save_vehicle_fuel = true; //Save vehicle fuel level to the database (Impounded/Garaged).
    save_vehicle_damage = true; //Save vehicle damage to the database.
    save_vehicle_illegal = false; //This will allow cops to be advised when a vehicle, with illegal items in it, is impounded. This will also save illegal items as proof of crime, and needs "save_vehicle_virtualItems" set as true. Illegal items don't need to be set in save_vehicle_items[] for being saved, if it's enabled.

    /* Shop Robbery */
	robberyMarkers = true;      //Addition added by Pril. Ability to use markers or not use markers for Gas Station Robberys. Default: true
	
/*Cop Settings*/
    cop_cars[]= {"M_CVPI","M_FPIS","M_Charger12","M_Tahoe","M_Silverado_cab","M_Silverado","M_Charger12_UC_Black","M_Tahoe_UC_Black"};


/* System Settings */
    /* ATM & Federal Reserve System Configurations */
    global_ATM = true; //Allow users to access any ATM on the map (Marked & Unmarked).
    noatm_timer = 10; //Time in minutes that players cannot deposit money after selling stolen gold.
    minimum_cops = 0; //Bank
    minimum_cops_bank = 0; //New bank

    /*Death settings*/
    drop_weapons_onDeath = false; //Set true to enable weapon dropping on death. False (default) will delete player weapons on death, allowing them to be revived with them instead
    
    /* Basic System Configurations */
    donor_level = true; //Enable the donor level set in database (var = life_donorlevel; levels = 0,1,2,3,4,5). ATTENTION! Before enabling, read: https://www.bistudio.com/community/game-content-usage-rules & https://www.bistudio.com/monetization
    enable_fatigue = true; //Set to false to disable the ARMA 3 fatigue system.
    total_maxWeight = 32; //Static variable for the maximum weight allowed without having a backpack
    respawn_timer = 300; //How many seconds a player should wait, before being able to respawn. Minimum 5 seconds.

    /* Channel 7 News Station Configurations */
    news_broadcast_cost = 2000000; //Cost for a player to send a news station broadcast.
    news_broadcast_cooldown = 20; //Time in minutes that is required between news station broadcasts. (Default = 20 minutes)
    news_broadcast_header_length = 60; //Number of characters that a header can consist of. Anything over this may clip. This depends on the font size and various other factors. Adjust with caution.
	
	//bank_cooldown = 1; //
	
    /* Clothing System Configurations */
    civ_skins = false; //Enable or disable civilian skins. Before enabling, you must add all the SEVEN files to textures folder. (It must be named as: civilian_uniform_1.jpg, civilian_uniform_2.jpg...civilian_uniform_6.jpg, civilian_uniform_7.jpg)
    cop_extendedSkins = false; //Enable or disable cop skins by level. Before enabling, you must add all the EIGHT files to textures folder. (It must be named as: cop_uniform.jpg + cop_uniform_1.jpg, cop_uniform_2.jpg...cop_uniform_6.jpg, cop_uniform_7.jpg; meaning cop_uniform = life_coplevel=0, cop_uniform_1 = life_coplevel=1, cop_uniform_2 = life_coplevel=2, etc...)
    clothing_noTP = true;  //Disable clothing preview teleport? (true = no teleport. false = teleport)
    clothing_box = false; //true = teleport to a black box. false = teleport to somewhere on map. (It only affects the game if clothing_noTP is set as false)
    clothing_masks[] = { "" };

    /* Escape Menu Configuration */
    escapeMenu_timer = 10; //Time required to pass before you can click the abort button in the escape menu.
    escapeMenu_displayExtras = true; //Display the players UID & serverName specified below in the escape menu.
    escapeMenu_displayText = "Thanks for playing!"; //Text displayed in the escape menu. Make it short.. around 20 characters.

    /* Fuel System Configurations */
    pump_service = true; //Allow users to use pump service on the map. Default = false
    fuel_cost = 50; //Cost of fuel per liter at fuel stations (if not defined for the vehicle already).
    service_chopper = 1000; //Cost to service chopper at chopper service station(Repair/Refuel).
    fuelCan_refuel = 250; //Cost to refuel an empty fuel canister at the fuel station pumps. (Be wary of your buy/sell prices on fuel cans to prevent exploits...)
	
    /* Gang System Configurations */
    gang_price = 250000; //Gang creation price. --Remember they are persistent so keep it reasonable to avoid millions of gangs.
    gang_upgradeBase = 10000; //The base cost for purchasing additional slots in a gang
    gang_upgradeMultiplier = 2.5; //CURRENTLY NOT IN USE

    /* Housing System Configurations */
    house_limit = 1; //Maximum number of houses a player can own.
    houseGarage_buyPrice = 1000000;
    houseGarage_sellPrice = 350000;

    /* Hunting & Fishing System Configurations */
    animaltypes_fish[] = { "Salema_F", "Ornate_random_F", "Mackerel_F", "Tuna_F", "Mullet_F", "CatShark_F", "Turtle_F" }; //Classnames of fish you can catch
    animaltypes_hunting[] = { "Sheep_random_F", "Goat_random_F", "Hen_random_F", "Cock_random_F", "Rabbit_F" }; //Classnames of aniamls you can hunt/gut

    /* Item-related Restrictions */
    restrict_medic_weapons = true; //Set to false to allow medics to use any weapon --true will remove ANY weapon they attempt to use (primary,secondary,launcher)
    restrict_clothingPickup = false; //Set to false to allow civilians to pickup/take any uniform (ground/crates/vehicles)
    restrict_weaponPickup = false; //Set to false to allow civilians to pickup/take any weapon (ground/crates/vehicles)
    restricted_uniforms[] = {""};
    restricted_weapons[] = {""};

    /* Jail System Configurations */
    jail_seize_vItems[] = { "lockpick", "zipties", "blindfold", "codeCracker", "blastingCharge", "demolitioncharge", "speedbomb""lockpick", "zipties", "blindfold", "codeCracker", "blastingCharge", "demolitioncharge", "speedbomb", "beer", "whiskey", "marijuana", "cannabis_seed", "panicbutton", "handcuffs", "keys", "spikeStrip" }; //Define VIRTUAL items you want to be removed from players upon jailing here. Use "jail_seize_inventory" for Arma inventory items.
    jail_seize_inventory = true; //Set to true to run the cop seize script on inmates. False will remove only weapons and magazines otherwise. (Basically used in case cops forget to seize items). [See Lines 106-111 below]
    sendtoJail_locations[] = { "jail_marker" }; //Enter the variableName from the mission.sqm here to allow cops to send a person to jail at these locations.
    jail_forceWalk = true;

    /* Medical System Configurations */
    revive_cops = true; //true to enable cops the ability to revive everyone or false for only medics/ems.
    revive_civ = true; //true to enable civs the ability to revive everyone or false for only medics/ems or medic/ems/cops.
    revive_east = true; //true to enable opfor the ability to revive everyone or false for only medics/ems or medic/ems/cops.
    revive_fee = 350; //Revive fee that players have to pay and medics only EMS(independent) are rewarded with this amount.
    hospital_heal_fee = 50; //Fee to heal at a hospital NPC

    /* Paycheck & Bank System Configurations */
    bank_cop = 10000; //Amount of cash in bank for new cops
    bank_civ = 10000; //Amount of cash in bank for new civillians
    bank_med = 10000; //Amount of cash in bank for new medics

    paycheck_cop = 700; //Payment for cops
    paycheck_civ = 300; //Payment for civillians
    paycheck_med = 700; //Payment for medics

    paycheck_period = 10; //Scaled in minutes
    bank_transferTax = .05; //Tax that player pays when transferring money from ATM. Tax = Amount * multiplier

    /* Player Job System Configurations */
    fuelTank_winMultiplier = 1; //Win Multiplier in FuelTank Missions. Increase for greater payout. Default = 1

    /* Search & Seizure System Configurations */
    seize_exempt[] = { "Binocular", "ItemWatch", "ItemCompass", "ItemGPS", "ItemMap" }; //Arma items that will not get seized from player inventories
    seize_uniform[] = { "U_Rangemaster", "Sheriff_Cadet", "Sheriff_Deputy", "Sheriff_SeniorDeputy", "Sheriff_Sergeant", "Sheriff_Lieutenant", "Sheriff_Captain", "Sheriff_Undersheriff", "Sheriff_Sheriff", "Sheriff_FBI" }; //Any specific uniforms you want to be seized from players
    seize_vest[] = { "V_TacVest_blk_POLICE", "beltradio_police", "Sheriff_LightVest", "FBI_LightVest", "SWAT_Vest" }; //Any specific vests you want to be seized from players
    seize_headgear[] = { "H_Cap_police", "Hat", "FBI_Cap", "SWAT_Helmet" }; //Any hats or helmets you want seized from players
    seize_minimum_rank = 1; //Required minimum CopLevel to be able to seize items from players

    /* Vehicle System Configurations */
    chopShop_vehicles[] = { "Car", "Air" }; //Vehicles that can be chopped. (Can add: "Ship" and possibly more -> look at the BI wiki...)
    vehicle_infiniteRepair[] = {true, true, true, true}; //Set to true for unlimited repairs with 1 toolkit. False will remove toolkit upon use. civilian, west, independent, east
    vehicleShop_rentalOnly[] = { "B_MRAP_01_hmg_F", "B_T_LSV_01_armed_F", "O_T_LSV_02_armed_F", "B_G_Offroad_01_armed_F", "B_Boat_Armed_01_minigun_F" }; //Vehicles that can only be rented and not purchased. (Last only for the session)
    vehicleShop_3D = true; //Add preview 3D inside Shop vehicle.       Default : False

    /* Vehicle Purchase Prices */
    vehicle_purchase_multiplier_CIVILIAN = 1; //Civilian Vehicle Buy Price = Config_Vehicle price * multiplier
    vehicle_purchase_multiplier_COP = 1; //Cop Vehicle Buy Price = Config_Vehicle price * multiplier
    vehicle_purchase_multiplier_MEDIC = 1; //Medic Vehicle Buy Price = Config_Vehicle price * multiplier
    vehicle_purchase_multiplier_OPFOR = -1; // -- NOT IN USE -- Simply left in for east support.

    /* Vehicle Rental Prices */
    vehicle_rental_multiplier_CIVILIAN = .60; //Civilian Vehicle Rental Price = Config_Vehicle price * multiplier
    vehicle_rental_multiplier_COP = .60; //Cop Vehicle Rental Price = Config_Vehicle price * multiplier
    vehicle_rental_multiplier_MEDIC = .60; //Medic Vehicle Rental Price = Config_Vehicle price * multiplier
    vehicle_rental_multiplier_OPFOR = -1; // -- NOT IN USE -- Simply left in for east support.

    /* Vehicle Sell Prices */
    vehicle_sell_multiplier_CIVILIAN = .2; //Civilian Vehicle Garage Sell Price = Vehicle Buy Price * multiplier
    vehicle_sell_multiplier_COP = .2; //Cop Vehicle Garage Sell Price = Vehicle Buy Price * multiplier
    vehicle_sell_multiplier_MEDIC = .2; //Medic Vehicle Garage Sell Price = Vehicle Buy Price * multiplier
    vehicle_sell_multiplier_OPFOR = -1; // -- NOT IN USE -- Simply left in for east support.

    /* Vehicle Insurance Prices */ 
    vehicle_insurance_multiplier_CIVILIAN = .35; //Civilian Vehicle Insurance Price = Vehicle Buy Price * multiplier 
    vehicle_insurance_multiplier_COP = .15; //Cop Vehicle Insurance Price = Vehicle Buy Price * multiplier 
    vehicle_insurance_multiplier_MEDIC = .15; //Medic Vehicle Insurance Price = Vehicle Buy Price * multiplier 
    vehicle_insurance_multiplier_OPFOR = -1; // -- NOT IN USE -- Simply left in for east support.

    /* "Other" Vehicle Prices */
    vehicle_chopShop_multiplier = .25; //Chop Shop price for vehicles. TO AVOID EXPLOITS NEVER SET HIGHER THAN A PURCHASE/RENTAL multipler!   Payout = Config_vehicle Price * multiplier
    vehicle_storage_fee_multiplier = -1; //Pull from garage cost --> Cost takes the playersides Buy Price * multiplier
    vehicle_cop_impound_multiplier = .01; //TO AVOID EXPLOITS NEVER SET HIGHER THAN A PURCHASE/RENTAL multipler!   Payout = Config_vehicle Price * multiplier

    disableCommanderView = false; //false - Group leaders can access the commander view. true [default] - Group leaders cannot access the commander view.
                                 //Commander/tactical view is accessed via pressing . [NUM] by default. It raises the camera significantly higher and steeper above the player in order to give a boarder tactical view of the surrounding area.                            

    /* Wanted System Settings *
    /* crimes[] = {String, Bounty, Code} */
    crimes[] = {
        {"STR_Crime_1","100","1"},
        {"STR_Crime_2","150","2"},
        {"STR_Crime_3","200","3"},
        {"STR_Crime_4","250","4"},
        {"STR_Crime_5","300","5"},
        {"STR_Crime_7","350","7"},
        {"STR_Crime_17","500","17"},
        {"STR_Crime_18","500","18"},
        {"STR_Crime_20","1000","20"},
        {"STR_Crime_21","1500","21"},
        {"STR_Crime_390","200","390"},
        {"STR_Crime_488","1000","488"},
        {"STR_Crime_666","2500","666"},
        {"STR_Crime_14","2500","14"},
        {"STR_Crime_16","2500","16"},
        {"STR_Crime_215","4000","215"},
        {"STR_Crime_207A","4000","207A"},
        {"STR_Crime_9","7000","9"},
        {"STR_Crime_207","7000","207"},
        {"STR_Crime_19","7000","19"},
        {"STR_Crime_211","7000","211"},
        {"STR_Crime_459","7000","459"},
        {"STR_Crime_15","7000","15"},
        {"STR_Crime_213","8500","213"},
        {"STR_Crime_481","8500","481"},
        {"STR_Crime_482","8500","482"},
        {"STR_Crime_22","8500","22"},
        {"STR_Crime_24","18000","24"},
        {"STR_Crime_25","18000","25"},
        {"STR_Crime_187V","18000","187V"},
        {"STR_Crime_23","22000","23"},
        {"STR_Crime_901","22000","901"},
        {"STR_Crime_667","25000","667"}
    };
};


#include "Config_Clothing.hpp"
#include "Config_Licenses.hpp"
#include "Config_Vehicles.hpp"
#include "Config_vItems.hpp"
#include "Config_Weapons.hpp"
#include "Config_Gather.hpp"
#include "Config_SpawnPoints.hpp"
#include "Config_Process.hpp"
#include "Config_Housing.hpp"
#include "Config_Garages.hpp"
#include "Config_eXpandedHousing.hpp"

