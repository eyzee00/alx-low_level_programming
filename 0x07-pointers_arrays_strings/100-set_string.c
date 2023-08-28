#include "main.h"

/**
 * set_string - sets the value of s to the address of to
 * @s: the pointer to be modified
 * @to: the address s is set to
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
