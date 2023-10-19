#include "main.h"

/**
 *reverse_array - function to reverse an array
 *@a: our array
 *@n: no of characters in array
 *Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int t, i;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}

