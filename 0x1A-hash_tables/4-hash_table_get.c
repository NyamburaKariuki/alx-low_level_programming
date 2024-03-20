#include "hash_tables.h"
/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: NULL If the key cannot be matched.
 *         value if retrieved
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int x;

	if (ht == NULL || key == NULL)
		return (NULL);
	x = key_index((const unsigned char *)key, ht->size);
	node = ht->array[x];
	for (; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}
	return (NULL);
}
