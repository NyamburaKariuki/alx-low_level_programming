#include "main.h"
/**
 *_strspn - function that gets the length of a prefix substring
 *@s:segment of s
 *@accept: bytes
 *Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				x++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (x);
		}
		s++;
		}
		return (x);
}
