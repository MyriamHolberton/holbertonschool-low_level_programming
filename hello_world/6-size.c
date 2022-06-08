#include <stdio.h>

/**
 *main-Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int a;
	char b;
	long int d;
	long long int e;
	float f;
printf("Size of a char: %lu.\n", (unsigned long)sizeof(b));
printf("Size of an int: %lu.\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu.\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(e));
printf("Size of a char: %lu.\n", (unsigned long)sizeof(f));
return (0);
}
