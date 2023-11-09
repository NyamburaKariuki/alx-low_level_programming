#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - function to print numbers followed by a separator
 *@separator: separator
 *@n:no of numbers
 *Return: Always 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, const unsigned int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}


