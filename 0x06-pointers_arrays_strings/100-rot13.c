#include "main.h"
/**
**rot13 - function to encode a string to rot 13
*@str: string to be rotated
*Return: Always 0 (Success)
*/
char *rot13(char *str)
{
	int i, j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data[j])
			{
			str[i] = rot[j];
			break;
			}
		}
	}
	return (str);
}

