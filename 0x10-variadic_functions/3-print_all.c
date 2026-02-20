#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;

	struct prnt p[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'0', NULL}};
	const char *p_ptr = format;

	va_start(args, format);
	while (*p_ptr != '\0')
	{
		i = 0;
		while (p[i].c != '0')
		{
			if (p[i].c == *p_ptr)
			{
				p[i].ptr(args);
				if (*(p_ptr + 1) != '\0')
					printf(", ");
			}
			i++;
		}
		p_ptr++;
	}
	va_end(args);
	printf("\n");
}


/**
 * print_string - prints strings
 * @args: variadic argument
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	char *output = (str == NULL) ? "(nil)" : str;

	printf("%s", output);
}


/**
 * print_char - prints characters
 * @args: variadic argument
 */
void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}


/**
 * print_int - prints integers
 * @args: variadic argument
 */
void print_int(va_list args)
{
	int n = va_arg(args, int);

	printf("%d", n);
}


/**
 * print_float - prints float
 * @args: variadic argument
 */
void print_float(va_list args)
{
	float f = va_arg(args, double);

	printf("%f", f);
}

