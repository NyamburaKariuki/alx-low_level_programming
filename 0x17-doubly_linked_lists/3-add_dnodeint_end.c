#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of dlinked list
 * @head: poiner toa pointer to the head of the list
 * @n: inetger
 * Return: number added node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *tp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	/*create new node*/
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	/*store address of tp to head*/
	tp = *head;
	/*if the list does not exist*/
	if (*head == NULL)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		while (tp->next != NULL)
			tp = tp->next;
		tp->next = temp;
	}
	temp->prev = tp;
	return (temp);
}
