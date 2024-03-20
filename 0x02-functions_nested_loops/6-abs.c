#include "main.h"
/**
* _abs - gives the absolute number of an integer
* @n: parameter to be evaluated
* Return: Always 0 (Success)
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
		return (n);
}
