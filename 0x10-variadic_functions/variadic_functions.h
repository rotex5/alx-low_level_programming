#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

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
