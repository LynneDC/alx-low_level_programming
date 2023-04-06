#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list
 * @n: value of the new node
 * @head:points to the newe node
 * Return: pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);

	newnode->n = n;
	if (*head == NULL)
	newnode->next = NULL;

	else
	newnode->next = *head;
	(*head = newnode);
	return (*head);
}
