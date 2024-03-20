#include "main.h"
/**
* print_last_digit - Prints the last digit of a number
* @n: parameter to be used
* Return: Always 0 (Success)
*/

int print_last_digit(int n)
{
	int p;

	p = n % 10;
	if (n < 0)
		p = -p;
	_putchar(p + '0');
	return (p);
}
