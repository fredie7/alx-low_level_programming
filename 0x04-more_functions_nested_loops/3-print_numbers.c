#include "main.h"

/**
 * print_numbers - prints numbers
 * Description: prints numbers
 * Return: void
 */

void print_numbers(void)
{
char a;
a = '0';
while (a <= '9')
{
_putchar(a + '0');
a++;
}
_putchar('\n');
}
