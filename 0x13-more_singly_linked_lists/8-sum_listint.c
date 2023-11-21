#include "lists.h"
/**
  *sum_listint - function to return the sum of data in nodes
  *@head: head node
  *Return: sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
