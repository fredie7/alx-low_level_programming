#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *rev_string - a function that reverses a string.
 *@s: value to be evaluate.
 *Return: not.
 */
void rev_string(char *s)
{
int i;
int word_length;
int result;
word_length = strlen(s);
for (i = 0; i < word_length / 2; i++)
{
result = s[i];
s[i] = s[word_length - i - 1];
s[word_length - i - 1] = result;
}
}
