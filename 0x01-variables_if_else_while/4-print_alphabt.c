#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - first point
 * Return: always 0
 */
int main(void)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
if (alphabet != 'e' && alphabet != 'q')
{
putchar(alphabet);
}
alphabet++;
}
putchar('/n');
return (0);
}
