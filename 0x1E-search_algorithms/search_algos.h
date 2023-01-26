#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

void print_array(int a[], int l, int r);

#endif
