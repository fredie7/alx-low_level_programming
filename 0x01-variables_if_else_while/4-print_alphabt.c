#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - first point
 * Return: always 0
 */
int main(void){
char alphabet = 'a';
while(alphabet <= 'd'){
putchar(alphabet);
alphabet++;
}
alphabet = 'f';
while (alphabet <= 'p')
{
putchar(alphabet);
alphabet++;
}
alphabet = 'r';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
return 0;
}
