#include "hash_tables.h"

/**
 * hash_table_print -prints a hash table.
 * @ht: pointer to hash table
 *
 * Return: No return.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int x = 0, y = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (x = y; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			temp = ht->array[x];
			while (temp)
			{
				printf("%s'%s': '%s'", y == 0 ? "" : ", ",
					   temp->key, temp->value), y++;
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
