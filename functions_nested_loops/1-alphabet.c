#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * print_alphabet - main function
 * Return: return always  success
 */

void print_alphabet(void)
{
	char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

	_putchar('\n');
}

