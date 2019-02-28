/*
								seif_walk - Walking styles by Seif
*/
/*x---------------------------------Important-------------------------------------x*/
/*x---------------------------------Defining-------------------------------------x*/
//**DEFINES**//
#define WALK_DEFAULT    0
#define WALK_NORMAL     1
#define WALK_PED        2
#define WALK_GANGSTA    3
#define WALK_GANGSTA2   4
#define WALK_OLD        5
#define WALK_FAT_OLD    6
#define WALK_FAT        7
#define WALK_LADY      	8
#define WALK_LADY2      9
#define WALK_WHORE      10
#define WALK_WHORE2     11
#define WALK_DRUNK     	12
#define WALK_BLIND     	13
#define WALK_SILENCED   14
#define WALK_LOC   	15
#define WALK_1   	16
#define WALK_2   	17
#define WALK_3   	18
#define WALK_4   	19
#define WALK_5    	20
#define WALK_6    	21
#define WALK_7    	22
#define WALK_8    	23
#define WALK_9    	24
#define WALK_10    	25
#define WALK_11    	26
#define WALK_12    	27
//**VARIABLES**//
new walktime[MAX_PLAYERS];
new WalkStyle[MAX_PLAYERS];
//**NATIVES**//
/*
	native SetPlayerWalkingStyle(playerid, style)
	native GetPlayerWalkingStyle(playerid)
*/
/*x---------------------------------CallBacks-------------------------------------x*/

stock SetPlayerWalkingStyle(playerid, style)
{
	WalkStyle[playerid] = style;
}

stock GetPlayerWalkingStyle(playerid)
{
	return WalkStyle[playerid];
}
