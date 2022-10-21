#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* _pow_recursion - that returns the value of x raised to the power of y
* @x: input
* @y: input
* Return: always 0 (success)
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
