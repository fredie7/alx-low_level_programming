#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @num: print from this number
 */
void print_to_98(int num)
{
int a, b;
if (num <= 98)
{
for (a = num; a <= 98; a++)
{
if (a != 98)
printf("%d, ", a);
else if (a == 98)
printf("%d\n", a);
}
} else if (num >= 98)
{
for (b = num; b >= 98; b--)
{
if (b != 98)
printf("%d, ", b);
else if (b == 98)
printf("%d\n", b);
}
}
}
