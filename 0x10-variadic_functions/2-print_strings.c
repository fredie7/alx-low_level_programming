#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator in-between strings
 * @n: number of strings passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *string;
va_list num;
va_start(num, n);
i = 0;

while (i < n)
{
string = va_arg(num, char *);
string != NULL ? printf("%s", string) : printf("(nil)");
if (!(separator == NULL) && i != n - 1)
{
printf("%s", separator);
}
i++;
}
va_end(num);
printf("\n");
}
