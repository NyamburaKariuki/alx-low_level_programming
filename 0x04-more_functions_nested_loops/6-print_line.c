#include "main.h"
/**
 *print_line - function to print a horizontal lin
 *@n:parameter to draw the line
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	for (n = 1; n > 0; n++)
	{
		_putchar('_');
		if (n <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}

