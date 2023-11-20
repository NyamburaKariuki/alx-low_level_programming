#include "lists.h"
/**
  *print_listint - function to print elements of a list
  *@h:singly linked list
  *Return: return the elements
  */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
