#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t
 * @head: pointer to pointer
 * @n: tha value
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		temp->next = newnode;
		newnode->next = 0;
		newnode->n = n;
		temp = *head;
		if (*head == NULL)
		{
			*head = newnode;
		}
		else
		{
			while (temp->next)
			{
				temp = temp->next;
			}
			temp->next = newnode;
		}
	}
	return (newnode);
}
