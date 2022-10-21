#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int n1, n2, n3;

if (argc != 3)
{
	puts("Error");
	return (1);
}

n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
n3 = n1 *n2;

printf("%d\n", n3);

return (0);
}
