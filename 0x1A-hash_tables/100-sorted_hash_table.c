#include "hash_tables.h"
/**
 * shash_table_create - function that creates a hash table.
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *new_hash_table;
unsigned long int i;

new_hash_table = malloc(sizeof(shash_table_t));
if (new_hash_table == NULL)
{
return (NULL);
}
new_hash_table->size = size;
new_hash_table->array = malloc(sizeof(shash_table_t *) * size);
if (new_hash_table->array == NULL)
{
free(new_hash_table);
return (NULL);
}
for (i = 0 ; i < size ; i++)
{
new_hash_table->array[i] = NULL;
}
return (new_hash_table);
}

/**
 * shash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key. value must be duplicated.
 *  value can be an empty strin
 * Return: 1 if it succeeded, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
shash_node_t *temp;
shash_node_t *new_node;

if (!ht || !key)
{
return (0);
}
index = key_index((const unsigned char *) key, ht->size);
temp = ht->array[index];
while (temp != NULL)
{
if (strcmp(key, temp->key) == 0)
{
free(temp->value);
temp->value = strdup(value);
return (1);
}
temp = temp->next;
}
new_node = malloc(sizeof(shash_node_t));
if (!new_node)
return (0);
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
/**
 * shash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index;
shash_node_t *temp;

if (!ht || !key)
{
return (NULL);
}
index = key_index((const unsigned char *) key, ht->size);
temp = ht->array[index];
while (temp)
{
if (strcmp(temp->key, key) == 0)
{
return (temp->value);
}
temp = temp->next;
}
return (NULL);
}
/**
 * shash_table_print - function that prints a hash table.
 * @ht: the hash table
 * Return: void
*/
void shash_table_print(const shash_table_t *ht)
{
unsigned long int i;
shash_node_t *temp;

if (!ht)
{
return;
}
printf("{");
for (i = 0 ; i < ht->size ; i++)
{
temp = ht->array[i];
while (temp)
{
if (temp->key)
{
printf("'%s': '%s'", temp->key, temp->value);
printf(", ");
}
temp = temp->next;
}
}
printf("}\n");
}
/**
 * shash_table_delete - Deletes a hash table.
 * @ht: the hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head;
	shash_node_t *node, *tmp;
	unsigned long int i;

	head = ht;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
/**
 * shash_table_print_rev - function that prints a hash table.
 * @ht: the hash table
 * Return: void
*/
void shash_table_print_rev(const shash_table_t *ht)
{
unsigned long int i;
shash_node_t *temp;

if (!ht)
{
return;
}
printf("{");
for (i = 0 ; i < ht->size ; i++)
{
temp = ht->array[i];
while (temp)
{
if (temp->key)
{
printf("'%s': '%s'", temp->key, temp->value);
printf(", ");
}
temp = temp->next;
}
}
printf("}\n");
}
