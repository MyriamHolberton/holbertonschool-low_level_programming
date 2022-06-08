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
printf("the size of a char is: %lu.\n", (unsigned long)sizeof(b));
printf("the size of an int is: %lu.\n", (unsigned long)sizeof(a));
printf("the size of a long int is: %lu.\n", (unsigned long)sizeof(d));
printf("the size of a long long int is: %lu.\n", (unsigned long)sizeof(e));
printf("the size of a char is: %lu.\n", (unsigned long)sizeof(f));
return (0);
}
