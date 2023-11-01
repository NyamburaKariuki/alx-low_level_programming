#include <stdio.h>
#include "main.h"
/**
    *main - function to print the name of the programme
    *@argc: arguments
    *@argv: an array of passed to the function
    *Return: Always 0 (Success)
    */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
