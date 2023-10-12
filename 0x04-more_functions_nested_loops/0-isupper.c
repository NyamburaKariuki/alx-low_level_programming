#include "main.h"
/**
   * _isupper - function to check for an uppercase character
    * @c: parameter being tested
     * Return: Always 0 (Success)
      */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
