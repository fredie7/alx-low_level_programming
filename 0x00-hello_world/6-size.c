#include <stdio.h>
/**
 * main - first point
 * Return: always 0
 */
int main(void)
{
char char_capacity;
int int_capacity;
long int longInt_capacity;
long long int longLongInt_capacity;
float float_capacity;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char_capacity));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int_capacity));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)
sizeof(longInt_capacity));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)
sizeof(longLongInt_capacity));
printf("Size of a float: %lu byte(s)\n", (unsigned long)
sizeof(float_capacity));
return (0);
}

