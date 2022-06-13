#include "main.h"
/**
 *puts2 - prints every other character of a string,
 *starting with the first character
 *@str: value to be evaluate.
 *Return: not.
 */
void puts2(char *str)
{
int i;
while (!(str[i] != '\0'))
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
