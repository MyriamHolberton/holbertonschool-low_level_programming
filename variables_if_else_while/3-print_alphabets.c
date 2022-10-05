#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - fonction principale
 *
 * exercice sur les conditions
 * Return: retourne un zero
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
