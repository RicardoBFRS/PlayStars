
/*

Anti Cheater Feito por dimmy_scarface


-------------------------Anti Cheaters------------------------------------------

Anti-Xiters:

				Nomes                  Precisão

		- Anti Car-AirBreak 			95%
		- Anti Player-AirBreak          95%
		- Anti Teleport 				100%
	 	- Anti Speed Hack 				100%
		- Anti Money-Hack       		100%
		- Anti Armour-Hack      		100%
		- Anti Health-Hack              100%
		- Anti Divulguer        		80%
		- Anti Fly-Hack         		95%
		- Anti Fake-Kill        		90%
		- Anti State-Hack       		100%
		- Anti JoyPad           		50%
		- Anti BOT              		100%
		- Anti Weapon-Hack      		100%
		- Anti Armas proibidas  		100%
		- Anti Car-Flood                100%
                         
                         

--------------------------------------------------------------------------------
*/






#define RangeAB         95.0
#define Range_Driver    120.0

#define Cheat:%0(%1) forward %0(%1); public %0(%1)


#define AirBreak_Teleport        		(1)
#define Speed_Hack                      (2)
#define Money_Hack                      (3)
#define State_Hack                     	(4)
#define Cheater_Fly                     (5)
#define Weapon_Hack                     (6)
#define Armour_Hack                		(7)
#define Fake_Kill                       (8)
#define Player_Divulguer                (9)
#define Player_Joypad               	(10)
#define Armas_Proibidas                 (11)
#define Health_Hack                     (12)

new Slot_Weapon[MAX_PLAYERS][14];

enum ctinfo
{
	Float:PLAYER_POS_X,
	Float:PLAYER_POS_Y,
	Float:PLAYER_POS_Z,
	Float:Teleport_X,
	Float:Teleport_Y,
	Float:Teleport_Z,
	Float:Colete,
	Float:cVida,
	AGUARDO,
	PLAYER_TIMER,
	MONEY_PLAYER,
	STATE_PLAYER,
	FAKE_KILL_PLAYER,
	bool:PLAYER_WEAPON_HACK
};
new ds_info[MAX_PLAYERS][ctinfo];


public OnGameModeInit()
{
	SetTimer("AllCheater", 1000, true);
	EnableStuntBonusForAll(0);// < pra não bugar o Money Hack
	return CallLocalFunction("ab_OnGameModeInit", "");
}
forward ab_OnGameModeInit();

isPlayerInWater(playerid)
{ 
	static Float:fX, Float:fY, Float:fZ;
	GetPlayerPos(playerid, fX, fY, fZ);
	if((fX >= 2044.6 && fX <= 2192.984 && fY >= 1206.358 && fY <= 1376.552) && fZ < 0xA) return 1;
	else if((fX >= 2048.504 && fX <= 2185.174 && fY >= 1063.239 && fY <= 1202.49) && fZ < 0xA) return 1;
	else if((fX >= 2204.698 && fX <= 2204.698 && fY >= 1426.837 && fY <= 1430.705) && fZ < 0xA) return 1;
	else if((fX >= 2032.885 && fX <= 2114.887 && fY >= 1852.325 && fY <= 1991.575) && fZ < 0xC) return 1;
	else if((fX >= 2517.086 && fX <= 2606.897 && fY >= 2316.493 && fY <= 2420.93) && fZ < 0x16) return 1;
	else if((fX >= 2554.5996 && fX <= 2507.7683 && fY >= 1548.6178 && fY <= 1588.9154) && fZ < 0xF) return 1;
	else if((fX >= -2043.628 && fX <= -1973.561 && fY >= -980.9415 && fY <= -724.0283) && fZ < 0x20) return 1;
	else if((fX >= -2753.912 && fX <= -2665.071 && fY >= -522.3632 && fY <= -380.3444) && fZ < 0x05) return 1;
	else if((fX >= 1219.864 && fX <= 1292.118 && fY >= -2435.881 && fY <= -2325.344) && fZ < 0xF) return 1;
	else if((fX >= 1923.388 && fX <= 2010.854 && fY >= -1223.924 && fY <= -1168.656) && fZ < 0x16) return 1;
	else if((fX >= 1269.301 && fX <= 1314.935 && fY >= -837.0452 && fY <= -781.7769) && fZ < 0x5A) return 1;
	else if((fX >= 1087.3953 && fX <= 1102.3138 && fY >= -682.6734 && fY <= -663.0043) && fZ < 0x71) return 1;
	else if((fX >= 1268.6118 && fX <= 1291.8774 && fY >= -784.2910 && fY <= -764.6104) && fZ < 0x43D) return 1;
	else if(fZ < 0xF) return 1;
	return 0;
}

