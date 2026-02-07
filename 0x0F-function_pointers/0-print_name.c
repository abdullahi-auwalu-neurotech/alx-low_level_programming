#include "func_ptr.h"

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: pointer to the function that'll do the printing
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *s))
{
	f(name);
}
