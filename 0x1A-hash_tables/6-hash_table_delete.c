#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *current = ht;
	hash_node_t *point, *temp;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			point = ht->array[x];
			while (point != NULL)
			{
				temp = point->next;
				free(point->key);
				free(point->value);
				free(point);
				point = temp;
			}
		}
	}
	free(current->array);
	free(current);
}
