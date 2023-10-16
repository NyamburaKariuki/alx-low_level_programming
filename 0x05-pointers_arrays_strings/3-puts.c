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
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}


