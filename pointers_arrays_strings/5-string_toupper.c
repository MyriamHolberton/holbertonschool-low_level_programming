#include "main.h"
#include <stdio.h>

/**
 * string_toupper - it is the main function
 * @ptr: input
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; ++i)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] = ptr[i] - 32;
	}
	return (ptr);
}

