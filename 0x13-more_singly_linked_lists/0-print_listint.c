#include "lists.h"
/**
 * print_listint - Write a function that prints all the elements of a listint_t
 * @h: pointer to linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *x = h;

	while (x)
	{
		printf("%d\n", x->n);
		x = x->next;
		i++;
	}
	return (i);
}
