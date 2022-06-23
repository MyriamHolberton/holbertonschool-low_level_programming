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


	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	for (n = 0; src[n] != '\0'; n++, i++)
	{
		dest[i] = src[n];
	}

	return (dest);
}



