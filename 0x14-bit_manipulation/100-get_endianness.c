#include "main.h"
/**
  *get_endianness - function to get endiannes
  *Return: Always 0 (Success)
  */

int get_endianness(void)
{
	unsigned int x = 1;
	char *s = (char *) &x;

	if (*s)
	return (1);
	return (0);
}
