#include "main.h"
#include <stdio.h>

/**
 * more_numbers - it is a function  .
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, l;

	for (l = 0; l < 10; l++)
	{

		for (i = 0; i <= 14; i++)
		{
			if ((i / 10) != 0)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
