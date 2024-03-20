#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
    *main - entry point
    *@argc: number of arguments
    *@argv: pointers to the arguments
    *Return: Always 0 (Success)
    */
int main(int argc, char *argv[])
{
	int total, count;
	unsigned int i;
	char *ptr;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = strtol(argv[1], &ptr, 10);
	count = 0;
	if (!*ptr)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (total >= cents[i])
					{
					count += total / cents[i];
					total = total % cents[i];
					}
			}
		}
		if (total == 1)
		count++;
	}
	else
	{
	printf("Error\n");
	}
	printf("%d\n", count);
	return (0);
}
