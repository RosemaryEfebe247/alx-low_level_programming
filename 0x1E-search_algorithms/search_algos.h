#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * size - size of struct
 * size_t: the typedef of struct name
 * a: the struct integer
 * p: The pointer to the array
 */ 
typedef struct size {
	int a;
	struct size *p;
} list_t;
int linear_search(int *array, size_t size, int value);
#endif
