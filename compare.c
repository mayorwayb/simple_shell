#include "shell.h"
/**
 * my_strncmp - compares number of bytes in s1 and s2
 * @s1: first string to be compared
 * @s2: second string to be compared
 * @num: number of bytes to be checked
 *
 * Return: 0 if s2 is less than s1, 0 if s1 < s2,
 * 0 if s1 is equal to s2
 */
int my_strncmp(char *s1, char *s2, int num)
{
	if (!num)
		return (0);
	if (*s1 == *s2)
		return (*s1 ? my_strncmp(s1 + 1, s2 + 1, num - 1) : 0);
	if (*s1)
		return (1);
	if (*s2)
		return (-1);
	return (*s1 - *s2);
}
