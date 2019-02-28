

new 
	Float:ALSS_Health[MAX_PLAYERS] = {100.0, ...},
	Float:ALSS_Armour[MAX_PLAYERS],
	ALSS_Killer[MAX_PLAYERS] = {INVALID_PLAYER_ID, ...},
	ALSS_KillerReason[MAX_PLAYERS] = {54, ...};

public OnPlayerConnect(playerid)
{
	ALSS_Health[playerid] = 100.0;
	ALSS_Armour[playerid] = 0.0;
	return CallLocalFunction("ALSS_OnPlayerConnect", "i", playerid);
}
forward ALSS_OnPlayerConnect(playerid);
public OnPlayerSpawn(playerid)
{
	ALSS_Health[playerid] = 100.0;
	SetPlayerArmour(playerid, 0.0);
	SetPlayerTeam(playerid, 1);
	return CallLocalFunction("ALSS_OnPlayerSpawn", "i", playerid);
}
forward ALSS_OnPlayerSpawn(playerid);

public OnPlayerDeath(playerid, killerid, reason)
{
	new tkillerid = ALSS_Killer[playerid];
	if(tkillerid != INVALID_PLAYER_ID)
	{
		killerid = tkillerid;
		reason = ALSS_KillerReason[playerid];
		ALSS_Killer[playerid] = INVALID_PLAYER_ID;
		ALSS_KillerReason[playerid] = 0;
	}
	return CallLocalFunction("ALSS_OnPlayerDeath", "iii", playerid, killerid, reason);
}

forward ALSS_OnPlayerDeath(playerid, killerid, reason);
public OnPlayerGiveDamage(playerid, damagedid, Float:amount, weaponid, bodypart)
{
	if(damagedid != INVALID_PLAYER_ID)
	{
	   	GetPlayerHealth(damagedid, ALSS_Health[damagedid]);
	    GetPlayerArmour(damagedid, ALSS_Armour[damagedid]);
	    
		new
		Float:ALSS_pHp = ALSS_Health[damagedid],
		Float:ALSS_pArmour = ALSS_Armour[damagedid];
		if(ALSS_pArmour-amount < 0.1)
		{
			SetPlayerArmour(damagedid, 0.0);
			if(ALSS_pHp-(ALSS_pArmour-amount) < 0.1)
			{
				if(ALSS_Killer[damagedid] == INVALID_PLAYER_ID)
				{
					ALSS_Killer[damagedid] = playerid;
					ALSS_KillerReason[damagedid] = weaponid;
				}
				SetPlayerHealth(damagedid, 0.0);
			}
			else SetPlayerHealth(damagedid, ALSS_pHp-(ALSS_pArmour-amount));
		}
		else SetPlayerArmour(damagedid, ALSS_pArmour-amount);
	}
	return CallLocalFunction("ALSS_OnPlayerGiveDamage", "iifi", playerid, damagedid, amount, weaponid, bodypart);
}
forward ALSS_OnPlayerGiveDamage(playerid, damagedid, Float:amount, weaponid, bodypart);

#if defined _ALS_OnPlayerGiveDamage
	#undef OnPlayerGiveDamage
#else
	#define _ALS_OnPlayerGiveDamage
#endif
#define OnPlayerGiveDamage ALSS_OnPlayerGiveDamage

#if defined _ALS_OnPlayerConnect
	#undef OnPlayerConnect
#else
	#define _ALS_OnPlayerConnect
#endif
#define OnPlayerConnect ALSS_OnPlayerConnect

#if defined _ALS_OnPlayerSpawn
	#undef OnPlayerSpawn
#else
	#define _ALS_OnPlayerSpawn
#endif
#define OnPlayerSpawn ALSS_OnPlayerSpawn

#if defined _ALS_OnPlayerDeath
	#undef OnPlayerDeath
#else
	#define _ALS_OnPlayerDeath
#endif
#define OnPlayerDeath ALSS_OnPlayerDeath


