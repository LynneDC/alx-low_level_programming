#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
* *add_nodeint_end -add new node at the end of a list
* @head: pointer to a pointer
* @n:  where to insert the new element
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next)
temp = temp->next;
temp->next = new;
return (new);
}
