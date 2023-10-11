#include "main.h"
/**
* _isalpha - checks for alphabets
* @c: parameter to be checked
* Return: Always 0 (Success) or 1
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
