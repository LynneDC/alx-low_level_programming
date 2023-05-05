#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to first node in the list
 * @index: the node to be returned
 *
 * Return: pointer to thr node, or NULL if  node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
