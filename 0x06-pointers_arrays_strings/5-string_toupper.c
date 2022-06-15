#include "main.h"
#include <stdio.h>

/**
 *char *string_toupper -  a function that changes all
 *lowercase letters of a string to uppercase.
 *@p:value to be evaluate.
 *Return: not.
 */
char *string_toupper(char *p)
{
int i;
for (i = 0; p[i] != '\0'; i++)
{
if (p[i] >= 'a' && p[i] <= 'z')
{
p[i] = p[i] - 32;
}
}
printf("%s", p);
return (0);
}
