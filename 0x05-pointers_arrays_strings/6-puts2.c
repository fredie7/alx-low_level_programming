#include "main.h"
/**
 *puts2 - prints every other character of a string,
 *starting with the first character
 *@str: value to be evaluate.
 *Return: not.
 */
void puts2(char *str)
{
int word_length = 0;
int num = 0;
char *a = str;
int n;
while (*a != '\0')
{
a++;
word_length++;
}
num = word_length - 1;
for (n = 0 ; n <= num ; n += 1)
{
if (n % 2 == 0)
{
_putchar(str[n]);
}
}
_putchar('\n');
}
