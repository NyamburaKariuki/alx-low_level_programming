#include "dog.h"
#include <stdlib.h>
/**
    *init_dog - function to initialize dog struct
    *@d: pointer to the struct
    *@name: name to initialize with
    *@age: age to initialize with
    *@owner: owner to initialize with
    *Return: Always 0 (Success)
    */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

