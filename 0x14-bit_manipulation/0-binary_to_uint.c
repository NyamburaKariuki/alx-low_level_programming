#include "main.h"
/**
  *binary_to_uint - function to convert binary to int
  *@b: character either 0 or 1
  *Return: Always 0 (Success)
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		x = (x << 1) | (*b - '0');
		b++;
	}
	return (x);
}
