#include "shell.h"
/**
 * trim - remove leading spaces from a string
 * @cmd: input string to trim
 *
 * Return: new string with leading spaces removed or NULL on failure
 */
char *trim(char *cmd)
{
	char *cpcmd;
	int a = 0, len;

	while (cmd[a] == ' ')
		a++;
	len = _strlen(cmd) - a + 1;
	cpcmd = malloc(len + 1);
	if (!cpcmd)
	{
		perror("Allocation Failed\n");
		return (NULL);
	}
	_strncpy(cpcmd, cmd + a, len);
	cpcmd[len] = '\0';
	_strcpy(cmd, cpcmd);
	free(cpcmd);
	return (cmd);
}
