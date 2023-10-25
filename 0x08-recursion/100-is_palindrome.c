#include "main.h"
/**
 *last - function to check the last character s
 *@s:string
 *Return: Always 0 (Success)
 */
int is_palindrome(char *s);
int check(char *s, int x, int y, int p);
int last(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n = n + last(s + 1) + 1;
	}
return (n);
}
/**
 *is_palindrome - to check characters
 *@s: our string
 *Return: Always 0 (Success)
 */
int is_palindrome(char *s)
{
	int y = last(s);

	return (check(s, 0, y - 1, y % 2));
}
/**
*check - function to check for palindrome
*@s: string
*@x: our start character
*@p: an integer
*@y: our last character
*Return: Always 0 (Success)
 */
int check(char *s, int x, int y, int p)
{
	if ((x == y && p != 0) || (x == y + 1 && p == 0))
	{
		return (1);
	}
	else if (s[x] != s[y])
	{
		return (0);
	}
	else
	{
		return (check(s, x + 1, y - 1, p));
	}
}

