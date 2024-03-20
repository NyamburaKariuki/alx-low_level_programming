#include "main.h"
#include <string.h>
/**
 **string_toupper - function to change a string from lower to uppet
 *@str: our string
 *Return: Always 0 (Success)
 */

char *string_toupper(char *str)
{
	char *ptr = str;

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - ('a' - 'A');
}
ptr++;
		}
return (str);
}



