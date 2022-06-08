#include <stdio.h>

/**
 * main - prints the sum of all the multiples
 * of 3 or 5 below 1024. 
 * Return: Always 0 (Success)
 */

int main(void)
{
int result;
int start;
result = 0;
for (start = 0; start < 1024; ++start)
{
if ((start % 3) == 0 || (start % 5) == 0)
{
result = result + start;
}
}
printf("%i\n", result);
return (0);
}
