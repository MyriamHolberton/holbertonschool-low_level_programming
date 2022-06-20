#include "main.h"
#include <stdio.h>

/**
 * print_triangle - it is a function.
 * @size: taille du triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int n, i, m;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (n = 1; n < (size - i); n++)
			{
				_putchar(' ');
			}
			for (m = 0; m <= i; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
