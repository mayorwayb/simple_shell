#include "shell.h"
/**
 * sigint_handler - Signal handler for SIGINT (Ctrl+C)
 * @signal: The signal number
 */
void sigint_handler(int signal)
{
	(void)signal;
	write(STDOUT_FILENO, "\n$ ", _strlen("\n$ "));
}

/**
 * run_shell - entry point for the shell
 * @argc: Argument count
 * @argv: Argument vector
 * @envp: Environment variables
 * @interactive_mode: Flag for interactive mode
 */
void run_shell(int argc, char **argv, char **envp, bool interactive_mode)
{
	size_t buffer_size = 0;
	ssize_t num_chars = 0;
	char *user_input = NULL;
	char *cmd_args[MAX_CMD_ARGS];
	int cmd_arg_count = 0;

	while (1)
	{
		if (interactive_mode && isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", _strlen("$ "));

		signal(SIGINT, sigint_handler);

		num_chars = getline(&user_input, &buffer_size, stdin);

		if (num_chars == -1)
		{
			free(user_input);
			exit(EXIT_SUCCESS);
		}

		if (user_input[num_chars - 1] == '\n')
			user_input[num_chars - 1] = '\0';

		user_input = trim(user_input);

		if (_strlen(user_input) == 0)
			continue;

		cmd_arg_count = 0;
		cmd_args[cmd_arg_count] = strtok(user_input, " \n");
		handle_exit(user_input);
		handle_path(cmd_args, user_input);

		while (cmd_args[cmd_arg_count])
		{
			cmd_arg_count++;
			cmd_args[cmd_arg_count] = strtok(NULL, " \n");
		}
		run_command(cmd_args, argv, envp);
	}
	free(user_input);
}
