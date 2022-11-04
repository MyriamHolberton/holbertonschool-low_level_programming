#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - returns the sum of all its parameters
* @n: the number of parameters passed by the function
* @...: a variable number of parameters to calculate the sum of
*
* Return: if n == 0
*/

int sum_them_all(const unsigned int n, ...)
{

va_list args;
unsigned int i = 0;
int sum = 0;

if (n != 0)
{
	va_start(args, n);
	while (i < n)
{
	sum += va_arg(args, int);
	i++;
}
va_end(args);
return (sum);
}
return (0);
}
