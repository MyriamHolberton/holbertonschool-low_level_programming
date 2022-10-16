#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* *_strcmp - compares two strings
* @s1: input
* @s2: input
*
* Return: always 0 (success)
*/
int _strcmp(char *s1, char *s2)
{
int a = 0;
int b = 0;
int c = 0;
int r = 0;
int l;

while (s1[a])
{
	a++;
}
while (s2[b])
{
	b++;
}
if (a <= b)
{
l = a;
}
else
{
l = b;
}
while (c <= l)
{
	if (s1[c] == s2[c])
	{
		c++;
		continue;
	}
	else
	{
	r = s1[c] - s2[c];
	break;
	}
	c++;
}
return (r);
}
