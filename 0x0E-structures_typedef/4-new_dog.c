#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: pointer for dog's name
 * @age: pointer for dog's age
 * @owner: owner
 * Return: pointer to a new dog of type dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
int name_Length, owner_Length, i;
dog_t *d;
d = (dog_t *)malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
name_Length = owner_Length = 0;
while (name[name_Length++])
;
while (owner[owner_Length++])
;
d->name = malloc(name_Length *sizeof(d->name));
if (d->name == NULL)
{
free(d);
return (NULL);
}
for (i = 0; i <= name_Length; i++)
d->name[i] = name[i];
d->age = age;
d->owner = malloc(owner_Length * sizeof(d->owner));
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for (i = 0; i <= owner_Length; i++)
d->owner[i] = owner[i];
return (d);
}

