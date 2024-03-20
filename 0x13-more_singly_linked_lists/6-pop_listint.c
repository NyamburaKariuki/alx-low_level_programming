#include "lists.h"
/**
  *pop_listint - function to delete head node
  *@head: pointer to the head node
  *Return: data of the deleted node
  */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
