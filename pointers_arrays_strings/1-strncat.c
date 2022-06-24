#include "main.h"
#include <stdio.h>

/**
 * _strncat - it is the main function
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	i = 0;
	x = 0;

	while (dest[i] != '\0')
		i++;

	while (src[x] != '\0' && x < n)
	{
		dest[i + x] = src[x];
		x++;
	}
	dest[i + x] = '\0';
	return (dest);
}



