#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @animal: pointer to a dog of type dog_t
 * Return: nothing
 */

void free_dog(dog_t *animal)
{
if (animal != NULL)
{
free(animal->name);
free(animal->owner);
free(animal);
}
}
