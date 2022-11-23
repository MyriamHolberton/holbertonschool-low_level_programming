#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h:
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
	nodes++;
	printf("%d\n", h->);
	h = h->next;
}
return (nodes);
}
