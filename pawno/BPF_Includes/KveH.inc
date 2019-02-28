//by rjjj & audifan00


#if defined _KveH_included
	#endinput
#endif
#define _KveH_included

#define Neon_Azul ((5))
#define Neon_Vermelho ((6))
#define Neon_Verde ((7))
#define Neon_Branco ((8))
#define Neon_Rosa ((9))
#define Neon_Amarelo ((10))


enum neon_i
{
	Carro_cor,
	Carro_Neon1,
	Carro_Neon2
};
new VehicleNeon[MAX_VEHICLES][neon_i];



stock SetVehicleNeon(vehicleid, cor, bool:status){
	if(!status) return ResetVehicleNeon(vehicleid);
	if(cor == Neon_Azul)
	{
	    VehicleNeon[vehicleid][Carro_cor] = Neon_Azul;
	    DestroyDynamicObject(VehicleNeon[vehicleid][Carro_Neon1]);
	    DestroyDynamicObject(VehicleNeon[vehicleid][Carro_Neon2]);
	    VehicleNeon[vehicleid][Carro_Neon1] = CreateDynamicObject(18648,0,0,0,0,0,0);
	    VehicleNeon[vehicleid][Carro_Neon2] = CreateDynamicObject(18648,0,0,0,0,0,0);
 		AttachDynamicObjectToVehicle(VehicleNeon[vehicleid][Carro_Neon1], vehicleid, -0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	 	AttachDynamicObjectToVehicle(VehicleNeon[vehicleid][Carro_Neon2], vehicleid, 0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	}
	else if(cor == Neon_Vermelho)
	{
	    VehicleNeon[vehicleid][Carro_cor] = Neon_Vermelho;
	    DestroyDynamicObject(VehicleNeon[vehicleid][Carro_Neon1]);
	    DestroyDynamicObject(VehicleNeon[vehicleid][Carro_Neon2]);
	    VehicleNeon[vehicleid][Carro_Neon1] = CreateDynamicObject(18647,0,0,0,0,0,0);
	    VehicleNeon[vehicleid][Carro_Neon2] = CreateDynamicObject(18647,0,0,0,0,0,0);
 		AttachDynamicObjectToVehicle(VehicleNeon[vehicleid][Carro_Neon1], vehicleid, -0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	 	AttachDynamicObjectToVehicle(VehicleNeon[vehicleid][Carro_Neon2], vehicleid, 0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	}
	else if(cor == Neon_Verde)
	{
	    VehicleNeon[vehicleid][Carro_cor] = Neon_Verde;
	    DestroyDynamicObject(VehicleNeon[vehicleid][Carro_Neon1]);
	    DestroyDynamicObject(VehicleNeon[vehicleid][Carro_Neon2]);
	    VehicleNeon[vehicleid][Carro_Neon1] = CreateDynamicObject(18649,0,0,0,0,0,0);
	    VehicleNeon[vehicleid][Carro_Neon2] = CreateDynamicObject(18649,0,0,0,0,0,0);
 		AttachDynamicObjectToVehicle(VehicleNeon[vehicleid][Carro_Neon1], vehicleid, -0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	 	AttachDynamicObjectToVehicle(VehicleNeon[vehicleid][Carro_Neon2], vehicleid, 0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	}
	else if(cor ==  Neon_Branco)
	{
	    VehicleNeon[vehicleid][Carro_cor] = Neon_Branco;
	    DestroyDynamicObject(VehicleNeon[vehicleid][Carro_Neon1]);
	    DestroyDynamicObject(VehicleNeon[vehicleid][Carro_Neon2]);
	    VehicleNeon[vehicleid][Carro_Neon1] = CreateDynamicObject(18652,0,0,0,0,0,0);
	    VehicleNeon[vehicleid][Carro_Neon2] = CreateDynamicObject(18652,0,0,0,0,0,0);
 		AttachDynamicObjectToVehicle(VehicleNeon[vehicleid][Carro_Neon1], vehicleid, -0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	 	AttachDynamicObjectToVehicle(VehicleNeon[vehicleid][Carro_Neon2], vehicleid, 0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	}
	else if(cor == Neon_Rosa)
	{
	    VehicleNeon[vehicleid][Carro_cor] = Neon_Rosa;
	    DestroyDynamicObject(VehicleNeon[vehicleid][Carro_Neon1]);
	    DestroyDynamicObject(VehicleNeon[vehicleid][Carro_Neon2]);
	    VehicleNeon[vehicleid][Carro_Neon1] = CreateDynamicObject(18651,0,0,0,0,0,0);
	    VehicleNeon[vehicleid][Carro_Neon2] = CreateDynamicObject(18651,0,0,0,0,0,0);
 		AttachDynamicObjectToVehicle(VehicleNeon[vehicleid][Carro_Neon1], vehicleid, -0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	 	AttachDynamicObjectToVehicle(VehicleNeon[vehicleid][Carro_Neon2], vehicleid, 0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	}
	else if(cor == Neon_Amarelo)
	{
	    VehicleNeon[vehicleid][Carro_cor] = Neon_Amarelo;
	    DestroyDynamicObject(VehicleNeon[vehicleid][Carro_Neon1]);
	    DestroyDynamicObject(VehicleNeon[vehicleid][Carro_Neon2]);
	    VehicleNeon[vehicleid][Carro_Neon1] = CreateDynamicObject(18650,0,0,0,0,0,0);
	    VehicleNeon[vehicleid][Carro_Neon2] = CreateDynamicObject(18650,0,0,0,0,0,0);
 		AttachDynamicObjectToVehicle(VehicleNeon[vehicleid][Carro_Neon1], vehicleid, -0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	 	AttachDynamicObjectToVehicle(VehicleNeon[vehicleid][Carro_Neon2], vehicleid, 0.8, 0.0, -0.70, 0.0, 0.0, 0.0);
	}
	return 1;
}

stock GetVehicleNeon(vehicleid){
	return VehicleNeon[vehicleid][Carro_cor];
}

stock ResetVehicleNeon(vehicleid){
	DestroyDynamicObject(VehicleNeon[vehicleid][Carro_Neon1]);
 	DestroyDynamicObject(VehicleNeon[vehicleid][Carro_Neon2]);
	VehicleNeon[vehicleid][Carro_cor] = 0;
	return 1;
}
