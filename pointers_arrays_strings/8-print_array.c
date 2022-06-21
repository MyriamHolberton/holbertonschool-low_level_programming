#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - check the code
 * @a: input
 * @n: input
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		printf("%d", a[len]);
		if (len != n - 1)
			printf(", ");
					}
					printf("\n");
					}
