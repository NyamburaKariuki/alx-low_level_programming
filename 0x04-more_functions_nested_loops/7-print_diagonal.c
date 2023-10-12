#include "main.h"
/**
 *print_diagonal - function print a diagonal line
 *@n: parameter to print '\'
 *Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			else
			{
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
