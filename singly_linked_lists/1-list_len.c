#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "lists.h"

/**
* list_len - returns the number of elements in a linked list_t list
* @h: a linked list
*
* Return: the number of elements of a list
*/

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{

	h = h->next;
	count++;
}
return (count);
}
