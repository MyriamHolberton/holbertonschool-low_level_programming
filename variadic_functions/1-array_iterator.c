#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter on each element
* @array: input
* @size: input
* @action: a pointer to a function
*
* Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	return;

	while (size-- > 0)
	{
	action(*array);
	array++;
	}
}
