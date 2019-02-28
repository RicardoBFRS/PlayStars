/**********************************
 *                                *
 *   @Author:      ZeeX           *
 *   @Version:     0.3.1          *
 *   @Released:    31/10/2009     *
 *                                *
 **********************************/


#define MAX_FUNC_NAME (32)

#define COMMAND:%1(%2)          \
			forward cmd_%1(%2); \
			public cmd_%1(%2)		
			
#define CMD:%0(%1)      COMMAND:%0(%1)

#define command(%1,%2,%3) \
			COMMAND:%1(%2, %3)      
      
#define cmd(%1,%2,%3) \
			COMMAND:%1(%2, %3)

#define ForT:%0(%1)         cmd_%0(%1)// Exemplo: ForT:aviso(playerid, "Boa Tarde");

#if !defined isnull
	#define isnull(%1) \
				((!(%1[0])) || (((%1[0]) == '\1') && (!(%1[1]))))
#endif

forward OnPlayerCommandPerformed(playerid, cmdtext[], success); 


public OnPlayerCommandText(playerid, cmdtext[])
{
    new
        pos,
        funcname[MAX_FUNC_NAME];
        
    while (cmdtext[++pos] > ' ') {
		funcname[pos-1] = tolower(cmdtext[pos]); 
	}
	
	format(funcname, sizeof(funcname), "cmd_%s", funcname);
    while (cmdtext[pos] == ' ') pos++;
	if (!cmdtext[pos])
	{
		return CallLocalFunction("OnPlayerCommandPerformed", "isi", playerid, cmdtext, CallLocalFunction(funcname, "is", playerid, "\1"));
	}
	return CallLocalFunction("OnPlayerCommandPerformed", "isi", playerid, cmdtext, CallLocalFunction(funcname, "is", playerid, cmdtext[pos]));
}

#if defined _ALS_OnPlayerCommandText
    #undef OnPlayerCommandText
#else
    #define _ALS_OnPlayerCommandText
#endif
#define OnPlayerCommandText zcmd_OnPlayerCommandText
forward zcmd_OnPlayerCommandText(playerid, cmdtext[]);
