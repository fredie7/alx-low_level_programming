#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function which prints a name
 * @name: pointer to char
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
