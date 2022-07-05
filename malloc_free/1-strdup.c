#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - The main function
 * @str: input
 * Description: a function that returns a pointer to a
 * newly allocated space in memory
 * Return: Always duplicates
 */

char *_strdup(char *str)
{
	char *duplicates;
	int n, i;

	n = 0;
	if (str == NULL)
		return (NULL);

	while (str[n] != '\0')
	{
		n++;
	}

	duplicates = malloc(sizeof(char) * (n + 1));
	if (duplicates == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		duplicates[i] = str[i];
	duplicates[i] = '\0';

	return (duplicates);
}
