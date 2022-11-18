#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the number to be printed in binary
 *
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int count = 0, mult = 1;
int len;

if (b == NULL)
	return (0);

for (len = 0; b[len];)
	len++;
for (len -= 1; len >= 0; len--)
{
	if (b[len] != '0' && b[len] != '1')
		return (0);

	count += (b[len] - '0') * mult;
	mult *= 2;
}
return (count);
}


