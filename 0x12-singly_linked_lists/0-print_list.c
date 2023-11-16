#include "lists.h"
/**
 *print_list- function to print the elements of a lsit
 *@h: pointer to the first element
 *Return: Always 0 (Success)
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		counter++;
		h = h->next;
	}
	return (counter);
}

