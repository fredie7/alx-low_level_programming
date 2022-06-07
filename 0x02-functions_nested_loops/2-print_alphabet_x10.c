#include "main.h"
/**
 * print_alphabet - Print letters multiple times
 * Description: Print letters multiple times
 * Return: void
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
