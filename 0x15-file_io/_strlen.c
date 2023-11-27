#include <unistd.h>
/**
*_strlen - function to get the length of a string
*@s: string
*Return: Always 0 (Success)
*/
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
