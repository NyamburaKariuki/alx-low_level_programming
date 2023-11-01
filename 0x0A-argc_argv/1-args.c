#include "main.h"
#include <stdio.h>
/**
 *main - function to print the number of arguments
 *@argc: number of arguments
 *@argv: pointer to the arguments
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}

