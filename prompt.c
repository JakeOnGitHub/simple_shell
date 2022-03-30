#include "shell.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
* main - entry point
* @void: void
* Return: Command line
*/

int main(void)
{
	size_t MAXLINE = 1024;

	char prompt[] = "samjake> ";

	int num = 0;

	char *cmdline = malloc(sizeof(char) *  MAXLINE);

	/*char **argv;*/

	
	/*argv[1] = NULL;*/




	while (1)
	{


		_printf("%s", prompt);
		
		num = getline(&cmdline, &MAXLINE, stdin);
		
		if (num == EOF)
		{
		free(cmdline);
		exit(0);
		}

		/*argv[0] = cmdline;*/
		/*execve(argv[0], argv, NULL);*/
		
	cmdline[strlen(cmdline)-1] = '\0';

	}

	free(cmdline);
	return (0);
}
