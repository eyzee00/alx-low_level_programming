#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - cracks the password of crackme file
 * all passwords should add up to 2772(0xad4 in hex)
 * return: Always (0) (success)
 */

int main(void)
{
	int sum = 0, tmp = 0, target = 2772, i;
	char password[65] = {0};

	srand((unsigned) time(0));
	for (i = 0; i < 64; i++)
	{
		if((target - sum) > 126)
		{
			tmp = rand() % 51 + 44;
		}
		else if ((target - sum) > 44 && (target - sum) < 126)
		{
			tmp = target - sum;
			password[i] = tmp;
			password[i + 1] = '\0';
			break;
		}
		else
		{
			i = 0;
			sum = 0; 
			continue;
		}
		sum = sum + tmp;
		password[i] = tmp;
		password[i + 1] = '\0';
	}
	printf("%s", password);
	return (0);
}
