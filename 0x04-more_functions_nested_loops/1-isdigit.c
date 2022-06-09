#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks for upper case letters
 * @c: the character to check for digits from 0 through 9
 * Description: checks for upper case letters.
 * Return: 1 if c is digit. 0 otherwise
 **/
int _isdigit(int c)
{
return ((c >= 0 && c <= 9));
}
