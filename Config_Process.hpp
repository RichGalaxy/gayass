/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
    class oil {
        MaterialsReq[] = {{"oil_unprocessed",1}};
        MaterialsGive[] = {{"oil_processed",1}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 400;
    };

    class marijuana {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_Marijuana";
        //ScrollText = "Process Marijuana";
        NoLicenseCost = 1000;
    };
	
    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 1000;
    };

    class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 1000;
    };

    class copper {
        MaterialsReq[] = {{"copper_unrefined",1}};
        MaterialsGive[] = {{"copper_refined",1}};
        Text = "STR_Process_Copper";
        //ScrollText = "Process Copper";
        NoLicenseCost = 300;
    };

    class iron {
        MaterialsReq[] = {{"iron_unrefined",1}};
        MaterialsGive[] = {{"iron_refined",1}};
        Text = "STR_Process_Iron";
        //ScrollText = "Process Iron";
        NoLicenseCost = 350;
    };

    class coal {
        MaterialsReq[] = {{"coal_unrefined",1}};
        MaterialsGive[] = {{"coal_refined",1}};
        Text = "STR_Process_Coal";
        //ScrollText = "Process Coal";
        NoLicenseCost = 380;
    };
	
    class diamond {
        MaterialsReq[] = {{"diamond_uncut",1}};
        MaterialsGive[] = {{"diamond_cut",1}};
        Text = "STR_Process_Diamond";
        //ScrollText = "Process Diamond";
        NoLicenseCost = 400;
    };

    class gold {
        MaterialsReq[] = {{"gold_unrefined",1}};
        MaterialsGive[] = {{"gold_refined",1}};
        Text = "STR_Process_Gold";
        //ScrollText = "Process Gold";
        NoLicenseCost = 450;
    };

    class sulfur {
        MaterialsReq[] = {{"sulfur_unrefined",1}};
        MaterialsGive[] = {{"sulfur_refined",1}};
        Text = "STR_Process_Sulfur";
        //ScrollText = "Process Sulfur";
        NoLicenseCost = 500;
    };
};
