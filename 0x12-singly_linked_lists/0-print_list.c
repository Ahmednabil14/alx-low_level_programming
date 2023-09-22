#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: struct
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *x = h;
	size_t i = 0;

	while (x)
	{
		if (x->str != NULL)
		{
			printf("[%d] %s\n", x->len, x->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		i++;
		x = x->next;
	}
	return (i);
}
