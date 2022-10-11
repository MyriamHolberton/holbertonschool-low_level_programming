#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* _strlen - returns the length of a string
* @s: input
*
* Return: always 0 (success)
*/
int _strlen(char *s)
{
int c = 0;

while (s[c] != '\0')
	c++;

return (c);
}


