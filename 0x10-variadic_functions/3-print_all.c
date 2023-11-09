#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_all - function to print anything
 *@format: any format
 *Return: Always 0 (Success
 */
void print_all(const char * const format, ...)
{
	va_list any;
	int i = 0;
	char *str;
	char *separator = "";

	va_start(any, format);
		if (format)
		{
			while (format && format[i] != '\0')
			{
				switch (format[i])
				{
					case 'c':
						printf("%s%c", separator, va_arg(any, int));
						break;
					case 'i':
						printf("%s%d", separator, va_arg(any, int));
						break;
					case 'f':
						printf("%s%f ", separator, va_arg(any, double));
						break;
					case 's':
						str = va_arg(any, char *);
					if (str == NULL)
					{
					str = "(nil)";
					}
					printf("%s%s ", separator, str);
					break;
					default:
					i++;
					continue;
				}
				separator = ", ";
				i++;
			}
		}
	printf("\n");
	va_end(any);
}
