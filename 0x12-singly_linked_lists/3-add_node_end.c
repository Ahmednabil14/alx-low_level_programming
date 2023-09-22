#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: contain the address of first node
 * @str: string
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	int i = 0;
	char *s;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	s = strdup(str);
	if (s == NULL)
	{
		free(newnode);
		return (NULL);
	}
	while (str[i])
		i++;
	newnode->next = 0;
	newnode->str = s;
	newnode->len = i;
	temp = *head;
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = newnode;
	}
	return (*head);
}
