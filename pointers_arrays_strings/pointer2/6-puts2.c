#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - check the code
 * @str: input
 * Return: Always 0
 */

void puts2(char *str)
{
	int g;
	int l;

	for (g = 0; str[g] != 0; g++)
	{
		if (g % 2 == 0)
		{
			l = str[g];
			_putchar(l);
		}
	}
	_putchar('\n');
}
