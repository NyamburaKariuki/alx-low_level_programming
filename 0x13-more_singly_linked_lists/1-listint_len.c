#include "lists.h"
/**
  *listint_len - function to return the number of elements
  *@h: singly linked list
  *Return: the number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;

	}
	return (counter);
}
