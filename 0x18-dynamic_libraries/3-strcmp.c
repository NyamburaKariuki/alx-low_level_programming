#include "main.h"
#include <string.h>
/**
*_strcmp - function to compare 2 strings
*@s1: the first string
*@s2: the second string
*Return: Always 0 (Success)
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
return (*s1 - *s2);
}
