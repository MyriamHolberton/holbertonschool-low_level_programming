
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
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *cont;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[i])
	i++;
	while (s2[k])
	k++;

	if (n >= k)
	l = i + k;
	else
	l = i + n;

	cont = malloc(sizeof(char) * l + 1);

	if (cont == NULL)
	return (NULL);

	k = 0;
	while (j < l)
	{
	if (j <= i)
	cont[j] = s1[j];
	if (j >= i)
	{
	cont[j] = s2[k];
	k++;
	}
	j++;
	}
	cont[j] = '\0';
	return (cont);
}
