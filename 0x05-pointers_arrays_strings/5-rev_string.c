#include "main.h"
#include <stdio.h>

/**
 *void rev_string - a function that reverses a string.
 *@s: value to be evaluate.
 *Return: not.
 */
void rev_string(char *s)
{
int word = 0;
int length = 0;
char *reassignedParam = s;
int tmp = 0;
int result;
char n;
while (*reassignedParam != '\0')
{
reassignedParam++;
word++;
}
length = word - 1;
for ( ; tmp < ((length / 2) + 1) ; tmp += 1)
{
result = (length - word);
n = s[tmp];
s[tmp] = s[result];
s[result] = n;
}
}
