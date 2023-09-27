#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: pointer to the fisrt node
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (*head == NULL || !head)
	{
		return (0);
	}
	temp = *head;
	x = temp->n;
	*head = (*head)->next;
	free(temp);
	return (x);
}
