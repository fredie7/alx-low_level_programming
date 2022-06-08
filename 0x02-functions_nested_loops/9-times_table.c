#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: no return
 */
void times_table(void)
{
int a;
int b;
int c;
int z;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
z = b * a;
if (b == 0)
{
_putchar(z + '0');
}
if (z < 10 && b != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(z + '0');
} else if (z >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
}
_putchar('\n');
}
}
