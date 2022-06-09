#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * Description: prints numbers from 0 to 9
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
