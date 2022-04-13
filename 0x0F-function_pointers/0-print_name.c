#include "function_pointers.h"

/**
 * print_name - entry piint from main
 * @name: String of name
 * @f:	Entry to another function
 */
void print_name(char *name, void (*f)(char *n))
{
	if (name != NULL && f != NULL)
		f(name);
}
