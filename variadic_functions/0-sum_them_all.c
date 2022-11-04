#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "function_pointers.h"

/**
* sum_them_all - returns the sum of all its parameters
* @n: input
* 
* @action: a pointer to a function
*
* Return: nothing
*/

int sum_them_all(const unsigned int n, ...)
{
	if (array == NULL || action == NULL)
	return;

	while (size-- > 0)
	{
	action(*array);
	array++;
	}
}
