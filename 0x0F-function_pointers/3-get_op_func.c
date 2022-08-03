#include "3-calc.h"
#include <stdlib.h>

/**
 * struct op - struct op
 * @op: The operator
 * @f: the function associated
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
}

