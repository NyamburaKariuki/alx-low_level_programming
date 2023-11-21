#include "lists.h"

/**
  *insert_nodeint_at_index - function to insert node at index
  *@head: head node
  *@idx: index of a node
  *@n: integer. data at node
  *Return: adress of the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int i;
	listint_t *current = *head;

	if (head == NULL || (idx > 0 && *head == NULL))
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}


