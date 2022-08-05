#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _print_char(va_list list);
void _print_int(va_list list);
void _print_float(va_list list);
void _print_str(va_list list);

/**
 * struct selected - struct of character and it's corresponing function
 * to be executed according.
 * @c : the character passed
 * @f : pointed to function to be executed based on 'c' entry
 */
typedef struct selected
{
	char *c;
	void (*f)(va_list list);
} user_select;

#endif
