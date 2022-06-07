#include "main.h"

/**
 * print_alphabet - Print lower case letters
 * Description: Print lower case letters
 * Return: void
 */

void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
