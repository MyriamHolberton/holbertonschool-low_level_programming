#include "main.h"
#include <stdio.h>

/**
 * string_toupper - it is the main function
 * @char: input
 * @str: The string to be changed
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *)
{
	int x;
	int str;

	for (x = 0; str[x] != '\0'; x++)
	{
		if ((str[x] >= 'a') && (str[x] <= 'z'))

			str[x] = str[x] - 'a' + 'A';

	}

	return (str);
}

