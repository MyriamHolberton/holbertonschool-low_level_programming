#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* factorial - that returns the factorial of a given number
* @n: input
*
* Return: always 0 (success)
*/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
