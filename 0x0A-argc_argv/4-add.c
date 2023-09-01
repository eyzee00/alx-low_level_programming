#include <stdio.h>
#include <string.h>
/**
 * char_to_int - converts a string of digits to an integer
 * @s: the string of numbers to convert
 * Return: an integer extracted from the string
 */
int char_to_int(char *s)
{
	int integer = 0, i;

	for (i = 0; i < (int)strlen(s); i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			integer = (integer * 10) + (s[i] - 48);
		}
		else
			return (-1);
	}

	return (integer);
}
/**
 * main - Entry Point
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) Success, (-1) otherwise
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (char_to_int(argv[i]) < 0)
		{
			printf("Error\n");
			return (-1);
		}
		else
		{
			sum += char_to_int(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
