#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - that reads a text file and prints stdout
 * @filename: variable pointer
 * @letters: number of letters
 *
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t prev, lenp;
	int fd;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	prev = open(filename, O_RDONLY);

	if (prev == -1)
	{
		free(buffer);
		return (0);
	}

	lenp = read(prev, buffer, letters);
	fd = write(STDOUT_FILENO, buffer, lenp);

	close(prev);
	return (fd);
}
