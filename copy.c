#include "shell.h"
/**
 * _strcpy - functions that copies a string
 * @dest: string destination
 * @src: source of the string
 *
 * Return: pointer to the dest string
 */
char *_strcpy(char *dest, const char *src)
{
	char *destination = dest;
	const char *source = src;

	while (*source != '\0')
	{
		*destination = *source;
		source++;
		destination++;
	}
	*destination = '\0';

	return (dest);
}
