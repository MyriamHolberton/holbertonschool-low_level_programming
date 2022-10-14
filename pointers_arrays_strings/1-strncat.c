#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* *_strncat - concatenates two strings
* @dest: input
* @src: input
* @n: input
*
* Return: always 0 (success)
*/
char *_strncat(char *dest, char *src, int n)
{
int len = 0;
int t;

while (dest[len])
{
	len++;
}
for (t = 0; t < n && src[t] != '\0'; t++)
{
dest[len] = src[t];
len++;
}
dest[len + 1] = src[t];
return (dest);
}
