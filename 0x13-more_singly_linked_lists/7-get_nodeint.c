#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: pointer to pointer of linked list
 * @index: the position
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0, i;
	listint_t *temp;

	temp = head;
	if (head == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		head = head->next;
		count++;
	}
	if (index > count)
	{
		return (NULL);
	}
	for (i = 0 ; i < index ; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
