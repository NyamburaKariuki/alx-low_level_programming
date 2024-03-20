#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
**_strdup - return pointer to an array of duplicate
*@str: string
*Return: Always 0 (Success)
*/

char *_strdup(char *str)
{
	char *s;
	int i;
	int x = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	i++;
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		s[x] = str[x];
	return (s);
}
