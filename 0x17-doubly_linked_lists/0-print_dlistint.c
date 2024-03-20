#include "lists.h"

/**
 * print_dlistint - prints all elements of a d linked list
 * @h: poiner to the head of the list
 * Return: no of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	/*when list is not empty*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		/*traverse to next node*/
		h = h->next;
	}
	return (i);
}
