#include "main.h"
/**
   *times_table - prints the 9 times table
    * Description: using printf function
     * Return: Always 0 (Success)
      */

void times_table(void)
{
	int i, j, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
		_putchar(m + '0');
		_putchar(',');
		_putchar(' ');
		}
	
	_putchar('\n');
	}

}

