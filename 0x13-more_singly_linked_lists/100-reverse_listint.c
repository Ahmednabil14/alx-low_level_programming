#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to first node
 * Return: function that reverses a listint_t linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = 0, *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		(*head) = next;
	}
	*head = prev;
	return (*head);
}