Cheat:AllCheater(){

	new
	    Float:pX, Float:pY, Float:pZ,
		Float:x, Float:y, Float:z, Float:r_r;
	foreach(Player, i)
	{
	    GetPlayerPos(i, pX, pY, pZ);
	    if(ds_info[i][AGUARDO] > 0)ds_info[i][AGUARDO]--;
		if(ds_info[i][STATE_PLAYER] > 0)ds_info[i][STATE_PLAYER]--;
		if(ds_info[i][FAKE_KILL_PLAYER] > 0 )ds_info[i][FAKE_KILL_PLAYER]--;

		x 			= ds_info[i][PLAYER_POS_X],
		y 			= ds_info[i][PLAYER_POS_Y],
		z 			= ds_info[i][PLAYER_POS_Z];
	        
		if(IsPlayerInAnyVehicle(i))r_r = Range_Driver;
	    else r_r = RangeAB;


		/*---------------------- Anti Fly ---------------------------------*/
		if(CheckAnim(i) && !isPlayerInWater(i) && PlayerVelocidade(i) > 40)
		{
		    	CallLocalFunction("PlayerCheater","id", i, Cheater_Fly);
		}
			
		/*---------------------- Speed Hack -------------------------------*/
		else if(GetPlayerState(i) == PLAYER_STATE_DRIVER && PlayerVehicleSpeed(i) > 280)
		{
		        CallLocalFunction("PlayerCheater","id", i, Speed_Hack);
  				new Float:vl[3];
				GetVehicleVelocity(GetPlayerVehicleID(i), vl[0], vl[1], vl[2]);
				SetVehicleVelocity(GetPlayerVehicleID(i), vl[0] * 0.1, vl[1]  * 0.1, vl[2] * 0.1);
		}
		/*---------------------- Anti AirBreak ou Teleport -----------------*/
	    else if(!IsPlayerInRangeOfPoint(i, r_r, x, y, z)
		&& gettime() < ds_info[i][PLAYER_TIMER]
		&& ds_info[i][AGUARDO] < 1
		&& GetPlayerSurfingVehicleID(i) == 0xFFFF)
		{
		    if((GetPlayerState(i) == PLAYER_STATE_ONFOOT || GetPlayerState(i) == PLAYER_STATE_DRIVER))
		    {
				if(!IsPlayerInRangeOfPoint(i, 5.0,
				ds_info[i][Teleport_X], ds_info[i][Teleport_Y], ds_info[i][Teleport_Z]))
				{
					CallLocalFunction( "PlayerCheater" , "id", i , AirBreak_Teleport ) ;
				}
			}
		}
		ds_info[i][PLAYER_TIMER] 			= gettime()+2;
		ds_info[i][PLAYER_POS_X] 			= pX;
		ds_info[i][PLAYER_POS_Y] 			= pY;
		ds_info[i][PLAYER_POS_Z] 			= pZ;

		/*---------------------- Money Hack -------------------------------*/
		if(GetPlayerMoney(i) != ds_info[i][MONEY_PLAYER])
		{
			ResetPlayerMoney(i);
			GivePlayerMoney(i, ds_info[i][MONEY_PLAYER]);
		}
		/*---------------------- Armas Proibidas --------------------------*/
		switch(GetPlayerWeapon(i))
		{
	   		case 37, 44, 45, 9, 26, 18, 28, 32, 36, 38, 27, 22, 35, 39, 41:
	  		{
	  		    CallLocalFunction("PlayerCheater","id", i, Armas_Proibidas);
				SetPlayerArmedWeapon(i, 0);
			}
		}
		/*---------------------- Armour Hack/Health Hack------------------------------*/
		new Float:vida_colete;
		GetPlayerArmour(i, vida_colete);
		if(vida_colete > ds_info[i][Colete])
		{
			SetPlayerArmour(i, ds_info[i][Colete]);
			CallLocalFunction("PlayerCheater","id", i, Armour_Hack);
		}
		GetPlayerHealth(i, vida_colete);
		if(vida_colete > ds_info[i][cVida])
		{
			if(ds_info[i][cVida] > 0)
			{
				SetPlayerHealth(i, ds_info[i][cVida]);
				CallLocalFunction("PlayerCheater","id", i, Armour_Hack);
			}
		}
		/*---------------------- Weapon Hack ------------------------------*/
		new w, a;
		for(new we = 2; we < 8; we++)
		{
		    GetPlayerWeaponData(i, we, w, a);
			if(Slot_Weapon[i][we] !=w && (w>1&&w!=46) && a>0)
			{
				CallLocalFunction("PlayerCheater","id", i, Weapon_Hack);
	   			ab_ResetPlayerWeapons(i);
			}
		}
	}
	return true;
}

