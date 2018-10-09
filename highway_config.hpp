/*
    File: highway_Config.hpp
    Author: ArmaServices.net Dev Team (Armaservices.net)
    Description: Master config for ASN Highway maintanance system. 
*/
#define true 1
#define false 0


class highway_config {
	
    version = 5; // version 3.x -> 3 | 4.0 - 4.3 -> 4 | version 4.4+ -> 5

	Repair = "Repairing...";
	Repaired = "Repaired.";	
	signuptext = "Signup to Highway Maintanance.";
	signupedtext = "You have signup to highway maintanance.";
	paychecktext = "has been added to your Bank account.";
	
	paycheck = 50;
	
	//To get the object look at and object and use "Hint str cursorObject;"
	//in the console then use the name of the object it show for examaple.
	//It Showed "1116734: t_ficusb2s_f.p3d" in the top right you would added
	//"t_ficusb2s_f" so the text without the .p3d if you wanted to beable to fix 
	//all objects with "t_" in the name just add "t_" to this list and that will also work.	
	
	Repairable_Objects[] = {
		 "signt_"
		,"lampstreet_"
		,"garbagebin_"
		,"city_gate_"
		,"t_"
		,"plp_"
	};
};