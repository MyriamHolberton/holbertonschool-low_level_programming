#include <stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main-This is the main of my program
 * Return: Anything that respects the syntax
**/
int main(void)
{
char lit, e, q;
e= 'e';
q='q';

for (lit = 'a'; lit <= 'z'; lit++)
{
	if (lit != e && lit != q)
	putchar(lit);
}


	putchar(10);

	return (0);
} 
