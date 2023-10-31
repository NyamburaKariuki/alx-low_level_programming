#include "main.h"
#include <stdlib.h>
/**
**create_array - create an array of size and assign char c
*@size: size of the array
*@c: char to assign
*Return: Always 0 (Success)
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
