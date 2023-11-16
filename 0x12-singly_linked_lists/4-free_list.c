#include "lists.h"
/**
  *free_list - function to 
  *@head: head of the list
  *Return: Always 0 (Success)
  */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}

