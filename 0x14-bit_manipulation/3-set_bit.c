#include "main.h"
/**
  *set_bit - function to set bit to 1 at an index
  *@n:pointer to an integer
  *@index: index of a bit
  *Return: Always 0 (Success)
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}

