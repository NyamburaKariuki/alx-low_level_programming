#include "main.h"
/**
* _islower - checkc for lowercase character
* @c: Parameter to be checked
*Return: 1 (successs) or 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
