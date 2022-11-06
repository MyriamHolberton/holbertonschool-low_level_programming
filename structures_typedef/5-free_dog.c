
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "dog.h"

/**
* free_dog - frees dogs
* @d: input
*
* Return: nothing
*/

void free_dog(dog_t *d)
{

if (d == NULL)
return;

free (d->owner);
free (d->name);
free (d->age);
free (d);
}
