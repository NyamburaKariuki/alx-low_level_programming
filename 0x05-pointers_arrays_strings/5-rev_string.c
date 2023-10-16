#include "main.h"
#include <string.h>
/**
*rev_string - function that reverses a string
*@s: string
*Return: Always 0 (Success)
*/
void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	char b;

	for (i = 0; i < length / 2; i++)
	{
		b = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = b;
	}
}

