#include "main.h"
/**
 *print_line - function to print a horizontal lin
 *@n:parameter to draw the line
 * Return: Always 0 (Success)
 */

void print_line(int n)
{	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

