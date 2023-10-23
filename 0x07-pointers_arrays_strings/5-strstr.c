#include <stdio.h>
#include "main.h"
/**
 **_strstr - Write a function that locates a substring.
 *@haystack: first string
 *@needle: substring
 *Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *ch1 = haystack;
		char *ch2 = needle;

		while (*ch1 == *ch2 && *ch2 != '\0')
		{
			ch1++;
			ch2++;
		}
		if (*ch2 == '\0')
			return (haystack);
	}
	return (NULL);
}
