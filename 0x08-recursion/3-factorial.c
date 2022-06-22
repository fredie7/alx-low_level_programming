#include "main.h"
/**
 * factorial -  returns the factorial of a given number.
 * @n: number to evaluate
 * Return; -1
 */
int factorial(int n)
{
if (n <= 1)
{
return (1);
}
else if (n >= 1)
{
return (n * (n - 1));
}
else
{
return (-1);
}
}
