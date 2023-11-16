#include "lists.h"
/**
  *free_list - function to free a list_t
  *@head: head of the list
  *Return: Always 0 (Success)
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head == NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

