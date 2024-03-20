#include "main.h"
/**
 **_memcpy - function that copies memory area
 *@dest: destination memory
 *@src: original memory area
 *@n: no pf bytes to be copied
 *Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}

