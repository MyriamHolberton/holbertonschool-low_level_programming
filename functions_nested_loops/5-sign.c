#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * print_sign - Check if a number is greater than 0
 * @n: The number to be checked
 * Return: Return 1 if the number is positive Return 0 if otherwise
 *
 */

int print_sign(int n)
{

	if (n > 0)
	{
	_putchar('+');

	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');

	return (0);
	}
	else
	{
	_putchar('-');

	return (-1);
	}
}
