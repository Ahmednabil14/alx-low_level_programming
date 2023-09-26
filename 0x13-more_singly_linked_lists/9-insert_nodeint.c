#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position.
 * @head: pointer to pointer of linked list
 * @idx: the position
 * @n: the data
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0, i;
	listint_t *newnode, *temp;

	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	while (*head != NULL)
	{
		*head = (*head)->next;
		count++;
	}
	if (idx > count)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < idx - 1 ; i++)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = temp->next;
		newnode->n = n;
		return (newnode);
	}
	return (newnode);
}
