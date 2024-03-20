#include "main.h"
#include <string.h>
/**
**_strcat - function to concatenate 2 strings
*@dest: our string
*@src: Second string
*Return: Always 0 (Success)
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
