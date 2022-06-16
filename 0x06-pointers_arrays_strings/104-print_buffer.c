#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
int o, z, w;
o = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (o < size)
{
z = size - o < 10 ? size - o : 10;
printf("%08x: ", o);
for (w = 0; w < 10; w++)
{
if (w < z)
printf("%02x", *(b + o + w));
else
printf("  ");
if (w % 2)
{
printf(" ");
}
}
for (w = 0; w < z; w++)
{
int c = *(b + o + w);
if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
o += 10;
}
}
