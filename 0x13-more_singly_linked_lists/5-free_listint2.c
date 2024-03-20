#include "lists.h"
/**
  *free_listint2 - function to free list assign head to NULL
  *@head: head of a linked list
  *Return: Always 0 (Success)
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
