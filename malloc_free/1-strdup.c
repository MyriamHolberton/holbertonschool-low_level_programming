#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create an array of char.
 *.
 * @size: The size of the array to be initialized.
 * @c: The specific char to initialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.  
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
