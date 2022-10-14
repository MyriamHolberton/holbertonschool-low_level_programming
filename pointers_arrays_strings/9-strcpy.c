#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* *_strcpy - prints half of a string
* @dest: input
* @src: input
*
* Return: always 0 (success)
*/
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;

while ((dest[i] = src[i]) != '\0')
	i++;

return (dest);
}
