#include <stdio.h>
#include "main.h"

/**
 *puts_half - prints half of a string, followed by a new line
 *@str: value to be evaluate.
 *Return: not.
 */
void puts_half(char *str)
{
int word_length = 0;
char *y = str;
int n;
while (*y != '\0')
{
y++;
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
