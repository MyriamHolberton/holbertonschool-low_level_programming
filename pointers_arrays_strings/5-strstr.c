#include "main.h"
#include <stdio.h>

/**
 * _strstr - The main function
 * @haystack: input
 * @needle: input
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *a != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}

	return (0);
}
