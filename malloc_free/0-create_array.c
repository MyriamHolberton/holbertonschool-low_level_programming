#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - main program
 * @size: the size of the memory to print
 * @c: input
 *
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *n;

	if (size == 0)
		return (NULL);

	n = malloc(size * sizeof(char));

	if (n == NULL)

		return (NULL);

	for (i = 0; i < size; size++)
	{
		n[i] = c;
	}
	return (n);
}
