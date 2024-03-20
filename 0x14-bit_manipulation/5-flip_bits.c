#include "main.h"
/**
  *flip_bits - function to flip bits
  *@n:integer
  *@m: integer
  *Return: Always 0 (Success)
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int result = n ^ m;

	while (result)
	{
		counter = counter + (result & 1);
		result >>= 1;
	}
	return (counter);
}
