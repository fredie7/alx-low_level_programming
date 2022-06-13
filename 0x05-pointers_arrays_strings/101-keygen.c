#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that generates random valid passwords.
 * Return: 0 Always.
 */
int main(void)
{
int result = 0, count = 0;
time_t t;
srand((unsigned int) time(&t));
while (count < 2771)
{
result = rand() % 128;
if ((count + result) > 2771)
break;
count = count + result;
printf("%c", result);
}
printf("%c\n", (2771 - count));
return (0);
}
