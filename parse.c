#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>

char ** parse_args(char * line){
	char ** array =(char **) calloc(5,sizeof(char *));
	int i = 0;
	while(line){
		array[i] = strsep(&line," ");
		i += 1;
	}
	return array;
}

int main(){
	char line[] = "ls -a -l";
	char ** args = parse_args(line);
	printf("%s\n",args[0]);
	execvp(args[0],args);
}
