#include "main.h"

/**
 *print_rev -  prints a string, in reverse, followed by a new line.
 *@s: value to be evaluate.
 *Return: not.
 */
void print_rev(char *s)
{
int a;
int rev;
rev = 0;
for (a = 0; *(s + a) != '\0'; a += 1)
{
rev += 1;
}
for (a = rev - 1; a >= 0; a -= 1)
{
_putchar(*(s + a));
}
_putchar('\n');
}
