
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* array_range - creates an array of integers
* @max: input
* @min: input
*
* Return: nothing
*/

int *array_range(int min, int max)
{
	int i = 0;
	int *s;

	if (min > max)
	return (NULL);

	s = malloc(sizeof(int) * (max - min) + sizeof(int));
	if (s == NULL)
	return (NULL);

	while (min <= max)
	{
	s[i] = min;
	i++;
	min++;
	}
	return (s);
}
