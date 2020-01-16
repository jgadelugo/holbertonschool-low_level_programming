#ifndef SEARCH_ALGORITHM
#define SEARCH_ALGORITHM

#include <stdio.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif /*SEARCH_ALGORITHM*/
