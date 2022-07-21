#include "main.h"
/**
 * clear_bit - sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: index to set the value
 *
 * Return: -1 if an error occurs.
 * else - 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 8 * 32 || !n)
return (-1);
*n &= ~(1 << index);
return (1);
}
