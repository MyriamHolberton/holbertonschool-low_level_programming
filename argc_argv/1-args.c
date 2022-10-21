#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 0)

	printf("%d\n", argc - 1);
	return (0);
}
