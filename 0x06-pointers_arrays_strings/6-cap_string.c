#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: pointer
 *
 * Return: 0
 */

char *cap_string(char *s)
{
int i;
for (i = 0; s[i]; ++i)
{
if (i == 0)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
printf("%c", s[i]);
}
}
else if (s[i - 1] == ' ')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
printf("%c", s[i]);
}
}
else
{
printf("%c", s[i]);
}
}
return (0);
}
