#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * @s: starting address of the memory with a specific value
 * @b: the prefered value
 * @n: bytes to be changed
 *
 * Return: changed array withnew value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
