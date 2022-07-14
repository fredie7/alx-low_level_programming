#include <stdio.h>

void printItem(void) __attribute__ ((constructor));
/**
 * printItem - print before main
 * Return: nothing
 */

void printItem(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
