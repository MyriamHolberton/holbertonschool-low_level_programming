#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * abs_val
 * @x: input
 * Return: return always success
 */

int _abs(int x)
{
if (x < 0)
{

int abs_val;

abs_val = x * -1;

return (abs_val);
}
return (x);
}
