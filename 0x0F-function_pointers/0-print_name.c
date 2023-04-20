#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints the name
 * @name: name to print
 * @f: function which is print name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
