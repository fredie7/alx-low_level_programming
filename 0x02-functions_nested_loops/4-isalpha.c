#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for upper case letters
 * @alphabet: the character to check for upper case letters
 * Description: checks for upper case letters.
 * Return: 1 if alphabet is upper case. 0 otherwise
 **/
int _isalpha(int alphabet)
{
return (isalpha(alphabet) && isdigit(alphabet));
}
