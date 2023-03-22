#include "3-calc.h"
/**
 * get_op_func - function that selects the correct function to perform the
 *               operation asked by the user.
 *
 * @s: This is the input
 *
 * Return: This function returns a pointer to the function
 *
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

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
