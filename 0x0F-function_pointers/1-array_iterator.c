#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *array_iterator - function to execute a function given as a parameter
 *on each element of an array
 *@array: pointer to an array
 *@size:size of the arrat
 *@action:Pointer to a function
 *Return: Always 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != 0 && size > 0)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
