#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function which prints a struct dog
 * @animal: pointer to the element of type dog
 * Return: nothing
 */

void print_dog(struct dog *animal)
{
if (animal != NULL)
{
printf("Name: %s\n", (animal->name == NULL) ? "(nil)" : animal->name);
printf("Age: %.6f\n", animal->age);
printf("Owner: %s\n", (animal->owner == NULL) ? "(nil)" : animal->owner);
}
}
