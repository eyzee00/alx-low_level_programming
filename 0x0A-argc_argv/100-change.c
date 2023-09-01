#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point, takes change as argument
 * @argc: argument count
 * @argv: argument vector
 * Return: minimum number of coins amounting to change
 */
int main(int argc, char **argv)
{
	int coin_num = 0, tmp_amount = atoi(argv[1]), i, coins[5] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (tmp_amount > coins[4])
	{
		while(tmp_amount >= coins[4])
			tmp_amount = tmp_amount - coins[4], coin_num++;
	}
	if (tmp_amount < coins[4] && tmp_amount > coins[3])
	{
		while(tmp_amount >= coins[3])
			tmp_amount = tmp_amount - coins[3], coin_num++;
	}
	if (tmp_amount < coins[3] && tmp_amount > coins[2])
	{
		while(tmp_amount >= coins[2])
			tmp_amount = tmp_amount - coins[2], coin_num++;
	}
	if (tmp_amount < coins[2] && tmp_amount > coins[1])
	{
		while (tmp_amount >= coins[1])
			tmp_amount = tmp_amount - coins[1], coin_num++;
	}
	for (i = 0; i < 5; i++)
	{
		if (tmp_amount == coins[i])
		{
			coin_num++;
			break;
		}
	}
	printf("%d\n", coin_num);
	return (0);
}
