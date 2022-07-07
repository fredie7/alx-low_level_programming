#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
va_list num;
unsigned int i = 0, j, c = 0;
char *string;
const char t_arg[] = "cifs";
va_start(num, format);
while (format && format[i])
{
j = 0;
while (t_arg[j])
{
if (format[i] == t_arg[j] && c)
{
printf(", ");
break;
} j++;
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(num, int)), c = 1;
break;
case 'i':
printf("%d", va_arg(num, int)), c = 1;
break;
case 'f':
printf("%f", va_arg(num, double)), c = 1;
break;
case 's':
string = va_arg(num, char *), c = 1;
if (!string)
{
printf("(nil)");
break;
}
printf("%s", string);
break;
} i++;
}
printf("\n"), va_end(num);
}
