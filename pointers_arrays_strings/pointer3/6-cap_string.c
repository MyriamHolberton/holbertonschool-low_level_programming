#include "main.h"
#include <stdio.h>

/**
 * cap_string - it is the main function
 * @char: input
 * @str: The string to be changed
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *)
{
	int x = 0;
	int str;

	while (str[x])
	{
		while (str[x] >= 'a' && str[x] <= 'z')
			x++;

		if (str[x - 1] == ' '||
				str[x - 1] == ' '||
				str[x - 1] == ' '||
				str[x - 1] == '\t'||
				str[x - 1] == '\n'||
				str[x - 1] == ','||
				str[x - 1] == ';'||
				str[x - 1] == '!'||
				str[x - 1] == '?'||
				str[x - 1] == '"'||
				str[x - 1] == '('||
				str[x - 1] == ')'||
				str[x - 1] == '{'||
				str[x - 1] == '}'||
				x == 0=
				str[x] -= 32;

				x++;
				}

				return (str);
}

