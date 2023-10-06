#include <stdio.h>
/**
   * main - Entry point
    * Description: printing the alphabet
     * Return: Always 0 (Success)
      */
int main(void)
{
	int up = 65;
	int lo = 97;

	while (lo <= 122)
	{
		putchar(lo);
		lo++;
	}

	while (up <= 90)
	{
		putchar(up);
		up++;
	}
	putchar('\n');
	return (0);
}
