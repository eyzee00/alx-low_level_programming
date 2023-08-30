#include "main.h"
/**
 * sqrt_scanner - iterates from 1 to num to find the square root
 * @num: Positive integer
 * @pot_sqrt: potential square root that itterates from 1 to num
 * Return: (-1) if the square root is not found
 * return the result otherwise.
 */
int sqrt_scanner(int pot_sqrt, int num)
{
	if ((pot_sqrt * pot_sqrt) == num)
		return (pot_sqrt);
	if ((pot_sqrt * pot_sqrt) > num)
		return (-1);
	return (sqrt_scanner(pot_sqrt + 1, num));
}
/**
 * _sqrt_recursion - finds the square root of a natural number
 * @n: Positive integer
 * Return: Same as sqrt_scanner
 */
int _sqrt_recursion(int n)
{
	return (sqrt_scanner(1, n));
}
