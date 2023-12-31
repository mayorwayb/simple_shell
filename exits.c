#include "shell.h"
/**
 * handle_exit - function that terminates the program when
 * the user types "exit".
 * @user_input: the user's input string
 *
 * Return: void
 */
void handle_exit(char *user_input)
{
	if (my_strncmp(user_input, "exit", _strlen("exit")) == 0)
	{
		free(user_input);
		exit(EXIT_SUCCESS);
	}
}
