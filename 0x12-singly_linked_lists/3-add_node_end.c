#include "lists.h"
/**
 *_strlen - function to get the length of a string
 *@str:string
 *Return: Always 0 (Success)
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
  *add_node_end - function to add a node at the end of a list
  *@head: head of the linked list
  *@str: string to add
  *Return: Always 0 (Success)
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
	return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next)
		current = current->next;
	current->next = new;
	return (new);
}
