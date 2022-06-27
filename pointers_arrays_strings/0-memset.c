#include "main.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @s: input
 * @b: input
 * @n: input
 *
 * Return: Always (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
