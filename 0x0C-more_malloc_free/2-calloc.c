#include "main.h"
#include <stdlib.h>
/**
    **_calloc - function to allocate memory for an array
    *@nmemb: array
    *@size: size of the array
    *Return: Always 0 (Success)
    */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(ptr) + i) = 0;
	}
	return (ptr);
}
