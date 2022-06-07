#include "main.h"
/**
 * print_alphabet_x10 - prints lower case letters 10 times
 * Description: prints loweer case letters 10 times
 * Return: 0
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
