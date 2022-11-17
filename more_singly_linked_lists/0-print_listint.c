#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: a pointer to the head of the listint_t list
*
* Return: the number of elements in a linked list
*/

size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
	nodes++;
	h = h->next;
}
return (nodes);
}
