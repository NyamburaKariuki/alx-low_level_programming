#include "hash_tables.h"
/**
 * shash_table_create - function that creates a hash table.
 * @size: size /array.
 * Return: pointer to the created table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int x;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	new_table->array = malloc(sizeof(shash_node_t) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		new_table->array[x] = NULL;
	}
	return (new_table);
}

/**
 * create_node - creates a node for the hashtable.
 * @key: pointer to key.
 * @value: pointer to value.
 * Return: pointet to the new node
 */
shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);
new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
new_node->next = new_node->snext = new_node->sprev = NULL;
	return (new_node);
}

/**
 * sort_list - add a new node,
 * @table: pointer to sorted hash table.
 * @node: pointer to node to add.
 *
 * Return: No return.
 */
void sort_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *temp;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	temp = table->shead;
	while (temp != NULL)
	{
		if (strcmp(node->key, temp->key) < 0)
		{
			node->snext = temp;
			node->sprev = temp->sprev;
			temp->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		temp = temp->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: pointer to hash table
 * @key: pointer to key.
 * @value: pointer to the value
 * return: 1 it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	char *new;
	shash_node_t *new_node, *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new = strdup(value);
			if (value == NULL)
				return (0);
			free(temp->value);
			temp->value = new;
			return (1);
		}
		temp = temp->next;
	}
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	sort_list(ht, new_node);
	return (1);
}

/**
 * shash_table_get - gets a value associated with a key.
 * @ht: pointer to hash table.
 * @key: pointer to key
 * Return: value, or NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a hash table.
 * @ht: pointer to hash table
 * Return: No return.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char fl = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	temp = ht->shead;
	while (temp != NULL)
	{
		if (fl == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		fl = 1;
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse.
 * @ht: pointer to hash table
 * Return: No return.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char fl = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	temp = ht->stail;
	while (temp != NULL)
	{
		if (fl == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		fl = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete -  deletes a hash table.
 * @ht: pointer to hash table
 * Return: No return.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int x;
	shash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (x = 0; x < ht->size; x++)
	{
		while (ht->array[x] != NULL)
		{
			next = ht->array[x]->next;
			free(ht->array[x]->key);
			free(ht->array[x]->value);
			free(ht->array[x]);
			ht->array[x] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
