
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "function_pointers.h"

/**
* print_name - prints a name
* @name: input
* @f: a pointer ton a function
*
* Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
