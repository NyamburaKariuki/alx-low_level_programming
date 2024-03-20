#include "main.h"
int natural_sqrt(int n, int i);
/**
*_sqrt_recursion - function to find the squareroot of a number
*@n:number to calculate the squareroot of
*Return: Always 0 (Success)
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
return (natural_sqrt(n, 0));
}
/**
 *natural_sqrt - function to find squareroot of a number
 *@i: incrementer
 *@n: number of squareroot to calculate root of
 *Return: Always 0 (Success)
 */
int natural_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (natural_sqrt(n, i + 1));
}
