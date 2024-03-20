#include "dog.h"
#include <stdlib.h>

/**
    *_strlen - function to check the length of a string
    *@str: string to check
    *Return: Always 0 (Success)
    */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
    *_strcpy - function to copy string pointed by src
    *@dest: buffer where we copy string pointed by SRC
    *@src: pointer to a string
    *Return: Always 0 (Success)
    */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
	len++;
	}

for (i = 0; i < len; i++)
{
	dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
 *new_dog - function to create a new dog
 *@name: name of the new dog
 *@age: age of the new dog
 *@owner: owner of the new dog
 *Return: Always 0 (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * (len1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);

	}
	d->owner = malloc(sizeof(char) * (len2 + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
