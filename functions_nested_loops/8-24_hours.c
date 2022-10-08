#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return:...
 */

void jack_bauer(void)
{
int t, x, y, z;

for (t = 0; t <= 2; t++)
{
	for (x = 0; x <= 9; x++)
	{
	if ((t <= 1 && x <= 9) || (t <= 2 && x <= 3))
	{
	for (y = 0; y <= 5; y++)
	{
	for (z = 0; z <= 9; z++)
	{
	_putchar(t + '0');
	_putchar(x + '0');
	_putchar(':');
	_putchar(y + '0');
	_putchar(z + '0');
	_putchar('\n');
}
}
}
}
}
}

