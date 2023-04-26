#include "main.h"

/**
 * main -  copy content of a file to another
 * @argc: number of arguements supplied
 * @argv: arry of pointers
 * Return 0 (success)
 */
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
if (fd_to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: can't read to     %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(fd_from, buffer, 1024);
fd_to = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buffer);
close(fd_from);
close(fd_to);

return (0);
}
