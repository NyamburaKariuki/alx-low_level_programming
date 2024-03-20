#include "lists.h"
/**
 * sum_dlistint - return the sum of all the data in a dlinked list
 * @head: poiner to the head of the list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	/*Traverse the lists*/
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
