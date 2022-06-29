#include "main.h"
#include <stdio.h>

/**
 * leet - it is the main function
 * @ptr: input
 *
 * Return: A pointer to the changed string.
 */
char *leet(char *ptr)
{
	int i, x;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replace[] = {'4', '3', '0', '7', '1'};

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (ptr[i] == find[x])
			{
				ptr[i] = replace[x / 2];
				x = 9;
			}
		}
	}
	return (ptr);
}
