#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* *string_toupper - changes all lowercase letters of a string to uppercase
* @p: input
*
* Return: always 0 (success)
*/
char *string_toupper(char *p)
{
int c = 0;
while (p[c])
{
if (p[c] >= 97 && p[c] <= 122)
{
	p[c] -= 32;
}
c++;
}
return (p);
}
