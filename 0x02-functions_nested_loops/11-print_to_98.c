#include "main.h"
/**
 * void print_to_98 - Prints all natural numbers before 98
 * @c: the character to check for
 * Description: Prints all natural numbers before 98
 * Return: all natural numbers before 98
 **/
void print_to_98(int c)
{
int i;
i = 0;
c = 98;
while (i<c){
_putchar((i + '0'));
_putchar(44);
_putchar(32);
i++;
}
}
