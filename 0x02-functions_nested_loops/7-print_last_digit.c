#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
int result;
if (num < 0)
{
num = -num;
result = num % 10;
}
if (result < 0)
{
result = -result;
_putchar(result + '0');
}
return (result);
}