//-------------- CallBacks ----------------------------------------------------
public OnEnterExitModShop(playerid, enterexit, interiorid)
{
    ds_info[playerid][AGUARDO] = 5;
    return CallLocalFunction("ab_OnEnterExitModShop", "idd", playerid, enterexit, interiorid);
}

forward ab_OnEnterExitModShop(playerid, enterexit, interiorid);
public OnPlayerConnect(playerid)
{
    ResetPlayerMoney(playerid);
	ds_info[playerid][MONEY_PLAYER] = 0;
	ds_info[playerid][STATE_PLAYER] = 0;
	ds_info[playerid][FAKE_KILL_PLAYER] = 0;
    ds_info[playerid][cVida] = 100;
    SetPlayerHealth(playerid, 100);
    ds_info[playerid][Colete] = 100;
    SetPlayerArmour(playerid, 0);
	ab_ResetPlayerWeapons(playerid);
	return CallLocalFunction("ab_OnPlayerConnect", "i", playerid);
}
forward ab_OnPlayerConnect(playerid);

public OnPlayerSpawn(playerid)
{
    ds_info[playerid][STATE_PLAYER] = 0;
    ab_ResetPlayerWeapons(playerid);
    ds_info[playerid][AGUARDO] = 10;
    ds_info[playerid][cVida] = 100;
    SetPlayerHealth(playerid, 100);
    ds_info[playerid][Colete] = 100;
    SetPlayerArmour(playerid, 0);
	return CallLocalFunction("ab_OnPlayerSpawn", "i", playerid);
}
forward ab_OnPlayerSpawn(playerid);


public OnPlayerDeath(playerid, killerid, reason)
{
    /*----------------------- Fake Kill --------------------------------------*/
	ds_info[playerid][FAKE_KILL_PLAYER]++;
	if(ds_info[playerid][FAKE_KILL_PLAYER] > 2 )
	{
		CallLocalFunction("PlayerCheater","id", playerid, Fake_Kill);
		ds_info[playerid][FAKE_KILL_PLAYER] = 0 ;
		SendClientMessage(playerid, -1, "SERVER: Você foi banido deste servidor por suspeita de Fake Kill ou Crasher");
		BanEx(playerid, "Fake-Kill");
	}
	return CallLocalFunction("ab_OnPlayerDeath", "iid", playerid, killerid, reason);
}
forward ab_OnPlayerDeath(playerid, killerid, reason);

public OnPlayerStateChange(playerid, newstate, oldstate)
{
    /*----------------------- State Hack --------------------------------------*/
	ds_info[playerid][STATE_PLAYER]++;
	ds_info[playerid][AGUARDO] = 5;
	if(ds_info[playerid][STATE_PLAYER] >= 5)
	{
			CallLocalFunction("PlayerCheater","id", playerid, State_Hack);
			ds_info[playerid][STATE_PLAYER]=0;
			SendClientMessage(playerid, -1, "SERVER: Você foi banido deste servidor por suspeita de State Hack ou Crasher");
			BanEx(playerid, "State-Hack");
	}
	return CallLocalFunction("ab_OnPlayerStateChange", "idd", playerid, newstate, oldstate);
}
forward ab_OnPlayerStateChange(playerid, newstate, oldstate);


public OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
	if(GetPlayerState(playerid) == 1 && (newkeys & 2048 || newkeys & 4096))
	{
	    CallLocalFunction("PlayerCheater","id", playerid, Player_Joypad);
	}
	return CallLocalFunction("abb_OnPlayerKeyStateChange", "idd", playerid, newkeys, oldkeys);
}
forward abb_OnPlayerKeyStateChange(playerid, newkeys, oldkeys);


