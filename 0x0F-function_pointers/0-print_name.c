#include "function_pointers.h"
/**
 * print_name -prints a name
 * @name :the nmae to be printed
 * @f: a pointers to a functions that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NUL)
		return;

	f(name);
}
