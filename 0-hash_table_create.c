#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: NULL incase anything fails
 *         newly created hash table incase of success
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int x;

	if (size < 1)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	for (x = 0; x < size; x++)
		new_table->array[x] = NULL;
	new_table->size = size;
	return (new_table);
}
