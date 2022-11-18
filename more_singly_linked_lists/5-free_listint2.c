#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "lists.h"

/**
* free_listint2 - frees a listint_t list
* @head: a pointer to the head of the listint_t list
*
* Return: sets the head to NULL
*/

void free_listint2(listint_t **head)
{
listint_t *tmp;

if (head)
{
if (*head)
{
	tmp = (*head);
	*head = (*head)->next;
	free(tmp);
}
else
{
return;
}
free(*head);
head = 0;
}
}
