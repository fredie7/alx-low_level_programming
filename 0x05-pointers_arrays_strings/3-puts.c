#include "main.h"
#include <unistd.h>

/**
 *_puts - prints a string, followed by a new line, to stdout.
 *@str: value to be evaluate.
 *Return: not.
 */
void _puts(char *str)
{
_putchar(*str + '0');
_putchar('\n');
}
