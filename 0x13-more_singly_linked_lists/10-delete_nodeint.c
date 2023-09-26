#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer to pointer of linkedlist
 * @index: the position
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = *head;
	if (!*head || !head)
	{
		return (-1);
	}
	while (temp)
	{
		if (i == index)
		{
			free(temp);
			temp = temp->next;
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
