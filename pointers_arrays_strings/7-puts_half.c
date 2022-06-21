#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - check the code
 * @str: input
 * Return: Always 0
 */

void puts_half(char *str)
{
	int n, d, m;

	m = 0;

	for (n = 0; str[n] != '\0'; n++)
		m++;

	d = (m / 2);

	if ((m % 2) == 1)
		d = ((m + 1) / 2);

	for (n = d; str[n] != '\0'; n++)

		_putchar(str[n]);
	_putchar('\n');
}
