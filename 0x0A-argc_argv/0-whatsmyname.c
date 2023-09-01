#include <stdio.h>

/**
 * main - Entry Point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (argc - 1);
}
