#include "main.h"
#include <stdio.h>

/**
 *print_diagonal - it is a function.
 * @n: input
 * @d: input
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int d;

		if (n > 0)
		{
			for (d = 1; d <= n; d++)
			{
				_putchar('_');
			}
		}
	_putchar('\n');
}
