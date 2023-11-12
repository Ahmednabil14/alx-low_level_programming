#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list.
 * @head: pointer to pointer to list
 * @n: the data to add
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));

if (!new || !head)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
while ((*head)->next != NULL)
{
*head = (*head)->next;
}
new->prev = *head;
(*head)->next = new;
return (new);
}
