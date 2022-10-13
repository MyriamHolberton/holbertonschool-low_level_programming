#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* puts2 - prints every other character of  a string
* @str: input
*
* Return: always 0 (success)
*/
void puts2(char *str)
{
int a = 0;

while (str[a] != '\0')
{

if (a % 2 == 0)
{
	_putchar(str[a]);
}
	a++;
}
_putchar('\n');
}
