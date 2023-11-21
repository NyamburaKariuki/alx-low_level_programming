#include "lists.h"
/**
  *delete_nodeint_at_index - function to delete a node at index
  *@head: head node
  *@index: position of the node
  *Return: 1 on success
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *current;
	unsigned int x;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	current = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (current == NULL || current->next == NULL)
			return (-1);
		current = current->next;
	}
	if (current->next == NULL)
		return (-1);
	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);
}
