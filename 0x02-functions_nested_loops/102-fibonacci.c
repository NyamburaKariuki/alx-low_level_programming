#include <stdio.h>
/**
   * main - Entry point
    * Description: printing the first 50 fibonacci numbers
     * Return: Always 0 (Success)
      */
int main(void)
{
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int j;
	int n;

	printf("%lu, ", fib1);
	for (n = 1; n < 50; n++)
	{
		printf("%lu", fib2);
		j = fib1 + fib2;
		fib1 = fib2;
		fib2 = j;
		if (n != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}

