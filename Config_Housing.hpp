#define true 1
#define false 0

/*
    price - Cost of the building
    numberCrates - Allowed number of crates
    restrictedPos[] - Same as the old fn_getBuildingPositions. A list of restricted building positions (i.e, to stop spawning outside, or by windows etc)
        default: {}
    canGarage - True if the building can be used as a garage (need to buy ontop)
        default: false
    garageSpawnPos[] - worldToModel position to spawn vehicles, leave {} if canGarage is false.
        default: {}
    garageSpawnDir - Offset to garage direction to spawn at (+-90 etc). It will be used in the manner: getDir _garage + spawnDir
        default: 0
    garageBlacklists[] - List of blacklisted houses for buying garages
        default: {}
*/

class Housing {
  
    class Malden {
        /*
        ------------------------------------------
        --- DEFAULT
        ------------------------------------------
        */

        class Land_ivory_trailer_01 {
            price = 400000;
            numberCrates = 1;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };
        
        class Land_ivory_trailer_02 : Land_ivory_trailer_01{};
        class Land_ivory_trailer_03 : Land_ivory_trailer_01{};
        class Land_ivory_trailer_04 : Land_ivory_trailer_01{};
        class Land_ivory_trailer_05 : Land_ivory_trailer_01{};
        class Land_ivory_trailer_06 : Land_ivory_trailer_01{};

		
        class Land_HouseDoubleAL {
            price = 2800000;
            numberCrates = 3;
            restrictedPos[] = {0,1,2,3,4};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,0,3.5};
        };
		
        class Land_HouseDoubleAL2 : Land_HouseDoubleAL{};

        class Land_HouseA {
            price = 1250000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-1.5,0,2};
        };

        class Land_HouseA1 : Land_HouseA{};
        class Land_HouseA1_L : Land_HouseA{};
        class Land_HouseB : Land_HouseA{};
        class Land_HouseB1 : Land_HouseA{};
        class Land_HouseB1_L : Land_HouseA{};
        class Land_HouseC_R : Land_HouseA{};
        class Land_HouseC1_L : Land_HouseA{};

    };  
};
