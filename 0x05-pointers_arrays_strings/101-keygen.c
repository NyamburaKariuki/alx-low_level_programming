#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* Description: generate random password
* Return: Always 0 (Success)
*/

int main(void)
{
	int p[64];
	int x, y;
	int s = 0;

	srand(time(NULL));
	for (x = 0; x < 64; x++)
	{
		p[x] = rand() % 78;
		s = s + p[x] + '0';
		putchar(p[x] + '0');
		
		if ((2772 - s) - '0' < 78)
		{
			y = 2772 - s -'0';
			s = s + y;
			putchar (y + '0');
			break;
		}
	}
	return (0);
}
