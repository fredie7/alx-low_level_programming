#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @a: pointer
 *
 * Return: string
 */

char *cap_string(char *a)
{
int i;
i = 0;
if (a[0] >= 'a' && a[0] <= 'z')
{
a[0] = a[0] - 32;
}
for (i = 0; a[i] != '\0'; i++)
{
switch (a[i])
{
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
case ' ':
case '\n':
case '\t':
if (a[i + 1] > 96 && a[i + 1] < 123)
{
a[i + 1] = a[i + 1] - 32;
}
}
}
return (a);
}
