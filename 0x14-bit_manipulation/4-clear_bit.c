#include "main.h"
/**
  *clear_bit - function to set a bit to 0 at index
  *@n: pointer to an integer
  *@index: of n
  *Return: Always 0 (Success)
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index >= 64)
	{
		return (-1);
	}
	x = ~(1UL << index);
	*n &= x;
	return (1);
}
