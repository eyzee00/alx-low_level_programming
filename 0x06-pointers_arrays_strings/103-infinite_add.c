#include "main.h"

/**
 * rev_string - reverses the elements in a string
 * @str: the string to be reversed
 * Return: 0
 */

void rev_string(char *str)
{
	int i = 0;
	int j = 0;
	char temp;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, i = 0, j = 0, digits = 0;
	int num1 = 0, num2 = 0, temp_sum = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || carry == 1)
	{
		if (i < 0)
			num1 = 0;
		else
			num1 = n1[i] - 48;
		if (j < 0)
			num2 = 0;
		else
			num2 = n2[j] - '0';
		temp_sum = num1 + num2 + carry;
		if (temp_sum >= 10)
			carry = 1;
		else
			carry = 0;
		if (digits >= (size_r - 1))
			return (0);
		r[digits] = (temp_sum % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	r[digits] = '\0';
	rev_string(r);
	return (r);
}
