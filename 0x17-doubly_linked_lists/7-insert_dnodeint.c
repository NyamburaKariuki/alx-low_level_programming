#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: poiner to the head of the list
 * @idx: node index
 * @n: integer
 * Return: number of nodes
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x;
	dlistint_t *temp, *pt;

	pt = *h;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	/*create new node*/
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		temp->next = *h;
		if (*h != NULL)
			(*h)->prev = temp;
		*h = temp;
		return (temp);
	}
	for (x = 0; x < idx - 1 && pt != NULL; x++)
	{
		pt = pt->next;
	}
	if (pt == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->next = pt->next;
	temp->prev = pt;
	if (pt->next)
		pt->next->prev = temp;
	pt->next = temp;
	return (temp);
}
