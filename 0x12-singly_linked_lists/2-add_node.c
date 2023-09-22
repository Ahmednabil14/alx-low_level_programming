#include "lists.h"
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: address of pointer
 * @str: string
 * Return: address of node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *s;
	int i = 0;

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
	{
		i++;
	}
	newnode->str = s;
	newnode->next = *head;
	*head = newnode;
	newnode->len = i;
	return (newnode);
}
