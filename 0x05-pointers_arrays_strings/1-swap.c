#include "main.h"

/**
 * swap_int - functions that swap the value of two intergers
 * @a: this is the first entry point
 * @b: this is the second entry point
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
} 
