#include "shell.h"
/**
 * _strlen - calculate the length of a string
 * @s: string to measure
 *
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
