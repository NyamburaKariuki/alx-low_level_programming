#include "lists.h"

/**
 *dlistint_len - returns the number of elements in a dlist
 * @h: poiner to the head of the list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	/*while list is not empty*/
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
