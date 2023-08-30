#include "main.h"

/**
 * _pow_recursion - calculates x raised to the power of y
 * @x: integer
 * @y: positive integer
 * Return: -1 if y < 0, the result of the calculation otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
