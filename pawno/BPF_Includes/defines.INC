#if defined MAX_PLAYERS
    #undef MAX_PLAYERS
    #define MAX_PLAYERS (80)
#endif


#if defined MAX_VEHICLES
    #undef MAX_VEHICLES
    #define MAX_VEHICLES (1111)
#endif

//------------ Pastas do servidor --------------------//
#define Pasta_Contas         	"#ArquivosBGL/Contas/%s.ini"
#define Pasta_Casas          	"#ArquivosBGL/Props/Casas/Casa_%d.ini"
#define Pasta_Carros         	"#ArquivosBGL/Props/Carros/Carro_%d.ini"
#define Pasta_Empresas      	"#ArquivosBGL/Props/Empresas/Empresa_%d.ini"
#define Pasta_SEmpresas      	"#ArquivosBGL/Props/MiniEmpresas/MiniEmpresa_%d.ini"
#define Pasta_CarrosFree     	"#ArquivosBGL/Props/Carros_FREE/FREE_%d.ini"
#define Pasta_Admins      	 	"#ArquivosBGL/Props/Admins/%s.ini"
#define Pasta_Helpers      	 	"#ArquivosBGL/Props/Helpers/%s.ini"
#define Pasta_Banidos      	 	"#ArquivosBGL/Banidos/%s.ini"
#define Pasta_IPsBanidos     	"#ArquivosBGL/IPsBanidos/%s.ini"
#define Pasta_BanidosTemp  	 	"#ArquivosBGL/BanidosTemp/%s.ini"
#define Pasta_IPsBanidosTemp 	"#ArquivosBGL/IPsBanidosTemp/%s.ini"
#define Pasta_CofreOrg      	"#ArquivosBGL/Cofre Org/Org%d.cfg"
#define Pasta_Candidatos      	"#ArquivosBGL/Candidatos/Org%d.cfg"
#define Pasta_MembrosOrg      	"#ArquivosBGL/OrgMembros/Org%d.cfg"
#define Pasta_BUGS      		"#ArquivosBGL/BUGS.pwn"
#define Pasta_Araras      		"#ArquivosBGL/Araras.txt"
#define Pasta_SenhaSeguranca   	"#ArquivosBGL/SenhaSeguranca.ini"
#define Pasta_Logados   		"#ArquivosBGL/Logados.ini"
#define Pasta_Logs              "#ArquivosBGL/Logs/%s.txt"
#define Pasta_Corridas          "#ArquivosBGL/Corridas.cfg"
#define Pasta_Deletadas         "#ArquivosBGL/ContasDeletadas/%s.ini"

#define PlayerToPoint(%1,%2,%3)     IsPlayerInRangeOfPoint(%2,%1,%3)


#define BGL::%0(%1) 		forward %0(%1);\
							public %0(%1)
							
							
//--------- Slots Attached Objects ----------//

#define Slot_Pizza          1
#define Slot_Maconha        2
#define Slot_Pa             3
#define Slot_Oculos         4
#define Slot_Bone           5
#define Slot_Arara          6
#define Slot_Escudo         7
#define Slot_Capacete       8
#define Slot_Mascara        9
#define Slot_Planta         7

#define OOCNews                 SendClientMessageToAll
#define NUM_FERRIS_CAGES        10
#define FERRIS_WHEEL_ID         18877
#define FERRIS_CAGE_ID          18879
#define FERRIS_BASE_ID          18878
#define FERRIS_DRAW_DISTANCE    500.0
#define FERRIS_WHEEL_SPEED      0.01

#define FERRIS_WHEEL_Z_ANGLE  	180.0 // This is the heading the entire ferris wheel is at (beware of gimbal lock)

#define MPNOME "mapname Brasil LS RPG"
#define SVVERSAO "BGL Brasil RPG"
#define NOMESERVER "hostname ..::[0.3x] Brasil GreatLife [RPG v3.0a]::.."
#define NOMESITE "weburl www.greatlife.forumeiros.com"
#define RCONPASS "rcon_password Great0.3x"

//### nomes que podem logar como admin Rcon #
#define NOME1 "ninguem"
#define NOME2 "ninguem1"
#define NOME3 "ninguem2"
#define NOME4 "ninguem3"
#define NOME5 "ninguem4"

#define pc(%1,%2)     		(%2)-(%2*%1/100)//Porcentagem
#define PICKTR                              2061
#define BIP                                 •


#define SENHA_MESTRE		"DIMMY030819935512"

#define tempodrogas             2//tempo em minutos para Update na plantação de maconha
#define Max_Crescida            35
#define MAX_MACONHA     		(500)
#define OBJCAPACETE 0
#define HaveCap(%0) pObject[%0][omodel] ? pObject[%0][omodel] : -1

