#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list num;
sum = 0;
if (n == 0)
{
return (0);
}
va_start(num, n);
for (i = 0; i < n; i++)
{
sum += va_arg(num, int);
}
va_end(num);
return (sum);
}
}
