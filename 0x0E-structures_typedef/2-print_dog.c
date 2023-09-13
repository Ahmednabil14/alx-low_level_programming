#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: pointer to struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	if (d == NULL)
	{
		printf(" ");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->age == '\0')
	{
		printf("0");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
}
