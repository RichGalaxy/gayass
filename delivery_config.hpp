#define true 1
#define false 0


class delivery_config {
	
    version = 5; // 4.0 - 4.3 -> 4 | version 4.4+ -> 5
	
	Delivery_range = 4000; 
	Deliverys_per_area = 1; 
	
	Deliverarea = "Deliver package to this area!"; 
	DeliverHere = "Deliver package here!"; 

	locationupdated = "Location updated deliver a package to this location!"; 

	drop = "<t color='#00FFFF'>Drop Delivery Package</t>"; 
	pickup = "<t color='#00FFFF'>Pickup Delivery Package</t>"; 
	
	payment = 250; //The payment given in cash when the package is droped off.
	
	packageisout = "You already have a package out on delivery please deliver that then you can get a new on"; 
	packagespawned = "Here you are please deliver this package to the location marked on your map!"; 
	
	distancetodest = 10; //The distance the player can be away from the object he is told to deliver the package when he drops it and gets paid

	getpaid = "You have been paid for delivering the package."; 
	
	//The array of objects that are able to be delivery points full list can be found here https://community.bistudio.com/wiki/nearestTerrainObjects
	typeofobjects[] = {
		 "BUILDING"
		,"HOUSE"
		,"CHURCH"
		,"CHAPEL"
		,"BUNKER"
		,"FORTRESS"
		,"VIEW-TOWER"
		,"LIGHTHOUSE"
		,"FUELSTATION"
		,"HOSPITAL"
		,"TOURISM"
		
	};

};