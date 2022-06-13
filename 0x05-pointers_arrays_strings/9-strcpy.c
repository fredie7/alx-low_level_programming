#include<stdio.h>
#include "main.h"

/**
 *_strcpy - function that copies the string pointed to by src.
 *@dest: value to be evaluate.
 *@src: value to be evaluate.
 *Return: not.
 */

char *_strcpy(char *dest, char *src)
{
int a = 0;
int n = 0;
while (*(src + a) != '\0')
{
a++;
}
for ( ; n < a ; n++)
{
dest[n] = src[n];
}
dest[a] = '\0';
return (dest);
}
