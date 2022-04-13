#include "3-calc.h"
/**
 * get_op_func - entry point
 * @s: get sign to operate
 * Return: NULL if cant do operation
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i <= 5)
	{
		if (*s == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	/* Return NULL if it can't operate */
	return (NULL);
}
