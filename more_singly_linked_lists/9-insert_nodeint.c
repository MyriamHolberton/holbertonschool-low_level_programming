#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: a pointer to the head of the listint_t list
* @idx: the index of the listint_t list where the new node should be added
* @n: the integer for the new node to contain
*
* Return: if the list is empty - 0
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *copy = *head;
unsigned int node;

new = malloc(sizeof(listint_t));
if (new == NULL)
	return (NULL);

new->n = n;

if (idx == 0)
{
	new->next = copy;
	*head = new;
	return (new);
}
for (node = 0; node < (idx - 1); node++)
{
	if (copy == NULL || copy->next == NULL)
		return (NULL);
	copy = copy->next;
}

new->next = copy->next;
copy->next = new;

return (new);
}
