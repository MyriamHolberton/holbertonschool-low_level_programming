#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* *_strchr - locates a character in a string
* @s: input
* @c: input
*
* Return: always 0 (success)
*/
char *_strchr(char *s, char c)
{
int a;

for (a = 0; *(s + a); a++)
{

if (*(s + a) == c)
return (s + a);
}
if (*(s + a) == c)
return (s + a);
return (0);
}
