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
long alpha = '0';
while (num < 10)
{
putchar((num % 10) + alpha);
num++;
}
putchar('\n');
return (0);
}
