#include <stdio.h>

/**
   * main - Entry point
    * Description: print the largest prime factor of 612852475143
     * Return: Always 0 (Success)
      */

int main(void)
{
	long int a, b, n;

	n = 612852475143;
	for (a = 1; a <= n; a++)
	{
		if (n % a == 0)
		{
			if (n == a)
			{
				printf("%ld\n", a);
				break;
			}
			b = n / a;
			n = b;
		}
	}
	return (0);
}
