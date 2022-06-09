#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @num: number of times the character \ should be printed
 */
void print_diagonal(int num)
{
if (num <= 0)
{
_putchar('\n');
}
else
{
int u, v;
for (u = 0; u < num; u++)
{
for (v = 0; v < num; v++)
{
if (v == u)
_putchar('\\');
else if (v < u)
_putchar(' ');
}
_putchar('\n');
}
}
}
