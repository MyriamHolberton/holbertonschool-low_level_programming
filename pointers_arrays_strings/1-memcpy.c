#include "main.h"
#include <stdio.h>

/**
 * _memcpy - The main function
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: Always (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
