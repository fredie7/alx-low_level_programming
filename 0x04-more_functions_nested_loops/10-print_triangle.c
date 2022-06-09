#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @n: size of the triangle
 */
void print_triangle(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int a, b;
for (a = 1; a <= n; a++)
{
for (b = a; b < n; b++)
{
_putchar(' ');
}
for (b = 1; b <= a; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
