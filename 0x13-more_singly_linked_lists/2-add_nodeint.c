#include "lists.h"
/**
  *add_nodeint- function to add node at the start of a list
  *@head: head of the list
  *@n: integer: data of the node
  *Return: Always 0 (Success)
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
