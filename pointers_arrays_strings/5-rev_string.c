#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* rev_string - reverses a string
* @s: input
*
* Return: always 0 (success)
*/
void rev_string(char *s)
{
int a = 0;
int b = 0;
int tmp = 0;

while (s[a] != '\0')
{

	a++;
}

	for (a = a - 1; a >= b; a--)
{
	tmp = s[b];
	s[b] = s[a];
	s[a] = tmp;
	b++;
}
}
