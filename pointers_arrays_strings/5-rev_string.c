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
int i = 0;
int len = len(s);
int tmp = 0;
int j = 0;
if (s != NULL)
{
for (i = len - 1, j = 0; i >= len / 2; i--, j++)
{
	tmp = s[j];
	s[j] = s[i];
	s[i] = tmp;
}
}
}
