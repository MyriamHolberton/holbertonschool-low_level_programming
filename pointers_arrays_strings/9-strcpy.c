#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * * _strcpy - check the code
 * @dest: input
 * @src: input
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
