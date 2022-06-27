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
	int y;

	y = 0;

	while (src[y] != '\0' && y < n)
	{
		dest[y] = src[y];
		y++;
	}
	while (y < n)
	{
	dest[y] = '\0';
	y++;
	}
	return (dest);
}



