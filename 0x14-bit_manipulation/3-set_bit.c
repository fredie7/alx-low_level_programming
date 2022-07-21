#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the bit.
 * @index: The index to set the value at.
 *
 * Return: -1 if an error occurs.
 * else - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 32 * 8 || !n)
return (-1);
*n |= 1UL << index;
return (1);
}
