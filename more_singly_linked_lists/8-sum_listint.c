#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "lists.h"

/**
* sum_listint -  calculate the sum of all data (n) of listint_t list
* @head: a pointer to the head of the listint_t list
*
* Return: if the list is empty - 0
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
