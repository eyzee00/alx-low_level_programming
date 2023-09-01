#include <stdio.h>
#include <string.h>
typedef enum boolean{
	false,
	true
}boolean;
/**
 * main - Entry point
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: (1) if less than 2 arguments are received
 * (0) otherwise
 */
int char_to_int(char *s)
{
	boolean isnegative = false;
	int integer = 0, i;
	if (s[0] == '-')
	{
		isnegative = true;
	}
	for (i = 0; i < (int)strlen(s); i++)
	{
		if(s[i] >= 48 && s[i] <= 57)
		{
			integer = (integer * 10) + (s[i] - 48);
		}
	}
	if (isnegative)
		return (integer * (-1));
	else
		return (integer);
}


int main(int argc, char *argv[])
{
	int num1, num2;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = char_to_int(argv[1]);
		num2 = char_to_int(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
}
