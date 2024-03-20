#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - function to return sum of parameters
 *@n: number of parameters
 *Return: Always 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);
	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, const unsigned int);
			va_end(ap);
	}
		return (sum);
}
