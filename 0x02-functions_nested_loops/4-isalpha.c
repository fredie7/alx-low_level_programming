#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for upper case letters
 * @c: the character to check for upper case letters
 * Description: checks for upper case letters.
 * Return: 1 if alphabet is upper case. 0 otherwise
 **/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
