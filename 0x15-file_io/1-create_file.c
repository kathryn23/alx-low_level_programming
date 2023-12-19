#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: variable pointer
 * @text_content: content file
 * Description: Create a function that creates a file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int size = 0, fd;

	if (!filename)
	{
		return (-1);
	}

	if (!text_content)
		text_content = "";

	while (text_content[size] != '\0')
	{
		size++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd < 0)
	{
		return (-1);
	}

	write(fd, text_content, size);
	return (1);
}
