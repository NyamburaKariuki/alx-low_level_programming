#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
    *main - main entry
    *@argc: number of arguments
    *@argv: pointer to the arguments
    *Return: Always 0 (Success)
    */
int main(int argc, char *argv[])
{
	int product;

	if (argc < 3 || argc > 3)
	{	printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}


