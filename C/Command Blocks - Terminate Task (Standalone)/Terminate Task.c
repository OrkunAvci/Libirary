#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if (argc <2)	{	return -1;		}
	int i;
	char* cmd;
	for (i=1; i<=argc; i++)
	{
		cmd= calloc(20, sizeof(char) );
		strcat(cmd, "Taskkill");
		strcat(cmd, " /PID ");
		strcat(cmd, argv[i]);
		system(cmd);
		free(cmd);
	}
	return 0;
}
