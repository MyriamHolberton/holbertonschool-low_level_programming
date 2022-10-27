
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* malloc_checked - allocates memory using malloc
* @b: input
*
* Return: nothing
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);

}
