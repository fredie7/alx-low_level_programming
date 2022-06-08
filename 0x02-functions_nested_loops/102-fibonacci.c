#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
long int a;
long int b;
long int c;
long int z;
b = 1;
c = 2;
for (a = 1; a <= 50; ++a)
{
if (b != 20365011074)
{
printf("%ld, ", b);
} else
{
printf("%ld\n", b);
}
z = b + c;
b = c;
c = z;
}
return (0);
}
