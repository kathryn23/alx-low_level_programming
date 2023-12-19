#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>


#define BUFFER_SIZE (1024)
/**
 * main- function av y av
 * @argc: file
 * @argv: number of letters of the file
 * Return: numbers of letters or zero it fails
 */
int main(int argc, char *argv[])
{
	int fd_src, fd_dest, bytes_read, bytes_write, close_from, close_to;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);

	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((bytes_read = read(fd_src, buffer, BUFFER_SIZE)) != '\0')
	{
		if (bytes_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);
		bytes_write = write(fd_dest, buffer, bytes_read);
		if (bytes_write == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	close_from = close(fd_src);
	if (close_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_src), exit(100);
	close_to = close(fd_dest);
		if (close_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_dest), exit(100);
	return (0);
}

