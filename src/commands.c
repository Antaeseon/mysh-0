#include <string.h>
#include <stdio.h>
#include "commands.h"
#include<unistd.h>

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;
	
  // TODO: Fill it!
	int i;	
	i=chdir(argv[1]);
	if(i==0)
	{
		return 0;
	}
	else
	{
		return-1;
	}
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;

  	char buf[1000];
	getcwd(buf,1000);
	printf("%s\n",buf);

  return 0;
}

int validate_cd_argv(int argc, char** argv) {
	if(strcmp(argv[0],"cd")==0&&argc==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int validate_pwd_argv(int argc, char** argv) {
  	
	if(strcmp(argv[0],"pwd")==0&&argc==1)
	{
		return 1;
	}
	
	else
	{
		return 0;
	}
 
}