public OnPlayerText(playerid, text[]) // < Creditos Ips Team (DraKiNs e Paulor)
{
	new nums = 0, ponts = 0;
	for(new i; i < strlen(text); i++)
	{
		if(text[i] >= '0' && '9' >= text[i] || (text[i] == '.' || text[i] == ':'))
		{
			if(text[i] == '.' || text[i] == ':')
			{
				ponts++;
			}
			else
			{
				nums++;
			}
			if(nums >= 8 && ponts >= 3)
			{
				CallLocalFunction("PlayerCheater","ids", playerid, Player_Divulguer, text);
				SendClientMessage(playerid, -1, "{00EAF6}ANTICHEAT:{FFFFFF} Você foi acusado:{00EAF6} (Divulgando IP)");
				return 0;
			}
		}
	}
	if(!strlen(text))return false;// < evitando um crasher do s0beit
	return CallLocalFunction("ab_OnPlayerText", "is", playerid, text);
}
forward ab_OnPlayerText(playerid, text[]);
//------------------------------------------------------------------------------

//PutPlayerInVehicle
Cheat:ab_PutPlayerInVehicle(playerid, vehicleid, seatid)
{
	new Float:x, Float:y, Float:z;
	GetVehiclePos(vehicleid, x, y, z);
    ds_info[playerid][AGUARDO] = 5;
    
	ds_info[playerid][Teleport_X] = x;
	ds_info[playerid][Teleport_Y] = y;
	ds_info[playerid][Teleport_Z] = z;
	return PutPlayerInVehicle(playerid, vehicleid, seatid);
}

stock PlayerVelocidade(playerid)
{
	static Float:posS[3] ;
	GetPlayerVelocity(playerid,posS[0],posS[1],posS[2]);
	return floatround(floatmul(floatsqroot(floatadd(floatpower(posS[0],2),floatpower(posS[1],2))),170.0));
}

PlayerVehicleSpeed(playerid)
{
	static Float:Spd[3];
	
	GetVehicleVelocity(GetPlayerVehicleID(playerid),Spd[0],Spd[1],Spd[2]);
	return floatround(floatmul(floatsqroot(floatadd(floatpower(Spd[0],2),floatpower(Spd[1],2))),170.0));
}


//-------- MONEY ------------
Cheat:ab_GetPlayerMoney(playerid)
{
	return ds_info[playerid][MONEY_PLAYER];
}
Cheat:ab_GivePlayerMoney(playerid, money)
{
	ds_info[playerid][MONEY_PLAYER] = ds_info[playerid][MONEY_PLAYER]+=money;
	return true;
}
Cheat:ab_ResetPlayerMoney(playerid)
{
	return ds_info[playerid][MONEY_PLAYER] = 0;
}

//-------- COLETE/VIDA ---------
Cheat:ab_SetPlayerArmour(playerid, Float:armour)
{
	return ds_info[playerid][Colete] = armour, SetPlayerArmour(playerid, armour);
}
Cheat:ab_SetPlayerHealth(playerid, Float:health)
{
	ds_info[playerid][cVida] = health;
	if(health < 1)ds_info[playerid][cVida] = 100;
	return SetPlayerHealth(playerid, health);
}

stock ArmaSlot(armaid)
{
	switch(armaid)
	{
	    case 0, 1:		return 0;
	    case 2..9:		return 1;
	    case 22..24:	return 2;
	    case 25..27:	return 3;
	    case 28,29,32:	return 4;
	    case 30,31:		return 5;
	    case 33,34:		return 6;
	    case 35..38:	return 7;
	    case 16..18,39:	return 8;
	    case 41..43:	return 9;
	    case 10..15:	return 10;
	    case 44..46:	return 11;
	    case 40:		return 12;
	}
	return -1;
}

Cheat:ab_GivePlayerWeapon(playerid, weaponid, ammo)
{
    Slot_Weapon[playerid][ArmaSlot(weaponid)] = weaponid;
	GivePlayerWeapon(playerid, weaponid, ammo);
	return true;
}
Cheat:ab_ResetPlayerWeapons(playerid)
{
    ResetPlayerWeapons(playerid);
    Slot_Weapon[playerid][0] = 0;
    Slot_Weapon[playerid][1] = 0;
    Slot_Weapon[playerid][2] = 0;
    Slot_Weapon[playerid][3] = 0;
    Slot_Weapon[playerid][4] = 0;
    Slot_Weapon[playerid][5] = 0;
    Slot_Weapon[playerid][6] = 0;
    Slot_Weapon[playerid][7] = 0;
    Slot_Weapon[playerid][8] = 0;
    Slot_Weapon[playerid][9] = 0;
    Slot_Weapon[playerid][10] = 0;
    Slot_Weapon[playerid][11] = 0;
    Slot_Weapon[playerid][12] = 0;
	return true;
}




