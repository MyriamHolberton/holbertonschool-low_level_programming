#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - returns the sum of all its parameters
* @n: input
* 
* @action: a pointer to a function
*
* Return: if n == 0
*/

int sum_them_all(const unsigned int n, ...)
{

va_list nums;
unsigned int i = 0;
int sum = 0;

if (n != 0)
{
va_start(nums, n);
while (i < n)
{
	sum += va_num(nums, int);
	i++;
}
va_end(nums);
return (sum);
}
return (0);
}
