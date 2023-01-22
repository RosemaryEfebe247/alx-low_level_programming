#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Function to print name
 * @name: The name entered
 * @f: The pointer to the function to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
