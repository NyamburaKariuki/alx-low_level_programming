#include <stdlib.h>
#include "function_pointers.h"

/**
*print_name - function that prints a name
*@name: name of a person to be printed
*@f:function pointer
*Return: Always 0 (Success)
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
