#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* puts_half - prints half of a string
* @str: input
*
* Return: always 0 (success)
*/
void puts_half(char *str)
{
int i = 0;
int len = 0;
while (str[i] != '\0')
{
	i++;
	len++;
}

for (i = (len + 1) / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
