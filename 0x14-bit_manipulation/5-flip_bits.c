#include "main.h"
/**
* flip_bits - returns the number of bits needed to be flipped to get
* from one number to another
* @n: the number to be converted to m
* @m: number
* Return: number of bits needed to be flipped to get from one number to another
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i = n ^ m;
unsigned int count;
for (count = 0; i > 0; count++)
{
i &= (i - 1);
}
return (count);
}
