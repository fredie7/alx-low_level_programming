/**
 * main - first point
 * Return: always 0
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
int hexNum;
while (hexNum < 16)
{
printf("%x", hexNum);
hexNum++;
}
putchar('\n');
return (0);
}
