#include "shell.h"
/**
 * intlen - function that calculates the lenght of an integer
 * @n: integer
 *
 * Return: lenght of the interger
 */
int intlen(int n)
{
	unsigned int num;
	int len = 1;

	if (n < 0)
	{
		len++;
		num = (unsigned int)(-n);
	}
	else
	{
		num = (unsigned int)n;
	}

	while (num > 9)
	{
		len++;
		num /= 10;
	}

	return (len);
}

/**
 * itoa - function that converts an integer to a string\
 * @num: integer
 *
 * Return: string representation of the integer or NULL if allocation fails
 */
char *_itoa(int num)
{
	char *buff;
	size_t n;
	int len = intlen(num);

	buff = malloc(len + 1);
	if (!buff)
	{
		return (NULL);
	}

	buff[len] = '\0';
	if (num < 0)
	{
		n = (unsigned int)(-num);
		*buff = '-';
	}
	else
	{
		n = (unsigned int)num;
	}

	len--;

	do {
		buff[len] = (n % 10) + '0';
		n /= 10;
		len--;
	} while (n > 0);

	return (buff);
}

/**
 * geterror - function that prints an error message
 * @p: pointer to a denum struct
 * @argv: argument vector
 * @cmd: command that triggered the error
 *
 * Return: void
 */
void geterror(denum *p, char **argv, char *cmd)
{
	int len;
	char *errmsg, *cnt_str;

	cnt_str = _itoa(p->cnt);
	len = _strlen(argv[0]) + _strlen(cnt_str) + _strlen(cmd) + 17;
	errmsg = malloc(len);
	if (!errmsg)
	{
		return;
	}

	_strcpy(errmsg, argv[0]);
	_strcat(errmsg, ": ");
	_strcat(errmsg, cnt_str);
	_strcat(errmsg, ": ");
	_strcat(errmsg, cmd);
	_strcat(errmsg, ": not found\n");
	_strcat(errmsg, "\0");

	write(STDOUT_FILENO, errmsg, len);
	free(errmsg);
}
