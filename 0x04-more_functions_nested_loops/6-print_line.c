#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @a: represents number of times the character _ should be displayed
 */
void print_line(int a)
{
if (a <= 0)
{
_putchar('\n');
} else
{
int z;
for (z = 1; z <= n; z++)
{
_putchar('_');
}
_putchar('\n');
}
}
