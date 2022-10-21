#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * _sqrt - return the natural square root
 * @n: input
 * @i: input
 *
 * Return: the natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

if (sqrt > n)
	return (-1);
if (sqrt == n)
	return (i);
return (_sqrt(n, i + 1));
}

/**
* _sqrt_recursion - that returns the natural square root of a number
* @n: input
*
* Return: always 0 (success)
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
