#include "shell.h"
/**
 * run_command - function that runs a command
 * @argv2: Argument vector for the command
 * @arv1: Argument vector from the main program
 * @envp: Environment variables
 */
void run_command(char **argv2, char **arv1, char **envp)
{
	pid_t mychild;
	int stat;

	mychild = fork();

	if (mychild == -1)
	{
		perror("Process Error");
		exit(EXIT_FAILURE);
	}

	if (mychild == 0)
	{
		if (execve(argv2[0], argv2, envp) == -1)
		{
			write(STDOUT_FILENO, arv1[0], _strlen(arv1[0]));
			write(STDOUT_FILENO, ": No such file or directory", _strlen(": No such file or directory"));
			write(STDOUT_FILENO, "\n", 1);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(&stat);
	}
}
