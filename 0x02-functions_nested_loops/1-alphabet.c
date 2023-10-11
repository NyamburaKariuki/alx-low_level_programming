#include "main.h"

/**
* main - Entry point
* Description: printing the alphabet using _putchar and functions
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	_putchar(a);
	_putchar('\n');
}
