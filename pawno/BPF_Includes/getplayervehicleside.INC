/*
* Pegar lado em qual o player está do veículo
* Por Bruno da Silva
* Usando função do MP2
*/


enum {
	VEHICLE_FRONT, VEHICLE_BACK, VEHICLE_LEFT, VEHICLE_RIGHT
}

// Código por Bruno da Silva
GetPlayerVehicleSide(playerid, vehicleid)
{
	static Float:x[5],Float:y[5],Float:z[5];

	GetPosBetweenVehicle(vehicleid, x[0], y[0], z[0],.dangle = -180.0); // atras
	GetPosBetweenVehicle(vehicleid, x[1], y[1], z[1],.dangle = -000.0); // frente
	GetPosBetweenVehicle(vehicleid, x[2], y[2], z[2],.dangle = -090.0); // esquerda
	GetPosBetweenVehicle(vehicleid, x[3], y[3], z[3],.dangle =  090.0); // direita

	z[0] = GetPlayerDistanceFromPoint(playerid, x[0], y[0], z[0]);
	z[1] = GetPlayerDistanceFromPoint(playerid, x[1], y[1], z[1]);
	z[2] = GetPlayerDistanceFromPoint(playerid, x[2], y[2], z[2]);
	z[3] = GetPlayerDistanceFromPoint(playerid, x[3], y[3], z[3]);

	if(z[0]<z[1])
	if(z[0]<z[2])
	if(z[0]<z[3])
	return VEHICLE_BACK;

	if(z[1]<z[2])
	if(z[1]<z[3])
	return VEHICLE_FRONT;


	if(z[2]<z[3])
	return VEHICLE_LEFT;

	return VEHICLE_RIGHT;

}


// Código por MP2
stock GetPosBetweenVehicle(vehicleid, &Float:x, &Float:y, &Float:z, Float:offset=0.5, Float:dangle = 0.0)
{
	new Float:vehicleSize[3], Float:vehiclePos[3];
	GetVehiclePos(vehicleid, vehiclePos[0], vehiclePos[1], vehiclePos[2]);
	GetVehicleModelInfo(GetVehicleModel(vehicleid), VEHICLE_MODEL_INFO_SIZE, vehicleSize[0], vehicleSize[1], vehicleSize[2]);
	GetXYBehindVehicle(vehicleid, vehiclePos[0], vehiclePos[1], (vehicleSize[1]/2)+offset, dangle);
	x = vehiclePos[0];
	y = vehiclePos[1];
	z = vehiclePos[2];
	return 1;
}

GetXYBehindVehicle(vehicleid, &Float:q, &Float:w, Float:distance, Float:dangle = 0.0)
{
	new Float:a;
	GetVehiclePos(vehicleid, q, w, a);
	GetVehicleZAngle(vehicleid, a);
	q += (distance * -floatsin(-a-dangle, degrees));
	w += (distance * -floatcos(-a-dangle, degrees));
}
