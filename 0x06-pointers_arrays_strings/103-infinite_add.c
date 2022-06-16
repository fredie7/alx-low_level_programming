#include "main.h"
/**
 * infinite_add -  adds two numbers
 * @n1: first parameter
 * @n2: second parameter
 * @r: expected result
 * @size_r: expected result length
 * Return: sum
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int a = 0, b = 0, c, l = 0, f, s, d = 0;
while (n1[a] != '\0')
a++;
while (n2[b] != '\0')
b++;
if (a > b)
l = a;
else
l = b;
if (l + 1 > size_r)
return (0);
r[l] = '\0';
for (c = l - 1 ; c >= 0 ; c--)
{
a--;
b--;
if (a >= 0)
f = n1[a] - '0';
else
f = 0;
if (b >= 0)
s = n2[b] - '0';
else
s = 0;
r[c] = (f + s + d) % 10 + '0';
d = (f + s + d) / 10;
}
if (d == 1)
{
r[l + 1] = '\0';
if (l + 2 > size_r)
return (0);
while (l-- >= 0)
r[l + 1] = r[l];
r[0] = d + '0';
}
return (r);
}
