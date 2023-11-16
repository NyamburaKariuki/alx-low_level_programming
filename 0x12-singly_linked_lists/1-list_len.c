#include "lists.h"
/**
  *list_len - function to get the number of elements
  *@h: alinked list
  *Return: Always 0 (Success)
  */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
