#include "main.h"
/**
 **infinite_add - function to add 2 numbers
 *@n1: character 1
 *@n2: Character 2
 *@r: character
 *@size_r: size
 *Return: Always 0 (Success)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int o = 0;
	int i = 0;
	int j = 0;
	int d = 0;
	int val1 = 0;
	int val2 = 0;
	int t = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || o == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		t = val1 + val2 + o;
		if (t >= 10)
			o = 1;
		else
			o = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (t % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
	return (0);
	*(r + d) = '\0';
	return (r);
}

