#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* *cap_string - capitalizes all words of a string
* @p: input
*
* Return: always 0 (success)
*/
char *cap_string(char *p)
{
int a = 0, i;
int cspc = 13;
char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};
while (p[a])
{
i = 0;
while (i < cspc)
{
if ((a == 0 || p[a - 1] == spc[i]) && (p[a] >= 97 && p[a] <= 122))
p[a] -= 32;
{
i++;
}
}
a++;
}
return (p);
}
