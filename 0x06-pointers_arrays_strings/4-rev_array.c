#include "main.h"
#include <stdio.h>
/**
 *reverse_array -  a function that reverses the
 *content of an array of integers.
 *@a: array of elements.
 *@n: number of elements of the array
 *Return: not.
 */
void reverse_array(int *a, int n)
{
int i;
int *p;
p = &(a[n]);
for (i = 0; i < 6 ; i++)
{
putchar(*p);
p--;
}
}
