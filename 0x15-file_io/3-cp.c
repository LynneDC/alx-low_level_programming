#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/**
 * create_buffer - allocates 1024 bytes for a buffer.
 * @file: buffer storing chars
 * Return: pointer to buffer
 */

char *create_buffer(char *file)
{
    char *buffer;
    buffer = malloc(sizeof(char) * 1024);

    if (buffer == NULL)
    {
	    dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
	    exit(99);
    }
    return (buffer);
    }

int main(int argc, char *argv[])
{
	int fd_from; 
	int fd_to;
	int r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage:cp file_from file_to\n");
        exit(97);
	}
	buffer = create_buffer(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	r = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_CREAT |  O_WRONLY | O_TRUNC, 0644);
do {
	if (fd_from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read to %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	w = write(fd_to, buffer, r);
	if(fd_to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read to     %s\n", argv[2]);	
		free(buffer);
		exit(99);
	}
	r = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_WRONLY | O_APPEND);
}while (r > 0);
free(buffer);
close(fd_from);
close(fd_to);

return (0);
}

