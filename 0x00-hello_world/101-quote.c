#include<stdio.h>
/**
 * main - Entry point, prints a string to standard error
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
char  error[61] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(error, 61, 1, stderr);
return (1);
}
