#include "lists.h"
#include <stdlib.h>

/**
* listint_len -  a functio return number of elements in linked listint_t list
*
* @h: pointer
* Return: listint_t success
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;
const listint_t *current_node = h;

while (current_node != NULL)
{
	count++;
	current_node = current_node->next;
}
return (count);
}
