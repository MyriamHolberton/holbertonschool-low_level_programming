#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* *_strcat - prints half of a string
* @dest: input
* @src: input
*
* Return: always 0 (success)
*/
char *_strcat(char *dest, char *src)
{
int len = 0;
int i;

while (dest[len])
{
	len++;
}
for (i = 0; src[i] != 0; i++)
{
dest[len] = src[i];
len++;
}
dest[len] = '\0';
return (dest);
}
