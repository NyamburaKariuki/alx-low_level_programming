#include "main.h"
#include <stdio.h>

/**
   * print_number - Entry point
    * @n: Parameter being tested
     * Return: Always 0 (Success)
      */
void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		n *= -1;
		a = n;
		_putchar('-');
	}
	a /= 10;
	print_number(a);
	_putchar((unsigned int) n % 10 + '0');
}
