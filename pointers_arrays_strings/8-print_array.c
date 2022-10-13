#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* print_array - prints half of a string
* @a: input
* @n: input
*
* Return: always 0 (success)
*/
void print_array(int *a, int n)
{
int x = 0;

for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x != (n - 1))
{
printf(",");
}
}
printf("\n");
}