#define C_AirBreak 				(1)
#define C_Speed             	(2)
#define C_Money             	(3)
#define C_StateHack           	(4)
#define C_Fly               	(5)
#define C_Weapon               	(6)
#define C_Colete               	(7)
#define C_FakeKill            	(8)
#define C_DV            		(9)
#define C_Joy            		(10)
#define C_Armas            		(11)

#define Max_AGR         15

#define SetPlayerHoldingObject(%1,%2,%3,%4,%5,%6,%7,%8,%9) SetPlayerAttachedObject(%1,MAX_PLAYER_ATTACHED_OBJECTS-1,%2,%3,%4,%5,%6,%7,%8,%9)
#define StopPlayerHoldingObject(%1) RemovePlayerAttachedObject(%1,MAX_PLAYER_ATTACHED_OBJECTS-1)
#define IsPlayerHoldingObject(%1) IsPlayerAttachedObjectSlotUsed(%1,MAX_PLAYER_ATTACHED_OBJECTS-1)
#define ForPlayers(%1) for(new %1 = 0; %1 < 100; %1++) if(IsPlayerConnected(%1) && !IsPlayerNPC(%1))
#define SalvarNumeroRegistrados();        	DOF2_SetInt("Registrados.ini","TotalRegistro",TotalRegistro);DOF2_SaveFile();
#define CarregarNumeroRegistrados();        	TotalRegistro = DOF2_GetInt("Registrados.ini","TotalRegistro");

