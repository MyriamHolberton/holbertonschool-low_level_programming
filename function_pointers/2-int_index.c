#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer.
* @array: input
* @size: input
* @cmp: a pointer to a function
*
* Return: nothing
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int index;

if (array == NULL || cmp == NULL)
return (-1);
for (index = 0; index < size; index++)
{
	if (cmp(array[index]) != 0)
	return (index);
}
return (-1);
}
