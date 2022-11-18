#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: a pointer to the head of the listint_t list
*
* Return: nothing
*/

void free_listint(listint_t *head)
{
listint_t *tmp;

while (head)
{

	tmp = head;
	head = head->next;
	free(tmp);
}
free(head);
}
