#include "main.h"
#include <stdio.h>

/**
 * _strncpy - it is the main function
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y, x;

	y = 0;
	x = 0;

	for (; y < n  && src[y] != '\0'; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';
	x++;
	y++;
	return (dest);
}



