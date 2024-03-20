#include "main.h"
#include <stdlib.h>

/**
 *count_words - function to count words
 *@s: string
 *Return: Always 0 (Success)
 */
int count_words(char *s)
{
	int c;
	int f = 0;
	int w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}
	return (w);
}
/**
 ***strtow - function to count words
 *@str: string
 *Return: Always 0 (Success)
 */

char **strtow(char *str)
{
	char **m, *tmp;
	int i, w, st, en;
	int l = 0, k = 0, c = 0;

	while (*(str + l))
		l++;
	w = count_words(str);
	if (w == 0)
		return (NULL);
	m = (char **) malloc(sizeof(char *) * (w + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				en = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (st < en)
					*tmp++ = str[st++];
				*tmp = '\0';
				m[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			st = i;
	}
m[k] = NULL;
return (m);
}


