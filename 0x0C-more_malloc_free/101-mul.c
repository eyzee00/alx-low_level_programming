#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * _putchar - prints a character to the screen
 * @n: ascii code of the character
 * Return: void
 */
void _putchar(int n)
{
	write(1, &n, 1);
}
/**
 * is_digit - checks if a string contains only digits
 * @string: the string to be checked
 * Return: (1) if (string) contains only digits, (-1) otherwise
 */
int is_digit(char *string)
{
	unsigned int i;

	for (i = 0; *(string + i) != 0; i++)
	{
		if (*(string + i) < 48 || *(string + i) > 57)
			return (-1);
	}
	return (1);
}
/**
 * init_string - initializes all bytes of string to '0'
 * @string: the string to be initialized
 * @length: the length of the string
 * Return: void
 */
void init_string(char *string, unsigned int length)
{
	unsigned int i;

	for (i = 0; i < length; i++)
		*(string + i) = 48;
}
/**
 * _strlen - calaculates the length of a string
 * @string: the string operated on
 * Return: the length of the string
 */
int _strlen(char *string)
{
	int i = 0;

	for (; *(string + i) != 0; i++)
		;
	return (i);
}
/**
 * reverse - reverses the string passed
 * @string: the string to be reversed
 * @length: the length of the string
 * Return: void
 */
void reverse(char *string, int length)
{
	char *tmp;
	int i, j;

	tmp = malloc(length);
	if (tmp == NULL)
		printf("Error\n");
	for (i = 0; *(string + i) != 0; i++)
		*(tmp + i) = *(string + i);
	for (j = i - 1, i = 0; j >= 0; i++, j--)
		*(string + j) = *(tmp + i);
	free(tmp);
}
/**
 * _puts - prints a string to the stdout
 * @string: the string to be printed
 * Return: void
 */
void _puts(char *string)
{
	unsigned int i;

	for (i = 0; *(string + i) != 0; i++)
		_putchar(*(string + i));
	_putchar('\n');
}
/**
 * zero_purge - removes zeroes from the string passed
 * @string: the string operated on
 * @length: the length of the string
 * Return: a pointer to the resulting string
 */
char *zero_purge(char *string, int length)
{
	char *purged;
	int i, j;

	for (i = 0; *(string + i) == 48 && *(string + i) != 0; i++)
		;
	if (length - i == 0)
	{
		purged = malloc(2 * sizeof(char));
		*purged = 48;
		*(purged + 1) = 0;
		return(purged);
	}
	else
		length = length - i;
	purged = malloc(length * sizeof(char) + 1);
	for (j = 0; j < length; j++, i++)
		*(purged + j) = *(string + i);
	*(purged + i) = 0;
	return (purged);
}
/**
 * zero_scanner - checks for the that zeroes have to be purged
 * @string: the string to be checked
 * @length: the length of the string
 * Return: pointer to the resulting string
 */
char *zero_scanner(char *string, int length)
{
	int i;
	char *result;

	if (*string == 48 && length != 1)
		result = zero_purge(string, length);
	else if (*string == 48 && length == 1)
	{
		result = malloc(length + 1);
		if (result == NULL)
			_puts("Error");
		*result = 48;
		*(result + 1) = 0;
	}
	else
	{
		result = malloc(length + 1);
		if (result == NULL)
			_puts("Error");
		for (i = 0; i < length; i++)
			*(result + i) = *(string + i);
		*(result + i) = 0;
	}
	return (result);
}
/**
 * infinite_mul - multiplies the two strings passed to the function
 * @str1: the first string, representing a number
 * @str2: the second string, representing another number
 * @str1_len: the length of the first string
 * @str2_len: the length of the second string
 * Return: a pointer to the resulting string
 */
char *infinite_mul(char *str1, char *str2, int str1_len, int str2_len)
{
	char *result;
	int product, carry = 0, digit = 0, res_len, i, j, k = 0;

	res_len = str1_len + str2_len + 1;
	result = malloc(res_len * sizeof(char));
	if (result == NULL)
		_puts("Error");
	init_string(result, res_len);
	i = str2_len - 1;
	for (; i >= 0 && k < (str1_len + str2_len); i--, digit++)
	{
		j = str1_len - 1;
		for (k = digit; j >= 0; j--, k++)
		{
			carry = 0;
			product = (str1[j] - 48) * (str2[i] - 48);
			if (product > 9)
				carry += product / 10;
			product = product % 10;
			if (((result[k] - 48) + product) > 9)
			{
				carry = carry + 1;
				result[k] = result[k] + (product - 10);
			}
			else
				result[k] = result[k] + product;
			result[k + 1] += carry;
		}
	}
	if (result[k] == 48)
		result[k] = 0;
	else
		result[k + 1] = '\0';
	return (result);
}
/**
 * main - uses all the above functions to multiply the passed arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) if successful
 */
int main(int argc, char **argv)
{
	char *number1, *number2, *result;
	int res_len, arg_len1, arg_len2;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	if (is_digit(*(argv + 1)) == -1 || is_digit(*(argv + 2)) == -1)
	{
		_puts("Error");
		exit(98);
	}
	arg_len1 = _strlen(*(argv + 1));
	arg_len2 = _strlen(*(argv + 2));
	number1 = zero_scanner(*(argv + 1), arg_len1);
	if (*number1 == 48)
	{
		_puts("0\n");
		return (0);
	}
	number2 = zero_scanner(*(argv + 2), arg_len2);
	if (*number2 == 48)
	{
		_puts("0\n");
		return (0);
	}
	arg_len1 = _strlen(number1);
	arg_len2 = _strlen(number2);
	if (arg_len2 < arg_len1)
		result = infinite_mul(number1, number2, arg_len1, arg_len2);
	else
		result = infinite_mul(number2, number1, arg_len2, arg_len1);
	res_len = _strlen(result);
	reverse(result, res_len);
	_puts(result);
	free(result);
	free(number1);
	free(number2);
	return (0);
}
