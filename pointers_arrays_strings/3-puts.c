#include <stdio.h>
#include "main.h"

/**
* _puts - prints a string
* @str: input
*
* Return: always 0 (success)
*/
void _puts(char *str)
{
while (*str != '\0')
{
	_putchar(*str);
	str++;
}
	_putchar('\n');
}
