#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: total length of the argements
 * @argv: arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{
if (**argv != '\0')
{
printf("%d\n", argc - 1);
}
return (0);
}
