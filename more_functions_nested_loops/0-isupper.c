#include "main.h"
#include <stdio.h>

/**
 * _isupper -it is a function  .
 * @c: input
 * Return: Always 0.
 */
int _isupper(int c)
{

	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

