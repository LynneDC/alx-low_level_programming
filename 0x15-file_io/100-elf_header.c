nclude "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: null terminated string
 * 
 * Return: 1(success), -1(failure0
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int w = 0;
	int len = 0;

	if (filename == NULL)
		return(-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++);
		;
	}
	fr = open(filename, O_CREAT| O_RDWR | O_TRUNC, 06000);
	w = write(fd, text_content, len);

	if(fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
