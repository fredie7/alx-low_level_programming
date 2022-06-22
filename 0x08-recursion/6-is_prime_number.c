#include "main.h"
/**
 * primeNumber - determines a prime number
 * @i: bigger number
 * @j: smaller number
 * Return: prime number
 */
int primeNumber(int i, int j)
{
if (i < 2 || j % i == 2)
{
return (0);
}
else if (i > j / 2)
{
return (1);
}
else
{
return (primeNumber(i + 1, j));
}
}

/**
 * is_prime_number - determines a prime number
 * @n: number parameter
 * Return: prime number
 */
int is_prime_number(int n)
{
if (n == 2)
{
return (1);
}
else
{
return (primeNumber(2, n));
}
}
