#include "lists.h"
#include <stdlib.h>

/**
* print_listint -  a function that prints all the elements of a listint_t list
*@h: pointer
*Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t listint_t;

listint_t = 0;
while (h != NULL)
{
printf("%d\n", h->n);
listint_t++;
h = h->next;
}
return (listint_t);
}
