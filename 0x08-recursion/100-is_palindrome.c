#include "main.h"
/**
 * strLength - returns string length
 * @str: string
 * Return: string length
 */

int strLength(char *str)
{
if (*str == '\0')
{
return (0);
}
else
{
return (1 + strLength(str + 1));
}
}

/**
 * compareStrings - compares each character of the string
 * @str: string
 * @num_1: first integer parameter
 * @num_2: secomd integer parmeter
 * Return: 0
 */

int compareStrings(char *str, int num_1, int num_2)
{
if (*(str + num_1) == *(str + num_2))
{
if (num_1 == num_2 || num_1 == num_2 + 1)
{
return (1);
}
return (0 + compareStrings(str, num_1 + 1, num_2 - 1));
}
return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @str: string
 * Return: 1
 */

int is_palindrome(char *str)
{
if (*str == '\0')
{
return (1);
}
return (compareStrings(str, 0, strLength(str) - 1));
}
