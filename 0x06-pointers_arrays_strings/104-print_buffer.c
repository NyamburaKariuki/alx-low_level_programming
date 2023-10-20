#include "main.h"
#include <stdio.h>
/**
 *print_buffer - function to print a buffer
 *@b: our buffer
 *@size: size of the buffer
 *Return: Always 0 (Success
 */
void print_buffer(char *b, int size)
{
	int x, i, j;

	x = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		j = size - x < 10 ? size - 0 : 10;
		printf("%08x: ", x);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + x + i));
			else
				printf(" ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + x + 1);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		x += 10;
	}
}


