#include "main.h"
/**
*_pow_recursion - function to print the power of an integre by another integer
*@x: integer
*@y: integer to power
*Return: Always 0 (Success)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
