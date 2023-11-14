#include "shell.h"
/**
 * _strncpy - copy at most n characters from src to dest
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy
 *
 * Return: pointer to the destination string (dest)
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	for (; a < n; a++)
	{
		dest[a] = '\0';
	}

	return (dest);
}
