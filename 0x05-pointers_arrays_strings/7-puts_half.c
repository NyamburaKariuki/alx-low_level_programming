#include "main.h"
#include <string.h>

/**
*puts_half - function to half of the characters
*@str: String to be printed
*Return: Always 0 (Success)
*/

void puts_half(char *str)
{
	int a;
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 1)
	{
		a = (n - 1) / 2;
		a = a + 1;
	}
	else
	{
		a = n / 2;
	}
	for (; a < n; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

