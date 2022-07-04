#include "dog.h"
#include <stdlib.h>
/**
 * _init - initializes a variable of type struct dog
 * @d: pointer to an element of type dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 */

void _init(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
;
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
