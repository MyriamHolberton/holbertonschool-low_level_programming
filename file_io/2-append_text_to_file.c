#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: a pointer to the name of the file to create
* @text_content: the string to add to the end of the file
*
* Return: if the function fails - -1.
*		  Otherwise - 1
*		  if the file doesn't exist the user lacks write permissions - -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
int len = 0, o, w;

if (filename == NULL)
	return (-1);

if (text_content != NULL)
{
	for (len = 0; text_content[len];)
		len++;
}

o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);

if (o == -1 || w == -1)
	return (-1);

close(o);

return (1);
}
