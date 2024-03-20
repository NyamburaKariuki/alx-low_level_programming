#include "lists.h"
/**
 * free_dlistint - function that frees doubly linked list
 * @head: poiner to the head of the list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		/*traverse through the list*/
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
