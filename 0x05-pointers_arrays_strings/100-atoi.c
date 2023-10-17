#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
*_atoi - function to convert a string into an integer
*@s : string to be changed into integer
*Return: Always 0 (Success)
*/


int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
	sign = -1;
	i++;
	}
	else if (s[0] == '+')
	{
	i++;
	}
	for (; s[i] != '\0'; ++i)
	{
		if (isdigit(s[i]))
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
	}
	return (sign * result);
}
