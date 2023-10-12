#include "main.h"

/**
*_isdigit - function to check for a digit
* @c: parameter being tested
*Return: Always 0 (Success)
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
