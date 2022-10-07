#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * _isalpha - main function
 * @c: input
 * Return: return always  success
 */

int _isalpha(int c)
{

	if ((c >= 'a' &&  c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
