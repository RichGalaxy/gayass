#define true 1
#define false 0


class mining_config {
	
    version = 5; // 4.0 - 4.3 -> 4 | version 4.4+ -> 5
	vitemsclassname = "VirtualItems";  	 //Classname for you VirtualItems In the Vtiemsconfg or masterconfig

	pickupitem = "You mined some ";  	 //This is before the item name
	pickupitem2 = "."; 					 //this is after the item name
	fullinv = "Your inventory is full!"; //When the players inventory is full
	noresouce = "This rock has no useful resources!"; //When the player hits unsetup rock with pickaxe
	
	vanilla_rocks[] = {
		 "a3\rocks_f_argo\limestone\limestone_01_03_lc_f.p3d","rock"
		,"a3\rocks_f_argo\limestone\limestone_01_01_lc_f.p3d","rock"
	};

	asn_rocks[] = {
		 "asn_client_mining\ore\rock2.p3d"
		,"asn_client_mining\ore\rock1.p3d"
	};	

	asn_rock_textures[] = {
		 "asn_client_mining\ore\textures\copper.paa","copper_unrefined"
		,"asn_client_mining\ore\textures\iron.paa","iron_unrefined"
		,"asn_client_mining\ore\textures\coal.paa","coal_unrefined"
		,"asn_client_mining\ore\textures\diamond.paa","diamond_uncut"
		,"asn_client_mining\ore\textures\gold.paa","gold_unrefined"

	};
};