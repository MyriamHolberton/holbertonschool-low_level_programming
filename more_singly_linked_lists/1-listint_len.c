#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t list
* @h: a pointer to the head of the listint_t list
*
* Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
	nodes++;
	h = h->next;
}
return (nodes);
}
