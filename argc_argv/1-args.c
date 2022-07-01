#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size of argc
 * @argv: name of app + any other arguments
 *
 * Return: Always 0 (Succes)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

