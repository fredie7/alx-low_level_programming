#include "main.h"
/**
 * main - check the code
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int letter;
int n;
n = 0;
while (n < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
n++;
_putchar('\n');
}
}
