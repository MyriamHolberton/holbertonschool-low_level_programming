
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: input
* @height: input
*
* Return:...
*/

int **alloc_grid(int width, int height)
{
int i, j;
int **a;
if (width <= 0)
return (NULL);
if (height <= 0)
return (NULL);
a = (int **)malloc(sizeof(int *) * height);
if (a == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
a[i] = (int *)malloc(sizeof(int) * width);
if (a[i] == NULL)
{
for (j = 0; j < width; j++)
free(a[j]);
free(a);
return (NULL);
}
for (j = 0; j < width; j++)
{
a[i][j] = 0;
}
}
return (a);
}
