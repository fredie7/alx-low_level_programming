#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *leet - a function that encodes a string into 1337.
 *@s: sample string to be encoded.
 *Return: s
 */
char *leet(char *s)
{
int len;
int i;
len = strlen(s);
for (i = 0; i < len; i++)
{
if (s[i] == 'a' || s[i] == 'A')
{
s[i] = '4';
}
else if (s[i] == 'e' || s[i] == 'E')
{
s[i] = '3';
}
else if (s[i] == 'o' || s[i] == 'O')
{
s[i] = '0';
}
else if (s[i] == 't' || s[i] == 'T')
{
s[i] = '7';
}
else if (s[i] == 'l' || s[i] == 'L')
{
s[i] = '1';
}
else
{
s[i] = ' ';
}
}
return (s);
}
