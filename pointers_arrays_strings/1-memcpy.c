#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* *_memcpy - copies memory area
* @dest: input
* @src: input
* @n: input
*
* Return: always 0 (success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
*(dest + a) = *(src + a);
}
return (dest);
}