#define PING_RUIM       			500
#define MAX_CONNECTIONS_FROM_IP     5
#define OUTRO_MUNDO 			 128
#define Tempo                    450 //Normal 450
#define SERVIDOR                 0xCECECEFF
#define AMARELO                  0xFFFF00FF
#define AZUL_CLARO               0x00C2ECFF
#define SUB_MODERADOR            1
#define MODERADOR                2
#define AUXILIAR                 3
#define SUB_MASTER               4
#define MASTER                   1337
#define SUB_GERENTE              1338
#define GERENTE                  1339
#define SUB_DONO                 1340
#define DONO                     3001
#define COR_PM                   0x9999FFF6
#define COR_BOPE                 1819081110//0x666699FF
#define COR_EXE                  0x00660CF6
#define COR_Medicos              0xFF8282FF//0xCC6666F6
#define COR_AZULZAO              0x005FFFFF
#define ROXO                     0xC2A2DAAA
#define COR_CINZA1 		         0xB4B5B7FF
#define COR_AZTECAS 	         0x2641FEFF//0x109FFFAA
#define COR_Rifa 	             0xC599C8FF//0x009999F6
#define COR_PRE 	             0x6699FFFF
#define COR_HITMAN 	             0xB4B5B7FF//0xFFFFFFFF
#define COR_REPORTER             0xFF9900FF
#define COR_TAXI 	             33357768//0x66FFFFFF
#define COR_PF 			         -1854512490//0x999966FF
#define COR_PRp 		         0x996600FF
#define COR_YAK 		         0x00483AF6
#define COLOR_YAK 		         0x00483A99
#define COLOR_RIFA               0xF09F50AA
#define COR_GRO 		         0x33FF00FF
#define COR_FARC 		         808464534//0x434242FF//0x00ECF6AA//0xFFCC99F6
#define COR_PC 		             0x666699FF//0x93833EF6
#define COR_BALLAS 		         0x9900CCFF
#define COR_VAGOS 		         0xFFFF33FF
#define COR_CVSF 		         -1439485014//0xD52322FF
#define COR_PR 		             0x996600FF
#define COR_HELPER	             0x55F6ACFF// 0x50FF7BFF
#define CORGZ_COPS               0x5B88ACAA
#define COR_TRIADS               0xBCD2EEFF
#define COR_GI 			         869072810//0x00ECF6FF//0x5F5B5DFF
#define COR_GIC 		         0xFE005DFF
#define COR_WHITE 		         0xFFF8F8AA
#define VERDE2 			         0x33FF00FF
#define COLOR_RUSSA              0x440C0099
#define	COLOR_VERDE2 	    	 0x33FF00FF
#define COLOR_DEPTH 	         0x993333FF
#define COR_ADMIN 		         -10043754//0xF64CCAFF//0xFF34B3F6
#define COLOR_ADMIN 		     0xF64CCAFF
#define COR_PCC 		         0xB9C35AAA//0x18C5FFAA
#define COLOR_WHITE              0xFFFFFFFF
#define COLOR_CHAT_PCC           0xB9C35AFF//0xFFFFFFAA
#define LARANJA 		         0xFF6600AA
#define VERDECLARO 		         0x00FF0CAA
#define COLOR_ALIANCA 			 0xA9A9A9FF
#define VERDEFRACO               0x80cf80AA
#define COLOR_AMARELOR           0xFFFF00AA
#define VERDEFRACOR              0x80cf80AA
#define COR_3DLABEL              0x0FFFC8FF//0x00FF7FFF//0xAA0000FF//0xFF0000FF//0xF6F677AA//0xF68E00F6
#define COLOR_AZULBB             0xE6D4D1FF//0xE8D6D6FF//0xCCCCFFFF
#define TEAM_CYAN_COLOR          0xA92BF6F6
#define GCOP_COLOR 		         0x6666FFC8
#define COLOR_LIGHTRED 	         0xFF6347AA
#define COLORGZ_YAKUZA           0x006699C8
#define COLORGZ_PF               0x000000C8
#define COLOR_GREEN              0x33AA33AA
#define COLOR_PURPLE             0xC2A2DAAA
#define TEAM_GROVE_COLOR         0x00D900C8
#define TEAM_BALLAS_COLOR        0x9900FF96
#define TEAM_AZTECAS_COLOR       0x2641FEC8
#define COLOR_GRAD1              0xB4B5B7FF
#define COLOR_GRAD2              0xBFC0C2FF
#define COLOR_GRAD3 	         0xBFC0C2FF
#define COLOR_GRAD4              0xD8D8D8FF
#define COLOR_GRAD5              0xF0F0F0FF
#define COLOR_GRAD6              0xF0F0F0FF
#define COLOR_LIGHTBLUE          0x33CCFFAA
#define COLOR_DBLUE              0x2641FEAA
#define COLOR_SAMP               0xACCBF1FF
#define COLOR_YELLOW             0xFFFF00AA
#define COLOR_GREY               0xAFAFAFAA
#define COLOR_RED                0xAA3333AA
#define COLOR_LIGHTGREEN         0x9ACD32AA
#define TEAM_VAGOS_COLOR         0xFFC801C8
#define CINZA                    0xAFAFAFAA
#define PRETO                    0x000000FF
#define COLOR_FADE4              0x8C8C8C8C
#define COLOR_FADE5              0x6E6E6E6E
#define COLOR_FADE3              0xAAAAAAAA
#define COLOR_RCARRO             0x80FF8096
#define TEAM_HIT_COLOR           0xFFFFFF00
#define CINZA2                   0xBFC0C2FF
#define COLOR_FADE2 	         0xC8C8C8C8
#define COLOR_NEWS 		         0xFFA500AA
#define COLOR_NEWS               0xFFA500AA
#define COLOR_ALLDEPT            0xFF8282AA
#define COLOR_FADE1              0xE6E6E6E6
#define COLOR_R                  0x6666CCFF
#define COLORGZ_ALCAIDA          0x10100FAA//0x685000C8
#define COLOR_MSG                0x934FF6F6
#define COLORGZ_Rifa              0xC599C8AA//0x009999F6
#define COLORGZ_GI               0x00ECF6AA//0x000000F5//0x185000A0 //0x5F5B5DFF
#define AZUL3                    0x33CCFFAA
#define CINZA1                   0xB4B5B7FF
#define AN_COLOR                 0x00E7C6F6
#define COLOR_YELLOW2 			 0xF5DEB3FF
#define COLOR_TAXISTA            0xF68E00F6
#define TEAM_BLUE_COLOR          0x8D8DFF00
#define COLORGZ_LH               0x00E7C6C8
#define COLORGZ_EXE              0x33AA33C8
#define COLOR_EXE                0x33AA33C8

