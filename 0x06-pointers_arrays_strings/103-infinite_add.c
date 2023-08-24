#include "main.h"
/**
 * infinite_add - performs addition on n1 and n2
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to result
 * @size_r: The size of the result string
 * Return: 0 if buffer small to store result, 
 * returns a pointer to result (r) otherwise
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int lim1, lim2, tmplim, rlim, i, sum, num1, num2, carry;
	char tmp[100000];

	rlim = i = lim1 = lim2 = sum = num1 = num2 = carry = 0;
	while (n1[lim1] != '\0')
		lim1++;
	while (n2[lim2] != '\0')
		lim2++;
	if (lim1 + 2 > size_r || lim2 + 2 > size_r)
		return (0);
	lim1--;
	lim2--;
	while (i <= lim1 || i <= lim2)
	{
		num1 = num2 = 0;
		if (i <= lim1)
			num1 = n1[lim1 - i] - 48;
		if (i <= lim2 && (lim2 - i) >= 48)
			num2 = n2[lim2 - i] - 48;
		sum = num1 + num2 + carry;
		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		r[i] = sum + 48;
		i++;
		rlim++;
	}
	if (carry > 0)
	{
		r[i] = carry + 48;
		r[i + 1] = '\0';
	}
	i = tmplim = 0;
	while (i <= rlim)
	{
		tmp[i] = r[rlim - i];
		tmplim++;
		i++;
	}
	i = 0;
	while (i < tmplim)
	{
		if (r[i] == '\0')
		{
			break;
		}
		r[i] = tmp[i];
		i++;
	}
	return (r);
}
