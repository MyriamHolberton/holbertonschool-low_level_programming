#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* *_memset - fills memory with a constant byte
* @s: input
* @b: input
* @n: input
*
* Return: always 0 (success)
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
*(s + a) = b;
}
return (s);
}
