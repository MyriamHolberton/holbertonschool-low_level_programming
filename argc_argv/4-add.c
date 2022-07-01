#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size of argc
 * @argv: name of app + any other arguments
 * Return: Always 0 (Succes)
 */

int main(int argc, char *argv[])
{
	int x = 0, i, y;

	for (i = 1; i < argc; i++)
	{
		for (y = 0; argv[i][y]; y++)
		{
			if (argv[i][y] < '0' || argv[i][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		x += atoi(argv[i]);
	}

	printf("%d\n", x);
	return (0);
}


