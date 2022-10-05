#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - main function
 *
 * Return: Always (Success)
 */

int main(void)
{
	char ch;


	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')

	{
		putchar(ch);
	}
		putchar('\n');
		return (ch);
	}
}

