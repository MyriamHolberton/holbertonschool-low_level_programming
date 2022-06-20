#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - check the code
 * @a: input
 * @b: input
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
		*b = temp;
}
