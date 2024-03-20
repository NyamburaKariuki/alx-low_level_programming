#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a list
 * @n: integer
 *@head: pointer to the head pointer
 * Return: number of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	return (NULL);
	/*create a new node*/
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	temp->next = *head;
	if ((*head) != NULL)
		(*head)->prev = temp;
	(*head) = temp;
	return (temp);
}
