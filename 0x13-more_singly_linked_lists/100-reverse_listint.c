#include "lists.h"

/**
  *rerse_listint - function to reverse a list
  *@head: head node
  *Return: Always 0 (Success)
  */

listint_t *reverse_listint(listint_t **head)
{
        listint_t *variable, *n;

        variable = NULL;
        n = NULL;
        while (*head != NULL)
        {
                n = (*head)->next;
                (*head)->next = variable;
                variable = *head;
                *head = n;
        }
        *head = variable;
        return (*head);
}
