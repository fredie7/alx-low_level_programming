#include "main.h"
/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int bit_number;
if (index > 64)
return (-1);
bit_number = (n >> index) & 1;
return (bit_number);
}
