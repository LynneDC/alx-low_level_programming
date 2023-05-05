#include  "lists.h"

/**
 * *reverse_listint- function that reverses a listint_t linked list
 *  @head: pointer to the  first node
 *
 * Return: a pointer tothe first nodeof the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = next;
	}
	*head = a;
	return (*head);
}


