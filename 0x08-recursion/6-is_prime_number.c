#include "main.h"

/**
 * prime_scanner - iterates from 2 to num / 2, looking for factors
 * @num: integer
 * @pot_div: potential dividor
 * Return: (0) if num isn't prime, (1) otherwise
 */

int prime_scanner(int pot_div, int num)
{
	if ((num % pot_div == 0) && (num != pot_div))
		return (0);
	if (pot_div > (num / 2) + 5)
		return (1);
	return (prime_scanner(pot_div + 1, num));
}
/**
 * is_prime_number - checks if n is a prime number
 * @n: the integer to be checked
 * Return: Same as prime_scanner
 */
int is_prime_number(int n)
{
	return (prime_scanner(2, n));
}
