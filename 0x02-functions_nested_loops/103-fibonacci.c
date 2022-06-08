#include <stdio.h>

/**
 * main - Prints the sum of even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
unsigned long int b, c, next, result;
b = 1;
c = 2;
result = 0;
for (a = 1; a <= 33; ++a)
{
if (b < 4000000 && (b % 2) == 0)
{
resukt = result + b;
}
next = b + k;
b = c;
c = next;
}
printf("%lu\n", result);
return (0);
}
