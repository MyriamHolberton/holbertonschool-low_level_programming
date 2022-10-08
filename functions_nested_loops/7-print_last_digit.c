#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 * @x: input
 * Return: return always success
 */

int print_last_digit(int x)
{
int digit = x % 10;

if (digit < 0)
{
	digit = digit * -1;
}

	_putchar(digit + '0');

	return (digit);
}
