#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file 
 * @text_content: content to append
 * Description: function that appends text
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int size = 0, fd;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[size] != '\0')
	{
	  size++;
  }

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	write(fd, text_content, size);

	return (1);
}
