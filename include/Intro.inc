//Feito por Info_Inside


#if defined _Intro_included
	#endinput
#endif
#define _Intro_included

	new PlayerText:BoxLogin1[MAX_PLAYERS];
	new PlayerText:BoxLogin2[MAX_PLAYERS];
	new PlayerText:BotLogin[MAX_PLAYERS];
	new PlayerText:BoxSist1[MAX_PLAYERS];
	new PlayerText:BoxSist2[MAX_PLAYERS];
	new PlayerText:BotSist[MAX_PLAYERS];
	new PlayerText:BoxUpdate1[MAX_PLAYERS];
	new PlayerText:BoxUpdate2[MAX_PLAYERS];
	new PlayerText:BotUpdate[MAX_PLAYERS];
	new PlayerText:TextUpdt[MAX_PLAYERS];
	new PlayerText:MsgUpdt[MAX_PLAYERS];
	new PlayerText:NickReg[MAX_PLAYERS];
	new PlayerText:ClockRoubo[MAX_PLAYERS];
	new PlayerText:BoxRoubo[MAX_PLAYERS];
	new PlayerText:TempoRoubo[MAX_PLAYERS];

stock Criarintro(playerid) {

	BoxLogin1[playerid] = CreatePlayerTextDraw(playerid, 51.744033, 332.166687, "ld_poke:cd2c");
	PlayerTextDrawLetterSize(playerid, BoxLogin1[playerid], 0.499998, 0.352499);
	PlayerTextDrawTextSize(playerid, BoxLogin1[playerid], 67.931198, 25.916652);
	PlayerTextDrawAlignment(playerid, BoxLogin1[playerid], 1);
	PlayerTextDrawColor(playerid, BoxLogin1[playerid], 100);
	PlayerTextDrawUseBox(playerid, BoxLogin1[playerid], true);
	PlayerTextDrawBoxColor(playerid, BoxLogin1[playerid], 100);
	PlayerTextDrawSetShadow(playerid, BoxLogin1[playerid], 0);
	PlayerTextDrawSetOutline(playerid, BoxLogin1[playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, BoxLogin1[playerid], 65535);
	PlayerTextDrawFont(playerid, BoxLogin1[playerid], 4);
	PlayerTextDrawSetProportional(playerid, BoxLogin1[playerid], 1);

	BoxLogin2[playerid] = CreatePlayerTextDraw(playerid, 49.869949, 331.000030, "ld_poke:cd2c");
	PlayerTextDrawLetterSize(playerid, BoxLogin2[playerid], 0.499998, 0.352499);
	PlayerTextDrawTextSize(playerid, BoxLogin2[playerid], 66.994155, 24.166654);
	PlayerTextDrawAlignment(playerid, BoxLogin2[playerid], 1);
	PlayerTextDrawColor(playerid, BoxLogin2[playerid], 41215);
	PlayerTextDrawUseBox(playerid, BoxLogin2[playerid], true);
	PlayerTextDrawBoxColor(playerid, BoxLogin2[playerid], 255);
	PlayerTextDrawSetShadow(playerid, BoxLogin2[playerid], 0);
	PlayerTextDrawSetOutline(playerid, BoxLogin2[playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, BoxLogin2[playerid], -1);
	PlayerTextDrawFont(playerid, BoxLogin2[playerid], 4);
	PlayerTextDrawSetProportional(playerid, BoxLogin2[playerid], 1);

	BotLogin[playerid] = CreatePlayerTextDraw(playerid, 53.879924, 334.249938, "Logar/Registrar");
	PlayerTextDrawLetterSize(playerid, BotLogin[playerid], 0.236817, 1.786666);
	PlayerTextDrawTextSize(playerid, BotLogin[playerid], 110.571411, 11.949979);
	PlayerTextDrawAlignment(playerid, BotLogin[playerid], 1);
	PlayerTextDrawColor(playerid, BotLogin[playerid], -1);
	PlayerTextDrawUseBox(playerid, BotLogin[playerid], true);
	PlayerTextDrawBoxColor(playerid, BotLogin[playerid], 41215);
	PlayerTextDrawSetShadow(playerid, BotLogin[playerid], 1);
	PlayerTextDrawSetOutline(playerid, BotLogin[playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, BotLogin[playerid], 255);
	PlayerTextDrawFont(playerid, BotLogin[playerid], 1);
	PlayerTextDrawSetProportional(playerid, BotLogin[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, BotLogin[playerid], true);

	BoxSist1[playerid] = CreatePlayerTextDraw(playerid, 48.932907, 366.583465, "ld_poke:cd2c");
	PlayerTextDrawLetterSize(playerid, BoxSist1[playerid], 0.526705, 0.591665);
	PlayerTextDrawTextSize(playerid, BoxSist1[playerid], 69.805282, 27.666650);
	PlayerTextDrawAlignment(playerid, BoxSist1[playerid], 1);
	PlayerTextDrawColor(playerid, BoxSist1[playerid], 100);
	PlayerTextDrawUseBox(playerid, BoxSist1[playerid], true);
	PlayerTextDrawBoxColor(playerid, BoxSist1[playerid], 255);
	PlayerTextDrawSetShadow(playerid, BoxSist1[playerid], 0);
	PlayerTextDrawSetOutline(playerid, BoxSist1[playerid], 93);
	PlayerTextDrawBackgroundColor(playerid, BoxSist1[playerid], -5963521);
	PlayerTextDrawFont(playerid, BoxSist1[playerid], 4);
	PlayerTextDrawSetProportional(playerid, BoxSist1[playerid], 1);

	BoxSist2[playerid] = CreatePlayerTextDraw(playerid, 48.932907, 366.583465, "ld_poke:cd2c");
	PlayerTextDrawLetterSize(playerid, BoxSist2[playerid], 0.526705, 0.591665);
	PlayerTextDrawTextSize(playerid, BoxSist2[playerid], 66.994155, 24.166654);
	PlayerTextDrawAlignment(playerid, BoxSist2[playerid], 1);
	PlayerTextDrawColor(playerid, BoxSist2[playerid], 41215);
	PlayerTextDrawUseBox(playerid, BoxSist2[playerid], true);
	PlayerTextDrawBoxColor(playerid, BoxSist2[playerid], 255);
	PlayerTextDrawSetShadow(playerid, BoxSist2[playerid], 0);
	PlayerTextDrawSetOutline(playerid, BoxSist2[playerid], 93);
	PlayerTextDrawBackgroundColor(playerid, BoxSist2[playerid], -5963521);
	PlayerTextDrawFont(playerid, BoxSist2[playerid], 4);
	PlayerTextDrawSetProportional(playerid, BoxSist2[playerid], 1);

	BotSist[playerid] = CreatePlayerTextDraw(playerid, 54.348445, 369.833526, "Sistemas");
	PlayerTextDrawLetterSize(playerid, BotSist[playerid], 0.361447, 1.821666);
	PlayerTextDrawTextSize(playerid, BotSist[playerid], 112.445495, 11.949979);
	PlayerTextDrawAlignment(playerid, BotSist[playerid], 1);
	PlayerTextDrawColor(playerid, BotSist[playerid], -1);
	PlayerTextDrawUseBox(playerid, BotSist[playerid], true);
	PlayerTextDrawBoxColor(playerid, BotSist[playerid], 41215);
	PlayerTextDrawSetShadow(playerid, BotSist[playerid], 2);
	PlayerTextDrawSetOutline(playerid, BotSist[playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, BotSist[playerid], 255);
	PlayerTextDrawFont(playerid, BotSist[playerid], 1);
	PlayerTextDrawSetProportional(playerid, BotSist[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, BotSist[playerid], true);

	BoxUpdate1[playerid] = CreatePlayerTextDraw(playerid, 47.527343, 402.166717, "ld_poke:cd2c");
	PlayerTextDrawLetterSize(playerid, BoxUpdate1[playerid], 0.500000, 1.000000);
	PlayerTextDrawTextSize(playerid, BoxUpdate1[playerid], 69.805282, 28.249982);
	PlayerTextDrawAlignment(playerid, BoxUpdate1[playerid], 1);
	PlayerTextDrawColor(playerid, BoxUpdate1[playerid], 16843108);
	PlayerTextDrawUseBox(playerid, BoxUpdate1[playerid], true);
	PlayerTextDrawBoxColor(playerid, BoxUpdate1[playerid], 255);
	PlayerTextDrawSetShadow(playerid, BoxUpdate1[playerid], 0);
	PlayerTextDrawSetOutline(playerid, BoxUpdate1[playerid], 93);
	PlayerTextDrawBackgroundColor(playerid, BoxUpdate1[playerid], -5963521);
	PlayerTextDrawFont(playerid, BoxUpdate1[playerid], 4);
	PlayerTextDrawSetProportional(playerid, BoxUpdate1[playerid], 1);

	BoxUpdate2[playerid] = CreatePlayerTextDraw(playerid, 47.527343, 402.166717, "ld_poke:cd2c");
	PlayerTextDrawLetterSize(playerid, BoxUpdate2[playerid], 0.500000, 1.000000);
	PlayerTextDrawTextSize(playerid, BoxUpdate2[playerid], 66.994155, 24.166654);
	PlayerTextDrawAlignment(playerid, BoxUpdate2[playerid], 1);
	PlayerTextDrawColor(playerid, BoxUpdate2[playerid], 41215);
	PlayerTextDrawUseBox(playerid, BoxUpdate2[playerid], true);
	PlayerTextDrawBoxColor(playerid, BoxUpdate2[playerid], 255);
	PlayerTextDrawSetShadow(playerid, BoxUpdate2[playerid], 0);
	PlayerTextDrawSetOutline(playerid, BoxUpdate2[playerid], 93);
	PlayerTextDrawBackgroundColor(playerid, BoxUpdate2[playerid], -5963521);
	PlayerTextDrawFont(playerid, BoxUpdate2[playerid], 4);
	PlayerTextDrawSetProportional(playerid, BoxUpdate2[playerid], 1);

	BotUpdate[playerid] = CreatePlayerTextDraw(playerid, 52.942882, 406.000000, "Forum");
	PlayerTextDrawLetterSize(playerid, BotUpdate[playerid], 0.353484, 1.792500);
	PlayerTextDrawTextSize(playerid, BotUpdate[playerid], 112.445495, 11.949979);
	PlayerTextDrawAlignment(playerid, BotUpdate[playerid], 1);
	PlayerTextDrawColor(playerid, BotUpdate[playerid], -1);
	PlayerTextDrawUseBox(playerid, BotUpdate[playerid], true);
	PlayerTextDrawBoxColor(playerid, BotUpdate[playerid], 41215);
	PlayerTextDrawSetShadow(playerid, BotUpdate[playerid], 2);
	PlayerTextDrawSetOutline(playerid, BotUpdate[playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, BotUpdate[playerid], 255);
	PlayerTextDrawFont(playerid, BotUpdate[playerid], 1);
	PlayerTextDrawSetProportional(playerid, BotUpdate[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, BotUpdate[playerid], true);

	TextUpdt[playerid] = CreatePlayerTextDraw(playerid, 259.560943, 320.250152, "~y~Ultima Atualizacao:");
	PlayerTextDrawLetterSize(playerid, TextUpdt[playerid], 0.410174, 1.454166);
	PlayerTextDrawAlignment(playerid, TextUpdt[playerid], 1);
	PlayerTextDrawColor(playerid, TextUpdt[playerid], -1);
	PlayerTextDrawSetShadow(playerid, TextUpdt[playerid], 0);
	PlayerTextDrawSetOutline(playerid, TextUpdt[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, TextUpdt[playerid], 51);
	PlayerTextDrawFont(playerid, TextUpdt[playerid], 1);
	PlayerTextDrawSetProportional(playerid, TextUpdt[playerid], 1);

	MsgUpdt[playerid] = CreatePlayerTextDraw(playerid, 279.238464, 338.333343, "[25/04/12] - Novo Sistema de Login.~n~Mais Moderno e Inovador!");
	PlayerTextDrawLetterSize(playerid, MsgUpdt[playerid], 0.326310, 1.477499);
	PlayerTextDrawAlignment(playerid, MsgUpdt[playerid], 1);
	PlayerTextDrawColor(playerid, MsgUpdt[playerid], -1);
	PlayerTextDrawSetShadow(playerid, MsgUpdt[playerid], 0);
	PlayerTextDrawSetOutline(playerid, MsgUpdt[playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, MsgUpdt[playerid], 51);
	PlayerTextDrawFont(playerid, MsgUpdt[playerid], 1);
	PlayerTextDrawSetProportional(playerid, MsgUpdt[playerid], 1);

	NickReg[playerid] = CreatePlayerTextDraw(playerid, 132.123184, 352.166839, "~g~Nick:Info_Inside~n~~y~Status:~w~Registrado");
	PlayerTextDrawLetterSize(playerid, NickReg[playerid], 0.410174, 1.454166);
	PlayerTextDrawAlignment(playerid, NickReg[playerid], 1);
	PlayerTextDrawColor(playerid, NickReg[playerid], -1);
	PlayerTextDrawSetShadow(playerid, NickReg[playerid], 0);
	PlayerTextDrawSetOutline(playerid, NickReg[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, NickReg[playerid], 51);
	PlayerTextDrawFont(playerid, NickReg[playerid], 1);
	PlayerTextDrawSetProportional(playerid, NickReg[playerid], 1);
}
stock HideIntro(playerid) {
	PlayerTextDrawHide(playerid, BoxLogin1[playerid]);
	PlayerTextDrawHide(playerid, BoxLogin2[playerid]);
	PlayerTextDrawHide(playerid, BotLogin[playerid]);
	PlayerTextDrawHide(playerid, BoxSist1[playerid]);
	PlayerTextDrawHide(playerid, BoxSist2[playerid]);
	PlayerTextDrawHide(playerid, BotSist[playerid]);
	PlayerTextDrawHide(playerid, BoxUpdate1[playerid]);
	PlayerTextDrawHide(playerid, BoxUpdate2[playerid]);
	PlayerTextDrawHide(playerid, BotUpdate[playerid]);
	PlayerTextDrawHide(playerid, TextUpdt[playerid]);
	PlayerTextDrawHide(playerid, MsgUpdt[playerid]);
	PlayerTextDrawHide(playerid, NickReg[playerid]);
}
stock ShowIntro(playerid) {
	/*PlayerTextDrawShow(playerid, BoxLogin1[playerid]);
	PlayerTextDrawShow(playerid, BoxLogin2[playerid]);
	PlayerTextDrawShow(playerid, BotLogin[playerid]);
	PlayerTextDrawShow(playerid, BoxSist1[playerid]);
	PlayerTextDrawShow(playerid, BoxSist2[playerid]);
	PlayerTextDrawShow(playerid, BotSist[playerid]);
	PlayerTextDrawShow(playerid, BoxUpdate1[playerid]);
	PlayerTextDrawShow(playerid, BoxUpdate2[playerid]);
	PlayerTextDrawShow(playerid, BotUpdate[playerid]);*/
	PlayerTextDrawShow(playerid, TextUpdt[playerid]);
	PlayerTextDrawShow(playerid, MsgUpdt[playerid]);
	PlayerTextDrawShow(playerid, NickReg[playerid]);
}
stock CreateRoubo(playerid) {
	BoxRoubo[playerid] = CreatePlayerTextDraw(playerid, 596.553161, 141.500030, "usetimer");
	PlayerTextDrawLetterSize(playerid, BoxRoubo[playerid], 0.000000, 2.023699);
	PlayerTextDrawTextSize(playerid, BoxRoubo[playerid], 507.751464, 0.000000);
	PlayerTextDrawAlignment(playerid, BoxRoubo[playerid], 1);
	PlayerTextDrawColor(playerid, BoxRoubo[playerid], 0);
	PlayerTextDrawUseBox(playerid, BoxRoubo[playerid], true);
	PlayerTextDrawBoxColor(playerid, BoxRoubo[playerid], 180);
	PlayerTextDrawSetShadow(playerid, BoxRoubo[playerid], 0);
	PlayerTextDrawSetOutline(playerid, BoxRoubo[playerid], 0);
	PlayerTextDrawFont(playerid, BoxRoubo[playerid], 0);

	ClockRoubo[playerid] = CreatePlayerTextDraw(playerid, 510.426879, 140.833343, "ld_grav:timer");
	PlayerTextDrawLetterSize(playerid, ClockRoubo[playerid], 0.499998, 0.352499);
	PlayerTextDrawTextSize(playerid, ClockRoubo[playerid], 18.736480, 17.749977);
	PlayerTextDrawAlignment(playerid, ClockRoubo[playerid], 1);
	PlayerTextDrawColor(playerid, ClockRoubo[playerid], -1);
	PlayerTextDrawUseBox(playerid, ClockRoubo[playerid], true);
	PlayerTextDrawBoxColor(playerid, ClockRoubo[playerid], 0);
	PlayerTextDrawSetShadow(playerid, ClockRoubo[playerid], -158);
	PlayerTextDrawSetOutline(playerid, ClockRoubo[playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, ClockRoubo[playerid], 65535);
	PlayerTextDrawFont(playerid, ClockRoubo[playerid], 4);
	PlayerTextDrawSetProportional(playerid, ClockRoubo[playerid], 1);

	TempoRoubo[playerid] = CreatePlayerTextDraw(playerid, 537.393737, 142.916702, "00:00");
	PlayerTextDrawLetterSize(playerid, TempoRoubo[playerid], 0.449999, 1.600000);
	PlayerTextDrawAlignment(playerid, TempoRoubo[playerid], 1);
	PlayerTextDrawColor(playerid, TempoRoubo[playerid], -1);
	PlayerTextDrawSetShadow(playerid, TempoRoubo[playerid], 0);
	PlayerTextDrawSetOutline(playerid, TempoRoubo[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, TempoRoubo[playerid], 51);
	PlayerTextDrawFont(playerid, TempoRoubo[playerid], 1);
	PlayerTextDrawSetProportional(playerid, TempoRoubo[playerid], 1);
}
stock MostrarRoubo(playerid) {
            PlayerTextDrawShow(playerid, BoxRoubo[playerid]);
            PlayerTextDrawShow(playerid, ClockRoubo[playerid]);
            PlayerTextDrawShow(playerid, TempoRoubo[playerid]);
}
stock EsconderRoubo(playerid) {
            PlayerTextDrawHide(playerid, BoxRoubo[playerid]);
            PlayerTextDrawHide(playerid, ClockRoubo[playerid]);
            PlayerTextDrawHide(playerid, TempoRoubo[playerid]);
}