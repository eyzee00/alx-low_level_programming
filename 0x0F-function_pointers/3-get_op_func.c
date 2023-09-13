#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - finds the function corresponding to the
 * operator given by the user
 * @s: the operator given by the user
 * Return: a pointer to the right function for the given
 * operator, (NULL) if the operator given is not supported
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*s == *(ops[i].op) && s[0] != 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
