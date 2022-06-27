#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - The main function
 * @a: input
 * @size: input
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int som1, som2;
	int col, row;

	som1 = 0;
	som2 = 0;
	row = 0;
	col = 0;
	while (row < size)
	{
		som1 += *(a + row * size + col);
		som2 += *(a + row * size + (size - 1 - col));
		col++;
		row++;
	}
	printf("%d, %d\n", som1, som2);
}
