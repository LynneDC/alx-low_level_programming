#include "lists.h"

/**
 * pop_listint- a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n)
 * @head: pointer to first element
 *
 * Return: the head node’s data (n)
 * 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (i);
}
