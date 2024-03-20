#include "lists.h"
/**
  *free_list - function to free a list_t
  *@head: head of the list
  *Return: Always 0 (Success)
  */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}

