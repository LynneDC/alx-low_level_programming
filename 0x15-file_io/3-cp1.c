/**
 26  * main -  copy content of a file to another
 27  * @argc: number of arguements supplied
 28  * @argv: arry of pointers
 29  * Return 0 (success)
 30  */
 31 int main(int argc, char *argv[])
 32 {
 33 int fd_from;
 34 int fd_to;
 35 int r, w;
 36 char *buffer;
 37
 38 if (argc != 3)
 39 {
 40 dprintf(STDERR_FILENO, "Usage:cp file_from file_to\n");
 41 exit(97);
 42 }
 43 buffer = create_buffer(argv[2]);
 44 fd_from = open(argv[1], O_RDONLY);
 45 r = read(fd_from, buffer, 1024);
 46 fd_to = open(argv[2], O_CREAT |  O_WRONLY | O_TRUNC, 0644);
 47 do {
 48 if (fd_from == -1 || r == -1)
 49 {
 50 dprintf(STDERR_FILENO, "Error: can't read to %s\n", argv[1])    ;
 51 free(buffer);
 52 exit(98);
 53 }
