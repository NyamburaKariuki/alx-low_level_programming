#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes node at index
 * @head: poiner to the head of the list
 * @index: index of the node
 * Return: 1 (on success) 0r -1 (on failre)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x;
	dlistint_t *tp = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = tp->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(tp);
		return (1);
	}
	for (x = 0; tp != NULL && x < index; x++)
	{
		tp = tp->next;
	}
	if (tp == NULL)
	{
		return (-1);
	}
	if (tp->prev)
	{
		tp->prev->next = tp->next;
	}
	if (tp->next)
	{
		tp->next->prev = tp->prev;
	}
	free(tp);
	return (1);
}


