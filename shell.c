#include "shell.h"
/**
 * main - Entry point for the shell program
 * @argc: Argument count
 * @argv: Argument vector
 * @envp: Environment variables
 *
 * Return: 0 on successful execution
 */
int main(int argc, char **argv, char **envp)
{
	bool interactive = (argc == 1 && isatty(STDIN_FILENO));

			run_shell(argv, envp, interactive);

			return (0);
}
