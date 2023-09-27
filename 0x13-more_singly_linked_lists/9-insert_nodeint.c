#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a position
 * @head: pointer to pointer of linked list
 * @idx: the position
 * @n: the data
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0, i = 0;
	listint_t *newnode, *temp, *x;

	temp = x = *head;
	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;
	if (newnode == NULL || !head || !*head)
	{
		free(newnode);
		return (NULL);
	}
	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (newnode);
	}
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (idx > count)
		return (NULL);
	while (x)
	{
		if (i == count)
		{
			x->next = newnode;
			return (newnode);
		}
		if (i == idx - 1)
		{
			newnode->next = x->next;
			x->next = newnode;
			return (newnode);
		}
		i++;
		x = x->next;
	}
	return (NULL);
}
