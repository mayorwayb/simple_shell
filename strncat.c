#include "shell.h"
/**
 * _strncat - concatenate two strings with a limit
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to copy from src
 *
 * Return: pointer to the destination string (dest)
 */
char *_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = _strlen(dest);
	size_t a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[dest_len + a] = src[a];
	}
	dest[dest_len + a] = '\0';

	return (dest);
}
