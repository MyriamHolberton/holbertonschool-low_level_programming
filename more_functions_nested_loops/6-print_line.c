#include "main.h"
#include <stdio.h>

/**
 * print_line - it is a function.
 * @n: input
 * @d: input
 * Return: Always 0.
 */
void print_line(int n)
{
	int d;

		if (n > 0)
		{
			for (d = 0; d <= n; d++)
			{
				_putchar('_');
			}
		}
	_putchar('\n');
}
