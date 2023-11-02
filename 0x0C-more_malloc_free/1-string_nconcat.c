#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
    *_strlen - function to check the length of a string
    *@s: string
    *Return: Always 0 (Success)
    */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
    **string_nconcat - function to concatenate 2 strings
    *@s1: first string
    *@s2: second string
    *@n: string length
    *Return: Always 0 (Success)
    */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int nm, ln, i, j;

	nm = n;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (nm < 0)
		return (NULL);
	if (nm >= _strlen(s2))
		nm = _strlen(s2);
	ln = _strlen(s1) + nm + 1;
	p = malloc(sizeof(*p) * ln);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < nm; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';
	return (p);
}
