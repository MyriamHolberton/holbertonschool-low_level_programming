#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* swap_int - entry point
* @a: int
* @b: int
*
* Return: always 0 (success)
*/
void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
