#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - first point
 * Return: always 0
 */
int main(void)
{
char alphabet = 'z';
while (alphabet >= 'a')
{
putchar(alphabet);
alphabet--;
}
putchar('\n');
return (0);
}
