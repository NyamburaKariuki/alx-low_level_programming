#include "main.h"

/**
*print_alphabet_x10 - prototype function
* Description: Print the alphabet x10 times
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		_putchar(b);
	_putchar('\n');
	}
}
