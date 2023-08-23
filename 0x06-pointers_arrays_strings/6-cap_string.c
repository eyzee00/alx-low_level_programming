#include "main.h"
#include <string.h>
#include <stdbool.h>

/**
 * cap_string - capitalizes all words of the passed string
 * @str: string to be altered
 * Return: pointer to the string (str)
 */

char *cap_string(char *str)
{
	int i, str_len = (int)strlen(str), j;
	char cap_triggers[13] = {9, 10, 32, 44, 46, 59, 33, 34, 63, 40, 41, 123, 125};
	bool istrigger = false;

	for (i = 0; i < str_len; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (str[i - 1] == cap_triggers[j])
					{
						istrigger = true;
						break;
					}
				}
				if (istrigger)
					str[i] = str[i] - 32;
			}
		}
		istrigger = false;
	}
	return (str);
}
