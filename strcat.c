#include "shell.h"
/**
 * _strcat - Concatenates the source string to the destination string
 * @dest: The destination string
 * @src: The source string
 * Return: Pointer to the destination string (dest)
 */
char *_strcat(char *dest, const char *src)
{
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);
	int a;

	for (a = 0; a < src_len; a++)
	{
		dest[dest_len + a] = src[a];
	}

	dest[dest_len + src_len] = '\0';

	return (dest);
}
