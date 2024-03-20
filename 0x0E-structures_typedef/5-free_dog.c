#include "dog.h"
#include <stdlib.h>
/**
  *free_dog - function to free dog
  *@d: pointer to struct dog
  *Return: Always 0 (Success)
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
