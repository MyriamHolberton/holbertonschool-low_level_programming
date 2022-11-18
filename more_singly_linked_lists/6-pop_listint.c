#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: a pointer to the head of the listint_t list
*
* Return: if the linked list is empty -0 ortherwise the head node's data (n)
*/

int pop_listint(listint_t **head)
{
listint_t *tmp;
int r = 0;

if (head == NULL)
	return (0);

tmp = *head;
r = (*head)->n;
*head = (*head)->next;
free(tmp);

return (r);
}
