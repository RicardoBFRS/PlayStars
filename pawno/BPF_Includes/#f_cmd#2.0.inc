
#include <a_samp>

#define CMD:%0(%1)          forward @%0(%1);public @%0(%1)
#define cmd(%1,%2)          CMD:%1(%2)
#define COMMAND:%1(%2)      CMD:%1(%2)
#define ForT:%0(%1)         @%0(%1)// Exemplo: ForT:aviso(playerid, "Boa Tarde");

new x_pos,
	x_cmd[32];
public OnPlayerCommandText(playerid, cmdtext[]){

	cmdtext[0] = '@';



	switch(x_pos = strfind(cmdtext, " ")) {

		case -1:{
            CallLocalFunction(cmdtext,"ds",playerid,"\1");
			OnProcessCommand(playerid,funcidx(cmdtext));
		}
		default:{


			x_cmd[0] = EOS;
			strmid(x_cmd,cmdtext,0,x_pos,32);
			
			CallLocalFunction(x_cmd,"ds",playerid,cmdtext[x_pos]);
			OnProcessCommand(playerid ,funcidx(x_cmd));
		}
	}

	/*switch(x_pos = strfind(cmdtext, " ")){
	
		case -1:{
		
			return OnProcessCommand(playerid,CallLocalFunction(cmdtext,"ds",playerid,"\1"));
		}
		default:{
		
			x_cmd[0] = EOS;
			strmid(x_cmd,cmdtext,0,x_pos,32);
			return OnProcessCommand(playerid ,CallLocalFunction(x_cmd,"ds",playerid,cmdtext[x_pos]));
		}
	}*/
	
	return true;
}
#if defined _ALS_OnPlayerCommandText
    #undef OnPlayerCommandText
#else
    #define _ALS_OnPlayerCommandText
#endif
#define OnPlayerCommandText fcmd_OnPlayerCommandText
forward fcmd_OnPlayerCommandText(playerid, cmdtext[]);


/*stock OnProcessCommand(playerid, success)
{
}*/
