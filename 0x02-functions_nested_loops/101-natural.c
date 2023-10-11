#include <stdio.h>
/**
   * main - Entry point
    * Description: adding the sums of multiples of 3
     * Return: Always 0 (Success)
      */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j = j + i;
	}
	printf("%d\n", j);
	return (0);
}
