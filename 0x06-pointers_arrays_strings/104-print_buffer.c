#include "main.h"
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
		for (i = 0; i < 10; 1++)


