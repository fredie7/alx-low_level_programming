#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds values
 * @i: first parameter
 * @j: second parameter
 * Return: result
 */

int op_add(int i, int j)
{
return (i + j);
}

/**
 * op_sub - subctracts values
 * @i: first parameter
 * @j: second parameter
 * Return: result
 */

int op_sub(int i, int j)
{
return (i - j);
}

/**
 * op_mul - multiplies values
 * @i: first parameter
 * @j: second parameter
 * Return: result
 */

int op_mul(int i, int j)
{
return (i * j);
}

/**
 * op_div - divides values
 * @i: first value
 * @j: second value
 * Return: result
 */

int op_div(int i, int j)
{
if (j == 0)
{
printf("Error\n");
exit(100);
}
return (i / j);
}

/**
 * op_mod - calculates modulus
 * @i: first value
 * @j: second value
 * Return: result
 */

int op_mod(int i, int j)
{
if (j == 0)
{
printf("Error\n");
exit(100);
}
return (i % j);
}
