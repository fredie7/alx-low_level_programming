#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *string, *separator = "";
va_list num;
va_start(num, format);
if (format)
{
while (format[i])
{
if (format[i] == 'c')
{
printf("%s%c", separator, va_arg(num, int));
}
else if (format[i] == 'i')
{
printf("%s%d", separator, va_arg(num, int));
}
else if (format[i] == 'f')
{
printf("%s%f", separator, va_arg(num, double));
}
else if (format[i] == 's')
{
string = va_arg(num, char *);
if (!string)
string = "(nil)";
printf("%s%s", separator, string);
}
else
{
i++;
}
separator = ", ";
i++;
}
}
printf("\n");
va_end(num);
}
