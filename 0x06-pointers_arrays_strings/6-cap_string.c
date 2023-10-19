#include "main.h"
/**
 **cap_string - function to Capitalize words of a string
 *@str: our string
 *Return: Always 0 (Success)
 */

char *cap_string(char *str)
{
	int x = 0;

	while (str[x])
	{
		while (!(str[x] >= 'a' && str[x] <= 'z'))
		{
			if (str[x - 1] == ',' ||
			str[x - 1] == ';' ||
			str[x - 1] == '.' ||
			str[x - 1] == '}' ||
			str[x - 1] ==  '!' ||
			str[x - 1] ==  '?' ||
			str[x - 1] == '"' ||
			str[x - 1] == ',' ||
			str[x - 1] == '(' ||
			str[x - 1] == ')' ||
			str[x - 1] == '{' ||
			x == 0)
			str[x] -= 32;
			x++;
		}
	}
			return (str);
}
