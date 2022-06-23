#include "main.h"
#include <stdio.h>

/**
 * _strcat - it is the main function
 * @dest: input
 * @src: input
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	for (i = 0, n = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

			for (i = 0; i < n; n++)
			{
				dest[i] = '\0';
			}
	return (dest);
}



