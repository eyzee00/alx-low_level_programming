#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point, takes the change in cents as argument
 * @argc: argument count
 * @argv: argument vector
 * Return: minimum number of coins amounting to change,
 * (1) if argc is not exactly 2
 */

int main(int argc, char *argv[])
{
	int coin_num, cent_amount;
	int coin_set[5] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent_amount = atoi(argv[1]);
	while (cent_amount > 0)
	{
		if (cent_amount - coin_set[4] >= 0)
			cent_amount = cent_amount - coin_set[4];
		else if (cent_amount - coin_set[3] >= 0)
			cent_amount = cent_amount - coin_set[3];
		else if (cent_amount - coin_set[2] >= 0)
			cent_amount = cent_amount - coin_set[2];
		else if (cent_amount - coin_set[1] >= 0)
			cent_amount = cent_amount - coin_set[1];
		else if (cent_amount - coin_set[0] >= 0)
			cent_amount = cent_amount - coin_set[0];
		coin_num++;
	}
	printf("%d\n", coin_num);
	return (0);
}
