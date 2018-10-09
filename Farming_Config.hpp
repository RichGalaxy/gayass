
class Farming_Config {
	
	//////////////////////////////////////////////Text/////////////////////////////////////	
	text_harvested = "You have harvested ";
	text_andgot = "and got ";
	text_potfull = "This pot is full.";
	text_planttobig = "This plant is to big for this pot.";
	text_planted = "You Planted a ";
	
	text_water10 = "This plant requires water or it will die soon!";
	text_water20 = "This plant requires water";
	text_water30 = "This plants soil is dry";
	text_water40 = "This plants soil is quite dry";
	text_water50 = "This plants soil is damp";
	text_water60 = "This plants soil is wet from watering";
	text_water70 = "This plant has been watered fairly recently";
	text_water80 = "This plant has been watered recently";
	text_water90 = "This plant has been watered very recently";
	text_water99 = "This plant just been watered";
	
	text_water = "This plant does not require watering";
	
	text_to_close = "You Cant plant this here it to close to another plant";
	
	text_notinzone = "You Cant plant this here it. You are not in planting zone or near a pot.";
	
	////////////////////////////////////////////Global Settings//////////////////////////////////	
	
	water_increase = 1; // the ammount of water that gets added to the plants percentage.
	water_increase_time = 1; // The update rate on watering low numbers and lower fps.
	
	min_dtcp = 2; // The Minimum distance one plant can be to another.
	
	harvestrange = 2; // The max range you can harvest a plant from.

	//The Marker names of the fields that are allowed to be planted in.
	fieldmarkers[] = {
		 "Field_0"
		,"Field_1"
	};
	
	////////////////////////////////////////////Pot Types//////////////////////////////////	
	class Pots_Cfg {
	
		//The classname of the pot
		class Land_Pot_01_F {
			//The max size of the plant that be placed in the pot
			maxsize = 4;
			
			//The positions of the plants once in the pot uses "modelToWorldWorld" to place pot positions
			spots[] = {
				 {-0.5,0,0}
				,{0.5,0,0}
			};
		};		
		class Land_Pot_02_F {
			maxsize = 5;
			spots[] = {
				{0,0,0}
			};
		};		
	};

	////////////////////////////////////////////Plant Types//////////////////////////////////
	class Seeds_Cfg {
	
		//The Name of the models.p3d this is "cannabis" as the p3d for this plant is "cannabis.p3d"
		class cannabis {	
			//If this model is a custom asn model
			custommodel = "true";
			
			// The size of the plant to see if it will fit in a pot
			size = 2;
			
			//The model for the plant
			model = "ASN_Client_Farming\meshes\cannabis.p3d";
			
			// The ammount of seconds it takes until the next grow step happens
			growrate = 10;
			
			//The ammount of growing stages so the update steps untill its fully grown
			stages = 10; 

			// The name of the plant
			name = "Cannabis";		
			
			// The ammount of Vitems you get when you pick the plant	
			ammount = 2;

			//What VItem the plant provied when picked 			
			yield = "cannabis";
			
			//if the plant requires watering if false this type of plant will not require watering
			requires_water = "true";
			
			//The ammount of seconds that it takes to update the water level percentage
			water_time = 10; 
			
			//The Percent of water removed every "water_time" seconds			
			water_decrease = 5; 
		};
		
		class sunflower {
			custommodel = "true";
			size = 2;		
			model = "ASN_Client_Farming\meshes\sunflower.p3d";
			growrate = 10;
			stages = 10;

			name = "Sunflowers";			
			ammount = 2;		
			yield = "sunflower";		
			
			requires_water = "true";
			water_time = 10; 		
			water_decrease = 5; 			
		};		
		class bean {
			custommodel = "true";
			size = 2;		
			model = "ASN_Client_Farming\meshes\bean.p3d";
			growrate = 10;
			stages = 10;

			name = "Beans";			
			ammount = 2;		
			yield = "bean";	
						
			requires_water = "true";
			water_time = 10; 		
			water_decrease = 5; 
		};		
		
		class pumpkin {
			custommodel = "true";
			size = 2;		
			model = "ASN_Client_Farming\meshes\pumpkin.p3d";
			growrate = 10;
			stages = 10;

			name = "Pumpkins";			
			ammount = 2;		
			yield = "pumpkin";	
						
			requires_water = "true";
			water_time = 10; 		
			water_decrease = 5; 
		};	
		
		class wheat {
			custommodel = "true";
			size = 5;		
			model = "ASN_Client_Farming\meshes\wheat.p3d";
			growrate = 10;
			stages = 10;

			name = "Wheat";			
			ammount = 2;		
			yield = "wheat";	
						
			requires_water = "true";
			water_time = 10; 		
			water_decrease = 5; 
		};		
		
		class cotton {
			custommodel = "true";
			size = 5;		
			model = "ASN_Client_Farming\meshes\cotton.p3d";
			growrate = 10;
			stages = 10;

			name = "Cotton";			
			ammount = 2;		
			yield = "cotton";
						
			requires_water = "true";
			water_time = 10; 		
			water_decrease = 5; 
		};		
		
		class t_oleae1s_f {
			custommodel = "false";
			size = 5;		
			model = "a3\plants_f\tree\t_oleae1s_f.p3d";
			growrate = 10;
			stages = 10;

			name = "Olive Tree";			
			ammount = 3;		
			yield = "cannabis";	
						
			requires_water = "true";
			water_time = 10; 		
			water_decrease = 5; 
		};	
		
		class t_broussonetiap1s_f {
			custommodel = "false";
			size = 5;		
			model = "a3\plants_f\tree\t_broussonetiap1s_f.p3d";
			growrate = 1;
			stages = 10;

			name = "Orange Tree";			
			ammount = 3;		
			yield = "cannabis";	
						
			requires_water = "true";
			water_time = 10; 		
			water_decrease = 5; 
		};
	};
};