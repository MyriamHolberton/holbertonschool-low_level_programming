#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * malloc_checked - Entry Point
 * @b: input
 * Return: pointer to new mem
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
