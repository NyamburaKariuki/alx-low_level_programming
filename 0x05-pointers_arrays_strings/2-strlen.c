#include "main.h"
#include <string.h>

/**
*_strlen - function to check the length of a string
*@s: is the string
*Return: Always 0 (Success)
*/

int  _strlen(char *s)
{
	size_t l = 0;

	while (*s++)
		l++;
	return (l);
}


