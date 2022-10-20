#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse
* @s: input
*
* Return: always 0 (success)
*/

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
}
