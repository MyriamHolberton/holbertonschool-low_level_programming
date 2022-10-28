
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: input
* @size: input
*
* Return: nothing
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *str;

	if (nmemb == 0 || size == 0)
	return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
	return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	str[i] = 0;
	return (str);
}
