#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer to pointer of linkedlist
 * @index: the position
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *x, *y;
	unsigned int i = 0, count = 0;

	temp = x = *head;
	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	if (index > count)
		return (-1);
	while (x)
	{
		if (index == count)
		{
			x->next = 0;
			free(x);
			return (1);
		}
		if (i == index - 1)
		{
			y = x->next;
			x->next = y->next;
			free(y);
			return (1);
		}
		x = x->next;
		i++;
	}
	return (-1);
}
