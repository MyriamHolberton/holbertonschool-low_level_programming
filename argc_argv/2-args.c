#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size of argc
 * @argv: name of app + any other arguments
 *
 * Return: Always 0 (Succes)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}

