#include "shell.h"
/**
 * handle_path - Construct an absolute path for the given command
 * @rgv: Argument vector
 * @cmd: Command set by the user
 *
 * Return: Absolute path for exec or NULL on failure.
 */
char *handle_path(char **rgv, const char *cmd)
{
	char *path;

	if (cmd == NULL)
		return (NULL);

	if (cmd[0] != '/' && cmd[0] != '.')
	{
		path = malloc(_strlen("/bin/") + _strlen(cmd) + 1);

		if (path == NULL)
		{
			perror("Memory allocation failed");
			return (NULL);
		}

		_strcpy(path, "/bin/");
		_strcat(path, cmd);

		rgv[0] = path;
		return (rgv[0]);
	}

	return (strdup(cmd));
}
