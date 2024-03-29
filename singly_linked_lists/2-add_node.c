#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list
* @head: a pointer to the head of the list_t list
* @str: a string to be added to the the list_t
*
* Return: the adress of the new element, otherwise NULL if failed
*/

list_t *add_node(list_t **head, const char *str)
{
char *dup;
int len;
list_t *new;

new = malloc(sizeof(list_t));
if (new == NULL)
	return (NULL);

dup = strdup(str);
if (dup == NULL)
{
	free(new);
	return (NULL);
}

for (len = 0; str[len];)
	len++;

new->str = dup;
new->len = len;
new->next = *head;
*head = new;
return (new);
}
