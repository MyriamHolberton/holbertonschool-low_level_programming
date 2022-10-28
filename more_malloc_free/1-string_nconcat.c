
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* string_nconcat - concatenates two strings
* @s1: input
* @s2: input
* @n: input
*
* Return: nothing
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, index;
	char *cont;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	for (index = 0; s1[index]; index++)
	len++;

	cont = malloc(sizeof(char) * (len + 1));

	if (cont == NULL)
	return (NULL);
	len = 0;

	for (index = 0; s1[index]; index++)
	cont[len++] = s2[index];
	cont[len] = '\0';
	return (cont);
}
