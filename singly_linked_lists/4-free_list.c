#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "lists.h"

/**
* free_list - frees a list_t list
* @head: the pointer to the first node of linked list
*
* Return: nothing
*/

void free_list(list_t *head)
{
list_t *tmp;

while (head != NULL)
{
	tmp = head;
	head = head->next;
	free(tmp->str);
	free(tmp);
}
free(head);
}
