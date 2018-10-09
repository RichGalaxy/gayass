#define true 1
#define false 0


class woodcutting_config {
	
    version = 5; // 4.0 - 4.3 -> 4 | version 4.4+ -> 5
	vitemsclassname = "VirtualItems"; //Classname for you VirtualItems In the Vtiemsconfg or masterconfig

	pickupitem = "You cut some "; //This is before the item name
	pickupitem2 = "."; //This is after the item name
	fullinv = "Your inventory is full!"; //When the players inventory is full
	cantcuthere = "You cant cut trees here"; //When the players is inside of a black list marker

	distancefromtree = 5; //The max distance from the tree that you can cut it from
	woodperpile = 4; //When you chop the tree down how much wood can be taken from the woodpile spawned
	
	damagetotree = 0.05; //When the tree hits 1 it will fallover and spawn a wood pile

	pilemodel = "a3\structures_f_epb\civ\accessories\woodpile_large_f.p3d";//The Woodpile model that spawns
	defaultwood = "wood"; //The default virtual item classname for wood from unpredifined trees
	
	//If enable trees once cut down will not respawn after server restart.
	//Unless they are in a respawn marker area
	persistentremoval = "False";
	
	//Models for the free thats give no default virtual items
	tree_types[] = {
		 "a3\vegetation_f_argo\trees\t_cupressus_stricta_3s_f.p3d","cypress_wood"
		,"a3\plants_f\tree\t_oleae1s_f.p3d","olive_wood"
		,"a3\plants_f\tree\t_PinusS2s_b_F","pinus_wood"
	};
	
	//To Disable players from cutting tress in this area.
	//Wood cutting blacklist areas the name of the markers
	blacklist_markers[] = {
		 "BlacklistArea"
		,"BlacklistArea1"
	};	
		
		
	//To Disable outside of the areas in the array below.
	whitelistonlyzones = "true";
	//Wood cutting blacklist areas the name of the markers
	whitelisted_markers[] = {
		 "Whitelistarea_0"
		,"Whitelistarea_1"
		,"Whitelistarea_2"
	};	
	
	//An Area where tress will respawn after server restart if "persistentremoval" is set to true
	//Wood cutting respawn areas the name of the markers
	respawn_markers[] = {
		 "TreeRespawnArea"
		,"TreeRespawnArea1"
	};
};