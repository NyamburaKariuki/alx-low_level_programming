#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
    **_realloc - function to reallocate memory block
    *@ptr:previous allocated memory
    *@old_size: allocated space for ptr
    *@new_size: new memory block
    *Return: Always 0 (Success)
    */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		p = malloc(new_size);
		if (p == NULL)
			return (p);
		for (i = 0; i < old_size; i++)
			p[i] = *((char *)ptr + 1);
		free(ptr);
	}
	return (p);
}

