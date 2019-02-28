
new StyleWalk[MAX_PLAYERS];

public OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
	if(GetPlayerState(playerid)==1&&GK(playerid,KEY_WALK))SetTimerEx("UpdateAnim", 300, 0, "i", playerid);
	return CallLocalFunction("walk_OnPlayerKeyStateChange", "ddd", playerid, newkeys, oldkeys);
}
#if defined _ALS_OnPlayerKeyStateChange
    #undef OnPlayerKeyStateChange
#else
    #define _ALS_OnPlayerKeyStateChange
#endif
#define OnPlayerKeyStateChange walk_OnPlayerKeyStateChange
forward walk_OnPlayerKeyStateChange(playerid, newkeys, oldkeys);

forward UpdateAnim(playerid);
public UpdateAnim(playerid)
{
   	if(GetPlayerState(playerid)==1&&(GK(playerid,KEY_UP)||GK(playerid,KEY_DOWN)||GK(playerid,KEY_LEFT)||GK(playerid,KEY_RIGHT))&&GK(playerid,KEY_WALK))
	{
	    SetTimerEx("UpdateAnim", 380, 0, "i", playerid);
	    AplicarWalk(playerid);
	}
   	else if(GK(playerid,KEY_WALK) && GetPlayerState(playerid)==1)SetTimerEx("UpdateAnim", 500, 0, "i", playerid);
	else ApplyAnimation(playerid,"PED","facgum",1.9,0,1,1,1,1);
	return 0xFFFF;
}
stock AplicarWalk(playerid)
{
	switch(StyleWalk[playerid])
	{
    	case 1:ApplyAnimation(playerid,"PED","WALK_civi",4.1,1,1,1,1,1);
    	case 2:ApplyAnimation(playerid,"PED","WALK_gang1",4.1,1,1,1,1,1);
    	case 3:ApplyAnimation(playerid,"PED","WALK_gang2",4.1,1,1,1,1,1);
    	case 4:ApplyAnimation(playerid,"PED","WALK_old",4.1,1,1,1,1,1);
    	case 5:ApplyAnimation(playerid,"PED","WALK_fatold",4.1,1,1,1,1,1);
    	case 6:ApplyAnimation(playerid,"PED","WALK_fat",4.1,1,1,1,1,1);
    	case 7:ApplyAnimation(playerid,"PED","WOMAN_walknorm",4.1,1,1,1,1,1);
    	case 8:ApplyAnimation(playerid,"PED","WOMAN_walkbusy",4.1,1,1,1,1,1);
    	case 9:ApplyAnimation(playerid,"PED","WOMAN_walkpro",4.1,1,1,1,1,1);
    	case 10:ApplyAnimation(playerid,"PED","WOMAN_walksexy",4.1,1,1,1,1,1);
    	case 11:ApplyAnimation(playerid,"PED","WALK_drunk",4.1,1,1,1,1,1);
    	case 12:ApplyAnimation(playerid,"PED","Walk_Wuzi",4.1,1,1,1,1,1);
    	case 13:ApplyAnimation(playerid,"PED","Player_Sneak",6.1,1,1,1,1,1);
    	case 14:ApplyAnimation(playerid,"PED","WOMAN_walkshop",4.1,1,1,1,1,1);
    	case 15:ApplyAnimation(playerid,"PED","JOG_femaleA",4.1,1,1,1,1,1);
    	case 16:ApplyAnimation(playerid,"PED","JOG_maleA",4.1,1,1,1,1,1);
    	case 17:ApplyAnimation(playerid,"PED","run_civi",4.1,1,1,1,1,1);
    	case 18:ApplyAnimation(playerid,"PED","run_fat",4.1,1,1,1,1,1);
    	case 19:ApplyAnimation(playerid,"PED","run_fatold",4.1,1,1,1,1,1);
    	case 20:ApplyAnimation(playerid,"PED","run_gang1",4.1,1,1,1,1,1);
    	case 21:ApplyAnimation(playerid,"PED","run_old",4.1,1,1,1,1,1);
    	case 22:ApplyAnimation(playerid,"PED","Run_Wuzi",4.1,1,1,1,1,1);
    	case 23:ApplyAnimation(playerid,"PED","swat_run",4.1,1,1,1,1,1);
    	case 24:ApplyAnimation(playerid,"PED","woman_run",4.1,1,1,1,1,1);
    	case 25:ApplyAnimation(playerid,"PED","WOMAN_runbusy",4.1,1,1,1,1,1);
    	case 26:ApplyAnimation(playerid,"PED","WOMAN_runsexy",4.1,1,1,1,1,1);
	}
	return 0xFFFF;
}
stock SetWalkStyle(playerid, style)
{
	if(style < 1 || style > 26){print("\n[BGL]: #ERRO: Estilo de andar entre (1 - 26)\n");return true;}

	StyleWalk[playerid] = style;

	return 0;
}
stock GetWalkStyle(playerid)return StyleWalk[playerid];
stock ResetWalkStyle(playerid)return StyleWalk[playerid] = 0;

stock GetNameWalk(walkid)
{
	new walkname[18];
	switch(walkid)
	{
    	case 1:walkname = "Walk Civi";
    	case 2:walkname = "Walk Gang1";
    	case 3:walkname = "Walk Gang2";
    	case 4:walkname = "Walk Old";
    	case 5:walkname = "Walk Fatold";
    	case 6:walkname = "Walk Fat";
    	case 7:walkname = "Woman Walknorm";
    	case 8:walkname = "Woman Walkbusy";
    	case 9:walkname = "Woman Walkpro";
    	case 10:walkname = "Woman Walksexy";
    	case 11:walkname = "Walk Drunk";
    	case 12:walkname = "Walk Wuzi";
    	case 13:walkname = "Player Sneak";
    	case 14:walkname = "Woman Walkshop";
    	default:walkname = "NONE";
	}
	return walkname;
}

stock GK(playerid, key)
{
	new keys, ud, lr;
	GetPlayerKeys(playerid, keys, ud, lr);
	if(keys == key || ud == key || lr == key)return true;
	return 0;
}





