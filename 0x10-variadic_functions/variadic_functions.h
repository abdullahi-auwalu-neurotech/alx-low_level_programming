#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC

#include <stdarg.h>

/**
 * struct prnt - defines elements to be used as format specifiers
 * @c: format character
 * @ptr: function pointer
 */
struct prnt
{
	char c;
	void (*ptr)(va_list);
};

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

#endif /*VARIADIC_FUNC*/
