#include "function_pointers.h"

/**
 * print_name - function that prints the name.
 * @name: string to be printed
 * @f: array of pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
