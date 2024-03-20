#include "main.h"

/**
*is_prime_number - function to check if a number is prime
*@n: integer to be checked
*@p: integer to be divide by n
*Return: Always 0 (Success)
*/
int check_prime(int n, int p);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 *check_prime - function numbers <n, if divisible by n
 *@n: our ineger
 *@p: a number less than n, to check for prime
 *Return: Always 0 (Success)
 */
int check_prime(int n, int p)
{
	if (p >= n && n > 1)
	{
		return (1);
	}
	else if (n % p == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, p + 1));
	}
}

