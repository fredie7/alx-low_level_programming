#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: string
 */
char *rot13(char *s)
{
int p;
int q;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (p = 0; s[p] != '\0'; p++)
{
for (q = 0; a[q] != '\0'; q++)
{
if (s[p] == a[q])
{
s[p] = b[q];
break;
}
}
}
return (s);
}
