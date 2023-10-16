#include "main.h"
/**
**_strcpy - function to copy string
*@dest: destination string
*@src: string to be copied
*Return: Always 0 (Success)
*/
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}
