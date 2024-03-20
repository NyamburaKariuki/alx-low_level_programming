#include "lists.h"
/**
  *get_nodeint_at_index - function to get the index of a node
  *@head: head node
  *@index: index of the node
  *Return: Always 0 (Success)
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	return (current);
}
