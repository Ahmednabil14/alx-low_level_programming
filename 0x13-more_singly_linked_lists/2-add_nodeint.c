#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t
 * @head: pointer to pointer
 * @n: the data
 * Return: pointer to linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->next = *head;
		newnode->n = n;
		*head = newnode;
	}
	return (newnode);
}
