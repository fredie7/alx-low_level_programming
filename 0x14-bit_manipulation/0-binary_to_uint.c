#include "main.h"
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: string containing binary number
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int sum = 0;
i = 0;
if (!b)
return (0);
while (b[i])
{
if (b[i] != '0' && b[i] != '1')
return (0);
sum = 2 * sum + (b[i] - '0');
i++;
}
return (sum);
}

