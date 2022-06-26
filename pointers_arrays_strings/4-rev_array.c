#include "main.h"
#include <stdio.h>

/**
 * reverse_array - it is the main function
 * @a: input
 * @n: input
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	n--;
	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
