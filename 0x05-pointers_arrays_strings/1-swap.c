#include "main.h"

/**
*swap_int - function to swap two inetegers
*@a: One parameter
*@b: parameter to be swapped with a
*Return: Always 0 (Success)
*/
void swap_int(int *a, int *b)
{
	int p;

	p = *b;
	*b = *a;
	*a = p;

}


