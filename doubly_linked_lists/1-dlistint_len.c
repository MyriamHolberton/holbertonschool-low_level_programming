#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "lists.h"

/**
 * dlistint_len - counts the number of elements of a dlistint_t list
 * @h: the head of the dlistint_t list
 *
 * Return: the number of elements in dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
	nodes++;
	h = h->next;
}
return (nodes);
}
