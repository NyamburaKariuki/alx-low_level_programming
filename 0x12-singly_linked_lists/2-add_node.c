#include "lists.h"
/**
  *add_node - function to add a node at the start of a list
  *@head:original list
  *@str: String to add to the node
  *Return: Always 0 (Success)
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *mem;
	int length = 0;

	mem = malloc(sizeof(list_t));
	if (mem == NULL)
		return (NULL);
	while (str[length])
		length++;
	mem->len = length;
	mem->str = strdup(str);
	mem->next = *head;
	*head = mem;
	return (mem);
}
