#include "main.h"
#include <string.h>
/**
 * _memset(char *s, char b, unsigned int n) - function that fills memory with a constant byte.
 * @s: input value
 * @b input value
 * @n: input value
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
return (memset(s+n,b,b*sizeof(char)));
}
