#include "lists.h"
/**
  *free_listint - function to free a list
  *@head: head of the list
  *Return: Always 0 (Success)
  */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
	node = head;
	head = head->next;
	free(node);
	}
}
