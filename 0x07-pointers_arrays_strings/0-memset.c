#include "main.h"
/**
 **_memset - function to fill memory with constant byte
 *@s:memory area
 *@b: Constant byte
 *@n: bytes
 *Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
