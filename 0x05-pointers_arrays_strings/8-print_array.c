#include "main.h"
#include <stdio.h>
/**
*print_array - function to print arrays
*@a: is out string
*@n: is our array size
*Return: Always 0 (Success)
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}		printf("\n");
}
