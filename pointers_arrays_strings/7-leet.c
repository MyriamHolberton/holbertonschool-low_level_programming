#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* *leet - that encodes a string into 1337
* @p: input
*
* Return: always 0 (success)
*/
char *leet(char *p)
{
int a = 0, b = 0;
char r [5] = {'A', 'E', 'O', 'T', 'L'};
char n [5] = {'4', '3', '0', '7', '1'};
while (p[a])
{
b = 0;
while (b < 1)
{
if (p[a] == r[b] || p[a] - 32 == r[b])
{
p[a] = n[b];
}
b++;
}
a++;
}
return (p);
}
