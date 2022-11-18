#include <stdio.h>
#include "main.h"

/**
 * flip_bits - count the number of the bits needed to be flipped
 * @n: apointer to the bit
 * @m: the number to flip n to
 *
 * Return: the necessary number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = 0, count = 0;

x = n ^ m;
while (x)
{
	if (x & 1)
		count++;
x >>= 1;
}

return (count);
}
