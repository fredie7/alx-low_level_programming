#include "main.h"

/**
 * squareRoot - returns the natural square root of a number.
 * @i: root
 * @j: number
 * Return: square root
 **/
int squareRoot(int i, int j)
{
if (j * j == i)
{
return (j);
}
else if (j * j > i)
{
return (-1);
}
else
{
return (squareRoot(i, j + 1));
}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: root parameter
 * Return: suare root
 */
int _sqrt_recursion(int n)
{
return (squareRoot(n, 1));
}
