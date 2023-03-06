#include "main.h"
/**
 * _memcpy - a  function copies memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * @n: bytes
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
