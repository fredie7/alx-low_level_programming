#include "main.h"

/**
 * _atoi -  convert a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
unsigned int num = 0, temp = 0, a = 0, b = 1, m = 1, i;
while (*(s + num) != '\0')
{
if (temp > 0 && (*(s + num) < '0' || *(s + num) > '9'))
break;
if (*(s + num) == '-')
b *= -1;
if ((*(s + num) >= '0') && (*(s + num) <= '9'))
{
if (temp > 0)
m *= 10;
temp++;
}
num++;
}
for (i = num - temp; i < num; i += 1)
{
a = a + ((*(s + i) - 48) * m);
m /= 10;
}
return (a * b);
}
