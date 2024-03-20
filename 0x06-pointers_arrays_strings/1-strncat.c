#include "main.h"
#include <string.h>
/**
**_strncat - function to concatenate 2 strings
*@dest: first string
*@src: our second string
*@n: no og bytes in src
*Return: Always 0 (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr++ = *src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
