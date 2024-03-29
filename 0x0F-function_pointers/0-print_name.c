#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to the name string
 * @f: pointer to a function that takes a char* and returns void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

