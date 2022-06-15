#include "main.h"
#include <string.h>
/**
 *char *_strncat - a function that concatenates two strings
 *considering the most n bytes from src
 *@dest: first value to be evaluate.
 *@src: second value to be evaluate.
 *@n: third value to be evaluate.
 *Return: not.
 */
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
