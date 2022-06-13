#include<stdio.h>
#include "main.h"

/**
 *print_array - function that prints n elements of an array of integers.
 *@a: first parameter to be evaluate.
 *@n: second parameter to be evaluate.
 *Return: not.
 */

void print_array(int *a, int n)
{
int j;
for (j = 0 ; j < n; j++)
{
printf("%d", a[j]);
if (j != n - 1)
{
printf(", ");
}
}
printf("\n");
}
