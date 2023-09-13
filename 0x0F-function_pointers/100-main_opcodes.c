#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of the main function
 * in hexadecimal lowercase, each opcode is 2 char long
 * @argc: Argument count
 * @argv: Argument vector
 * Return: (0) if successful
 */
int main(int argc, char **argv)
{
	int byte_count, i;
	char *opcode_string;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte_count = atoi(*(argv + 1));
	if (byte_count < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcode_string = (char *)main;
	i = 0;
	while (i < byte_count)
	{
		if (i != byte_count - 1)
			printf("%02hhx ", *(opcode_string + i));
		else
			printf("%02hhx\n", *(opcode_string + i));
		i++;
	}
	return (0);
}
