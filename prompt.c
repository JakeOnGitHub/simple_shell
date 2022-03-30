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

	size_t num = 0;

	char *argv[2];

	argv[0] = "/bin/sh";
	argv[1] = NULL;



	char *cmdline = malloc(sizeof(char) *  MAXLINE);

	while (1)
	{


		_printf("%s", prompt);
		num = getline(&cmdline, &MAXLINE, stdin);
		execve(argv[0], argv, NULL);

		if (feof(stdin)) {
                 _printf("\n");
                 exit(0);
		}
		if (num == -1)
		{
		perror("No such file or directory");
		}
	cmdline[strlen(cmdline)-1] = '\0';

	}

	return (0);
}

