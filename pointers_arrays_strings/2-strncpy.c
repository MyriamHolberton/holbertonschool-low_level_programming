#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* *_strncpy - concatenates two strings
* @dest: input
* @src: input
* @n: input
*
* Return: always 0 (success)
*/
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;
int b = 0;

while (src[b])
{
	b++;
}
while (a < n && src[a])
{
dest[a] = src[a];
a++;
}
while (a < n)
{

dest[a] = '\0';
a++;
}
return (dest);
}
