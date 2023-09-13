#ifndef __CALC__H__
#define __CALC__H__
/**
 * struct op - operator of choice structure
 * @op: the operator
 * @f: the function associated with the operator
 * Return: void
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int (*get_op_function(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
