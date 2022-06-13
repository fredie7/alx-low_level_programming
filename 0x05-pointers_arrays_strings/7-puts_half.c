#include <stdio.h>
#include "main.h"
/**
 *puts_half - a function that prints half of a string.
 *@str: value to be evaluate.
 *Return: not.
 */
void puts_half(char *str)
{
int word_length = 0;
char *a = str;
int n;
while (*a != '\0')
{
a++;
word_length++;
}
if (word_length % 2 == 0)
{
n = word_length / 2;
}
else
{
n = (word_length + 1) / 2;
}
for ( ; n < word_length ; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
