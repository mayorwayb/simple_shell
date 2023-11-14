#include "shell.h"
/**
 * trim - remove leading spaces from a string
 * @cmd: input string to trim
 *
 * Return: new string with leading spaces removed or NULL on failure
 */
char *trim(const char *cmd)
{
	if (cmd == NULL)
		return (NULL);

	while (*cmd == ' ')
		cmd++;

	return (strdup(cmd));
}
