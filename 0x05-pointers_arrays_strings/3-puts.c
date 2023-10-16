#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*_puts - function to check for an uppercase character
*@str : is the string
*Return: Always 0 (Success)
*/

void _puts(char *str)
{
	char n;

	while (*str++)
	{
		_putchar(*str);
		n++;
	}
	_putchar('\n');
}