#define RADIOMP3                         4723
#define NONE_CAR 						 9999
#define EVENTOC                          3423
#define TELEPORTE                        4324
#define cVotacao                         3235
#define cPergunta                        3234
#define TEAM_CYAN 					     1
#define DIALOG_CAIXA_ELETRONICO          172
#define DIALOG_CAIXA_ELETRONICO_INPUT    173
#define DIALOG_TRANSFERIR 				 176
#define DIALOG_RANGE 					 1264
#define DialogCasaGPS 					 1982
#define DialogEmpresaGPS 				 1983
#define PegandoEmpresaTH 				 1984
#define PegandoMiniEmpresaTH 			 1985
#define SPAM_MAX_MSGS 					 6
#define SPAM_TIMELIMIT 				     3
#define MAX_INTEGRANTE_NOMES      		 35
#define DIALOG_INFO 				     167
#define DIALOG_ALUGAR 				     1212
#define DIALOG_ALUGAR2 				     1213
#define DIALOGID 						 1338
#define PEGARMAFIA 				         1741
#define Controle 						 TogglePlayerControllable
#define CameraPos 					     SetPlayerCameraPos
#define EmpresasE                        "Exit"
#define EmpresaS                         "Open"
#define TextCasaVenda               	 "Esta casa esta a venda\nDescricao: %s\nPreço: R$%d\nNivel: %d\nPara compra-la use /comprarcasa"
#define TextCasa                         "O dono desta casa e %s\nNivel: %d\nAperte a letra F para entrar"
#define TextCasaAl                       "O dono desta casa e %s\nAluguel: R$%d\nNivel: %d\nUSE /alugarquarto para aluga-la\nAperte a letra F para entrar"
#define TextEmpresaVenda               	 "Esta empresa esta a venda\n%s\nPreço da Empresa: R$%d\nNivel: %d\nFundos: R$%d\nPara comprar digite /comprarempresa"
#define TextEmpresa                      "%s\nDono da Empresa: %s\nExtorção: %s\nEntrada: R$%d\nNivel: %d\nAperte a letra 'F' para entrar\nFundos: $%d"
#define TextMEmpresaVenda                "Esta empresa esta a venda\n%s\nPreço da mini empresa: R$%d\nNivel: %d\nPara comprar digite /comprarempresa"
#define Donodecasa                       "02dp"
#define TextMEmpresa                      "%s\nDono da empresa: %s\nExtorção: %s\nEntrada: R$%d\nNivel: %d"
#define dhitman 						 2424
#define CAIXINHA_VG 				     1276//1276
#define char 						     255
#define SlotAKM4 				         1
#define MAX_MACONHAS 			         5000
#define DIALOG_ANUNCIO 					 168
#define MAX_SPIKESTRIPS 				 200
#define MAX_ORGS                         35// NUNCA MECHA
#define AFK_TIME 					     10
#define PICKUP_TYPE_NONE 				 0
#define PICKUP_TYPE_WEAPON 			     1
#define DIALOGID2 				         1389
#define SPECIAL_ACTION_PISSING2          68
#define KEY_HORN 						 2
#define CHECKPOINT_Nenhum                0
#define CHECKPOINT_HOME                  12
#define MAX_HOUSES                       309
#define MAX_BIZZES                    	 12
#define MAX_SBIZZES 					 26
#define granacarro 						 200
#define precomorte 						 100
#define GranadaMorro 				     800
#define GranadaEstacao 					 1200
#define GranadoPark 					 800
#define GranadoCasarao 					 1200
#define GranadoAero 					 800
#define MAX_TRUNK_SLOTS					 (5)
#define GasMax               			 100
#define RefuelWait 						 5000
#define MAX_STRING 						 255
#define MAX_ZONE_NAME 					 28
#define TempoHospital                    (60) // 1 minuto

#define BRANCO_COR              -1
#define AMARELO_COR				0xF6F600FF
#define VERDE_COR               0x2ED82DAA
#define VERMELHO_COR            0xCD0400AA
#define AZUL_COR                0x0004F6AA
#define ROSA_COR                0xF65FC5AA
#define ROXO_COR                0xB100B8AA
#define CINZA_COR               0xACADADAA
#define ADMIN_COR               0xF67A00AA
#define AZULCLARO_COR           0x00F6F6AA
#define VERDEESCURO_COR         0x008600AA
#define LARANJA_COR             0xF67A00AA
#define VINHO_COR               0x930058AA
#define CINZA1_COR 				0xE6E6E6E6
#define CINZA2_COR 				0xC8C8C8C8
#define CINZA3_COR 				0xAAAAAAAA
#define CINZA4_COR 				0x8C8C8C8C
#define CINZA5_COR 				0x6E6E6E6E


#define MAX_CAIXAS      24

#define MAX_CARROS_FREE         150


#define MAX_SLOTS_WEAPONS       11
#define TOTAL_ITEMS         300
#define SELECTION_ITEMS 	8
#define ITEMS_PER_LINE   4

#define HEADER_TEXT "Escolha sua skin"
#define NEXT_TEXT   "Proximo"
#define PREV_TEXT   "Anterior"

#define DIALOG_BASE_X   	75.0
#define DIALOG_BASE_Y   	110.0
#define DIALOG_WIDTH    	550.0
#define DIALOG_HEIGHT   	180.0
#define SPRITE_DIM_X    	113.0
#define SPRITE_DIM_Y    	113.0

//----------- Sistema de corrida ----------

#define MAX_CPS_CORRIDA         	50
#define MAX_PLAYERS_IN_CORRIDA  	10//Maximo de players que podem participar

//-------- info sniper ---------
#define SENSETIVE 0.42
#define MP 100

#define HOLDING(%0) \
	((newkeys & (%0)) == (%0))
	
//pregos system
#define MAX_PREGOS 15

#define W_Velocidade        15
#define W_Damage            25
#define V_Damage            650.0

#define Minutos_Reset_Tr        /*Tempo em minutos*/(10) * 60
