#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - main function
 *
 * conditions and variables
 * Return: return always success
 */

int main(void)
{

	char ch;


	for (ch = '0'; ch <= '9'; ch++)
	{
	putchar(ch);
	if (ch != '9')

	{
		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');
		return (0);
}
