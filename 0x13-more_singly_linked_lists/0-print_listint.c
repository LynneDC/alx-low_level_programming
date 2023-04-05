#include "lists.h"
#include <stdlib.h>

/**
 * print_listint -  a function that prints all the elements of a listint_t list
 *@h: pointer
 * @count: keep track of nodes printed
 *  * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
