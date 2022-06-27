#include "main.h"
#include <stdio.h>

/**
 * _strspn - The main function
 * @s: input
 * @accept: input
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, l;

	for (i = 0; s[i]; i++)
	{
		for (l = 0; accept[l]; l++)
		{
			if (s[i] == accept[l])
				break;
		}
		if (!accept[l])
			break;
	}
	return (i);
}
