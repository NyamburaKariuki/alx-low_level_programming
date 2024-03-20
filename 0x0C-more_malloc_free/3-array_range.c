#include "main.h"
#include <stdlib.h>
/**
    **array_range - function to print array from min to max
    *@min: minimum integer
    *@max: maximum integer
    *Return: Always 0 (Success)
    */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		p[i] = min + i;
	}
return (p);
}



