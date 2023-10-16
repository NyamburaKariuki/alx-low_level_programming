#include "main.h"
#include <string.h>

/**
*puts2 - function to print every other character
*@str: character to be printed
*Return: Always 0 (Success)
*/
void puts2(char *str)
{
	int a;
	int b = 0;

while (str[b] != '\0')
{
	b++;
}
for (a = 0; a < b; a = a + 2)
{
	_putchar(str[a]);
}
	_putchar('\n');
}
