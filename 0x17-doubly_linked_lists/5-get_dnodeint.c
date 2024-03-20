#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: poiner to the head of the list
 * @index: index of the node
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int x;
	/*traverse the list upto index*/
	for (x = 0; temp != NULL && x < index; x++)
	{
		temp = temp->next;
	}
	/*if index out of bounds or list is empty*/
	if (temp == NULL || x < index)
	{
		return (NULL);
	}
	return (temp);
}
