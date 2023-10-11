#include <stdio.h>
/**
   * main - Entry point
    * Description: printing the sum of even fibonacci's
     * Return: Always 0 (Success)
      */

int main(void)
{
	int fib1 = 1;
	int fib2 = 2;
	int n;
	int sum = 2;
	int max = 4000000;

	while (n <= max)
	{
		n = fib1 + fib2;
		if (n % 2 == 0)
			sum = sum + n;
		fib1 = fib2;
		fib2 = n;
	}
	printf("%d\n", sum);
	return (0);
}
