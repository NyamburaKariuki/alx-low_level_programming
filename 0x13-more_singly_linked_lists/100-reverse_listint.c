#include "lists.h"


/**
 * reverse_listint - function that reverses a linked list.
 * @head: pointer to pointer to the head of linked list.
 * Return:  the pointer to first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *variable = *head;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if (variable->next == NULL)
	{
		*head = variable;
		return (*head);
	}
	else if (*head && (*head)->next)
	{
		listint_t *tmp = *head;
		*head = (*head)->next;
		reverse_listint(head);
		tmp->next->next = variable;
		tmp->next = NULL;
	}
	return (*head);
}
