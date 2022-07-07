#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list num;
sum = 0;
i = 0;
if (n == 0)
{
return (0);
}
va_start(num, n);
while (i < n)
{
sum += va_arg(num, int);
i++;
}
va_end(num);
return (sum);
}
