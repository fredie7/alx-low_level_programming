#include "main.h"
/**
 * print_alphabet - Print letters multiple times
 * Description: Print letters multiple times
 * Return: void
 */
void print_alphabet_x10(void)
{
int i;
char alphabet;
for(i = 0; i <= 10; i++)
{
_putchar('\n');
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
}
}
