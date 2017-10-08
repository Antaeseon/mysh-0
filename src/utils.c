#include "utils.h"
#include<stdlib.h>
#include<string.h>

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
  // TODO: Fill this
	char temp[100];
	strcpy(temp,command);
	int num=0;
	argc=&num;
	int a=0;
	argv=(char***)malloc(sizeof(char)*100);
	for(int i=0;i<10;i++)
	{
		argv[i]=(char**)malloc(sizeof(char)*100);
	}
	for(int i=0;i<10;i++)
	{
		*argv[i]=(char*)malloc(sizeof(char)*100);
	}
	
	for(int i=0;i<=strlen(temp);i++)
	{
		if(temp[i]!=' ')
		{
			(*argv[num])[a++]=temp[i];
			if(temp[i+1]==' '||temp[i+1]==0)
			{
				(*argv[num])[a]=0;
				num++;
				a=0;
			}
		}
	}

		
}