//-------------- FLY- Anim-------------
Cheat:CheckAnim(playerid)
{
	new animation = GetPlayerAnimationIndex(playerid);
	if(animation == 1539 || animation == 1538 || animation == 1543)
	    return true;
	return 0;
}

//--------------- SetPlayerPos ----------
Cheat:ab_SetPlayerPos(playerid, Float:px, Float:py, Float:pz)
{
	ds_info[playerid][AGUARDO] = 6;
	
	ds_info[playerid][PLAYER_POS_X] = px;
	ds_info[playerid][PLAYER_POS_Y] = py;
	ds_info[playerid][PLAYER_POS_Z] = pz;
	
	ds_info[playerid][Teleport_X] = px;
	ds_info[playerid][Teleport_Y] = py;
	ds_info[playerid][Teleport_Z] = pz;
	return SetPlayerPos(playerid, px, py, pz);
}

Cheat:ab_SetVehiclePos(vehicleid, Float:x, Float:y, Float:z)
{
	foreach(Player, i)
	{
	    if(IsPlayerInAnyVehicle(i) && GetPlayerVehicleID(i) == vehicleid)
	    {
			ds_info[i][AGUARDO] = 6;
			
			ds_info[i][Teleport_X] = x;
			ds_info[i][Teleport_Y] = y;
			ds_info[i][Teleport_Z] = z;
		}
	}
	return SetVehiclePos(vehicleid, x, y, z);
}
	    
#if defined _ALS_OnGameModeInit
    #undef OnGameModeInit
#else
    #define _ALS_OnGameModeInit
#endif
#define OnGameModeInit ab_OnGameModeInit
	    
#if defined _ALS_OnPlayerSpawn
    #undef OnPlayerSpawn
#else
    #define _ALS_OnPlayerSpawn
#endif
#define OnPlayerSpawn ab_OnPlayerSpawn

#if defined _ALS_OnPlayerStateChange
    #undef OnPlayerStateChange
#else
    #define _ALS_OnPlayerStateChange
#endif
#define OnPlayerStateChange ab_OnPlayerStateChange

#if defined _ALS_OnPlayerConnect
    #undef OnPlayerConnect
#else
    #define _ALS_OnPlayerConnect
#endif
#define OnPlayerConnect ab_OnPlayerConnect

#if defined _ALS_OnPlayerDeath
    #undef OnPlayerDeath
#else
    #define _ALS_OnPlayerDeath
#endif
#define OnPlayerDeath ab_OnPlayerDeath

#if defined _ALS_OnEnterExitModShop
    #undef OnEnterExitModShop
#else
    #define _ALS_OnEnterExitModShop
#endif
#define OnEnterExitModShop ab_OnEnterExitModShop
#if defined _ALS_OnPlayerText
    #undef OnPlayerText
#else
    #define _ALS_OnPlayerText
#endif
#define OnPlayerText ab_OnPlayerText
#if defined _ALS_OnPlayerKeyStateChange
    #undef OnPlayerKeyStateChange
#else
    #define _ALS_OnPlayerKeyStateChange
#endif
#define OnPlayerKeyStateChange abb_OnPlayerKeyStateChange

#define SetPlayerPos    				ab_SetPlayerPos
#define SetVehiclePos    				ab_SetVehiclePos
#define PutPlayerInVehicle              ab_PutPlayerInVehicle
#define GivePlayerMoney                 ab_GivePlayerMoney
#define GetPlayerMoney                 	ab_GetPlayerMoney
#define ResetPlayerMoney                ab_ResetPlayerMoney
#define ResetPlayerWeapons              ab_ResetPlayerWeapons
#define GivePlayerWeapon                ab_GivePlayerWeapon

#if defined _ALS_SetPlayerArmour
	#undef SetPlayerArmour
#else
	#define _ALS_SetPlayerArmour
#endif

#define SetPlayerArmour                 ab_SetPlayerArmour

#if defined _ALS_SetPlayerHealth
	#undef SetPlayerHealth
#else
	#define _ALS_SetPlayerHealth
#endif

#define SetPlayerHealth                 ab_SetPlayerHealth

forward PlayerCheater(playerid, cheater, descricao[]);
