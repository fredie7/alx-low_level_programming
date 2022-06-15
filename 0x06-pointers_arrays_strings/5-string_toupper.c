#include "main.h"
#include <stdio.h>

/**
 *char *string_toupper -  a function that changes all
 *lowercase letters of a string to uppercase.
 *@n:value to be evaluate.
 *Return: n
 */
char *string_toupper(char *n)
{
int i;
for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - 32;
}
}
return (n);
}
