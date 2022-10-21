#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* check_prime - check if number is prime
* @n: input
* @i: input
*
* Return: 1 for prime or composite
*
*/

int check_prime(int n, int i)
{
	if (n <= 1)
	return (0);
	if (n % i == 0 && i > 1)
	return (0);
	if ((n / i) < i)
	return (1);
	return (check_prime(n, i + 1));
}

/**
* is_prime_number - returns 1 if a prime number otherwise return 0
* @n: input
*
* Return: always 0 (success)
*/

int is_prime_number(int n)
{
return (check_prime(n, 1));
}
