#ifndef DOG_H
#define DOG_H

/**
 * struct dog - stores some information of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
char *name;
float age;
char *owner;
};
void _init(struct dog *animal, char *name, float age, char *owner);
void _print(struct dog *animal);
typedef struct dog dog_t;
dog_t *_new(char *name, float age, char *owner);
void free_dog(dog_t *animal);
#endif
