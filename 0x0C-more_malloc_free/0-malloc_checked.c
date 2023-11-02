#include <stdlib.h>
#include "main.h"
/**
 **malloc_checked - function to allocate memory
 *@b: integer to allocate memory to
 *Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
