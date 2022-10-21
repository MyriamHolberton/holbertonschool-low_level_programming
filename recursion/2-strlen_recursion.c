#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* _strlen_recursion - returns the length of a string
* @s: input
*
* Return: always 0 (success)
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
	return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}
