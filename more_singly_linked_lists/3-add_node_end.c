#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: a pointer to the head of the list_t list
* @str: a string to be added to the the list_t
*
* Return: the adress of the new element or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_list, *tmp;

if (str != NULL)
{
new_list = malloc(sizeof(list_t));
if (new_list == NULL)
	return (NULL);

new_list->str = strdup(str);
new_list->len = strlen(str);
new_list->next = NULL;

if (*head == NULL)
{
	*head = new_list;
	return (*head);
}
else
{
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_list;
	return (tmp);
}
}
return (NULL);
}
