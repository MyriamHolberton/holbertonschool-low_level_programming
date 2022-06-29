#include "main.h"
#include <stdio.h>

/**
 * cap_string - it is the main function
 * @ptr: input
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *ptr)
{
	int i, x;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"',
		'(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] = ptr[i] - cap;
		}

		cap = 0;

		for (x = 0; x <= 12; x++)
		{
			if (ptr[i] == separators[x])
			{
				x = 12;
				cap = 32;
			}
		}
	}
	return (ptr);
}
