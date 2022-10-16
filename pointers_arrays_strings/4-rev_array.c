#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: input
* @n: input
*
* Return: always 0 (success)
*/
void reverse_array(int *a, int n)
{
int *p, i, aux, t;
p = a;

for (i = 1; i < n; i++)
{
p++;
}
for (t = 0; t < i / 2; t++)
{
aux = a[t];
a[t] = *p;
*p = aux;
p--;
}
}
