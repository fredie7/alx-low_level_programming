/**
 * main - first point
 * Return: always 0
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
int num;
while (num < 10)
{
putchar((num % 10) + '0');
if (num < 9)
{
putchar(44);
putchar(32);
}
num++;
}
putchar('\n');
return (0);
}
