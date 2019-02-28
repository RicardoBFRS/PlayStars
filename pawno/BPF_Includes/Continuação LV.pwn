//Feito por Info_Inside


#if defined _Inventory_included
	#endinput
#endif
#define _Inventory_included
#define MAX_ITEMS                   49

new TipoItem[MAX_PLAYERS],IDw[MAX_PLAYERS];
new ItemID[MAX_PLAYERS][MAX_ITEMS];
new ArmasGuardadas[MAX_PLAYERS][MAX_ITEMS];
new BalasGuardadas[MAX_PLAYERS][MAX_ITEMS];
new InvCheio[MAX_PLAYERS] = 0;

descartarItem(playerid,idx){

    if(IsAItem(playerid,ItemID[playerid][idx],0))
    {
		new Float: pOs[3];
		GetPlayerPos(playerid, pOs[0], pOs[1], pOs[2]);

		   CreateDroppedItem(ItemID[playerid][idx], pOs[0], pOs[1], pOs[2]);

		new buffer[85];

		format(buffer, sizeof(buffer), "Você largou um(a) %s.", NomeItem(playerid,TipoItem[playerid]));
		SendClientMessage(playerid, 0x33AA3300, buffer);

		format(buffer, sizeof(buffer), "* %s colocou um(a) %s no chão.", NomePlayer(playerid), NomeItem(playerid,TipoItem[playerid]));
		SendClientMessageInRange(30.0, playerid, buffer, COLOR_PURPLE,COLOR_PURPLE,COLOR_PURPLE,COLOR_PURPLE,COLOR_PURPLE);
		printf("%s", buffer);

	    ApplyAnimation(playerid,"BOMBER","BOM_Plant_2Idle",4.1,0,1,1,0,0);

	    ItemID[playerid][idx] = 0;
	}
}
stock equiparitem(playerid,IDitem)
{
	new skin,count,id;
	skin = GetPlayerSkin(playerid);
	do
	{
	    if(skin == invalidskins[count]) return SendClientMessage(playerid, 0xFFFFFFAA, "Erro: Sua skin não suporta o uso de Itens.");
	    count++;
	}
	while(count < sizeof invalidskins);
	if(skin < 0) skin = 0;
    switch(TipoItem[playerid])
		{
		    case 1:
		    {
		    }
		    case 2:
		    {
		        SendClientMessage(playerid, COLOR_GRAD4, "Voce Trocou seu Telefone.");
                PlayerInfo[playerid][pTelColor] = IDitem;
		    }
		    case 3://touca natal
		    {
		            RemovePlayerAttachedObjectEx(playerid, Vaga_Bone);
		            id = CountAttachedObjects(playerid);
					SetPlayerAttachedObject(playerid, id, IDitem, 2, 0.120000, 0.040000, -0.003500, 0, 100, 100, 1.5, 1.5, 1.5);
				    SetPlayerAttachedObjectEx(Vaga_Bone,playerid,id);
		    }
		    case 4,5,8://toucas bandana bone
		    {
		            RemovePlayerAttachedObjectEx(playerid, Vaga_Bone);
		            id = CountAttachedObjects(playerid);
					SetPlayerAttachedObject(playerid, id, IDitem, 2, SkinOffSet2[skin][0], SkinOffSet2[skin][1], SkinOffSet2[skin][2], SkinOffSet2[skin][3], SkinOffSet2[skin][4], SkinOffSet2[skin][5], 1.1, 1.1, 1.1);
        			SetPlayerAttachedObjectEx(Vaga_Bone,playerid,id);
		    }
		    case 6,7://oculos,tapa olho
		    {
		            RemovePlayerAttachedObjectEx(playerid, Vaga_Oculos);
		            id = CountAttachedObjects(playerid);
					SetPlayerAttachedObject(playerid, id, IDitem, 2, SkinOffSet[skin][0], floatadd(SkinOffSet[skin][1], 0.004500), SkinOffSet[skin][2], SkinOffSet[skin][3], SkinOffSet[skin][4], SkinOffSet[skin][5], 1.1, 1.1, 1.1);
			        SetPlayerAttachedObjectEx(Vaga_Oculos,playerid,id);
		    }
		    case 9,10,11,12: //capacete chapeu cawboi
		    {
		            RemovePlayerAttachedObjectEx(playerid, Vaga_Capacete);
		            id = CountAttachedObjects(playerid);
					SetPlayerAttachedObject(playerid, id, IDitem, 2, 0.101, -0.0, 0.0, 5.50, 84.60, 83.7, 1, 1, 1);
					SetPlayerAttachedObjectEx(Vaga_Capacete,playerid,id);
		    }
		    case 13: //especiais
		    {
		            RemovePlayerAttachedObjectEx(playerid, Vaga_Especial);
		            id = CountAttachedObjects(playerid);
					SetPlayerAttachedObject(playerid, id, IDitem, 2, 0.101, -0.0, 0.0, 5.50, 84.60, 83.7, 1, 1, 1);
					SetPlayerAttachedObjectEx(Vaga_Especial,playerid,id);
		    }
		    default: SendClientMessage(playerid, COLOR_GRAD4, "Este Item nao pode Ser Editado/usado.");
		}
	return 0;
}
static stock NomeItem(playerid,Tipo)
{
    new name[35];
    switch(Tipo)
	{
	    case 1:GetWeaponName(IDw[playerid], name, sizeof name);
	    case 2:name = "Telefone";
	    case 3:name = "Gorro de Natal";
	    case 4:name = "Touca";
	    case 5:name = "Bandana";
	    case 6:name = "Oculos";
	    case 7:name = "Tapa Olho";
	    case 8:name = "Bone";
	    case 9:name = "Chapeu Formal";
	    case 10:name = "Chapeu de Cawboi";
	    case 11:name = "Capacete de Soldado";
	    case 12:name = "Chapeu Normal";
	    case 13:name = "Raridade";
	    //case 14:name = "Explosivo";
	    default:name = "Desconhecido";
	}
	return name;
}
stock SlotdoItem(playerid,slotid)
{
	new gstring[128];
	switch(ItemSlotP[playerid][slotid])
	{
		case 0:gstring = "ArmaPesada";
		case 1:gstring = "Escopeta";
		case 2:gstring = "Cacetete";
		case 3:gstring = "Desert Eagle";
		case 4:gstring = "Extintor";
		case 5:gstring = "Sniper";
		case 6:gstring = "Bolsa de Dinheiro";
		case 7:gstring = "Pizza";
		case 8:gstring = "Maconha";
		case 9:gstring = "Pa";
		case 10:gstring = "Radio";
		case 11:gstring = "Celular";
		case 12:gstring = "Oculos";
		case 13:gstring = "Bone";
		case 14:gstring = "Especial";
		case 15:gstring = "Movel";
		case 16:gstring = "Escudo";
		case 17:gstring = "Capacete";
		case 18:gstring = "Planta";
		case 19:gstring = "Bandana";
		case 20:gstring = "Aureola1";
		case 21:gstring = "Aureola2";
		case 22:gstring = "Algema";
		default:gstring ="Desconhecido";
	}
	return gstring;
}
stock NomeItemID(itemID)
{
	new name[35];
	switch(itemID)
	{
	    case 1..47:GetWeaponName(itemID, name, sizeof name);
	    //case 1252:name = "Explosivo";
	    case 18865..18874:name = "Telefone";
		case 19064..19066:name = "Gorro de Natal";
		case 19067..19069:name = "Touca";
		case 18891..18920:name = "Bandana";
		case 19138..19140,19006..19035:name = "Oculos";
		case 19085:name = "Tapa Olho";
		case 19093,18955..18961,18939..18943,18926..18935:name = "Bone";
		case 18944..18951:name = "Chapeu Formal";
		case 19095..19100,18970..18973:name = "Chapeu de Cawboi";
		case 19101..19105:name = "Capacete de Soldado";
		case 19106..19120,19352,18964..18969:name = "Chapeu Normal";
		case 19137,19077,19160..19163,19274,19314,19469,19487,19488 //mascaras especiais/peruca/2chapeis/mascara preta/precuca bozo/Chifre corno/faixa branca cabeça
	       ,19520,19521,18975,18974:name = "Raridade";//quepe policial 2/peruca/mascara zorro/
        default:name = "Desconhecido";
	}
	return name;
}
/*bombanamochila(playerid)
{
    if(PlayerInfo[playerid][pExplosivos] >= 5) SendClientMessage(playerid, COLOR_GRAD4, "Voce só pode ter 5 Unidades deste Item.");
    if(PlayerInfo[playerid][pExplosivos] <= 4)
	{
	    new x=0,y=0;
	    while(x != MAX_ITEMS)
		{
		    if(ItemID[playerid][x] == 1252)
			{
			    PlayerInfo[playerid][pExplosivos]++;
			    y=1;
			    break;
			}
			x++;
		}
		if(y == 0)
		{
	 		while(x != MAX_ITEMS)
			{
			    if(ArmasGuardadas[playerid][x] < 1 && ItemID[playerid][x] == 0)
				{
				    ItemID[playerid][x] = 1252;
				    PlayerInfo[playerid][pExplosivos]++;
				    break;
				}
				if(x == MAX_ITEMS-1)
				{
				    InvCheio[playerid] = 1;
				    SendClientMessage(playerid, COLOR_GRAD4, "Seu Inventário está cheio.Não pode receber o item.");
				}
				x++;
			}
		}
	}
}*/
itemnamochila(playerid,itemid)
{
		new x=0;
 		while(x != MAX_ITEMS)
		{
		    if(ArmasGuardadas[playerid][x] == 0 && ItemID[playerid][x] == 0)
			{
			    ItemID[playerid][x] = itemid;
			    break;
			}
			if(x == MAX_ITEMS-1)
			{
			    InvCheio[playerid] = 1;
			    SendClientMessage(playerid, COLOR_GRAD4, "Seu Inventário está cheio.Não pode receber o item.");
			}
			x++;
		}
}
stock IsAItem(playerid,itemID,caso)
{
	if(caso == 0)
	{
		switch(itemID)
		{
		    case 1..47: { TipoItem[playerid] = 1; IDw[playerid] = itemID; return 1; }
		    case 18865..18874: { TipoItem[playerid] = 2; return 1; }//telefones
			case 19064..19066: { TipoItem[playerid] = 3; return 1; }//toucas natal
			case 19067..19069: { TipoItem[playerid] = 4; return 1; }//toucas gangsters
			case 18891..18920: { TipoItem[playerid] = 5; return 1; }//bandana tipo gang
			case 19138..19140,19006..19035: { TipoItem[playerid] = 6; return 1; }//oculos
			case 19085: { TipoItem[playerid] = 7; return 1; }//tapa olho
			case 19093,18955..18961,18939..18943,18926..18935: { TipoItem[playerid] = 8; return 1; }//boné
			case 18944..18951: { TipoItem[playerid] = 9; return 1; }//chapeu formal
			case 19095..19100,18970..18973: { TipoItem[playerid] = 10; return 1; }//chapeu tipo cawboi
			case 19101..19105: { TipoItem[playerid] = 11; return 1; }//capacete soldado
			case 19106..19120,19352,18964..18969: { TipoItem[playerid] = 12; return 1; }//chapeu tipo normal
			case 19137,19077,19160..19163,19274,19314,19469,19487,19488 //mascaras especiais/peruca/2chapeis/mascara preta/precuca bozo/Chifre corno/faixa branca cabeça
	        ,19520,19521,18975,18974: { TipoItem[playerid] = 13; return 1; }//quepe policial 2/peruca/mascara zorro/
	        case 1252: { TipoItem[playerid] = 14; return 1; }
		}
		return 0;
	}
	return 0;
}
