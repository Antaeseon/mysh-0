#include "utils.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  // TODO: Fill this
	int num=0;
	char*token;
	char temp[100];
	*argc=0;
	strcpy(temp,command);
	*argv=(char**)malloc(sizeof(char*)*50);
	(*argv)[num]=(char*)malloc(sizeof(char)*50);

	token=strtok(temp," \n\t");
	
	if(token==NULL)
	{
		strcpy((*argv)[num],"");
		*argc =1;
		return;
	}
	
	
	while(token!=NULL)
	{
		strcpy((*argv)[num++],token);
		(*argv)[num]=(char*)malloc(sizeof(char)*50);
		token=strtok(NULL," \n\t");
		(*argc)++;
	}		
}
