#include "main.h"
#include <stdio.h>

/**
 * _strchr - The main function
 * @s: input
 * @c: input
 *
 * Return: Always (Success)
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
