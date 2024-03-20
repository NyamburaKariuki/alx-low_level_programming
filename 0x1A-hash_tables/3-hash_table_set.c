#include "hash_tables.h"

/**
 * hash_table_set - Add  element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: failure - 0.
 *        success - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp;
	char *valuecopy;
	unsigned long int ind, x;

	if (ht == NULL || *key == '\0' || key == NULL || value == NULL)
		return (0);

	valuecopy = strdup(value);
	if (valuecopy == NULL)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	for (x = ind; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = valuecopy;
			return (1);
		}
	}

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
	{
		free(valuecopy);
		return (0);
	}
	temp->key = strdup(key);
	if (temp->key == NULL)
	{
		free(temp);
		return (0);
	}
	temp->value = valuecopy;
	temp->next = ht->array[ind];
	ht->array[ind] = temp;

	return (1);
}
