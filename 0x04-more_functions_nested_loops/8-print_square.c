#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @perimeter: size of the square
 */
void print_square(int perimeter)
{
if (perimeter <= 0)
{
_putchar('\n');
}
else
{
int a, b;
for (a = 0; a < perimeter; a++)
{
for (b = 0; b < perimeter; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
