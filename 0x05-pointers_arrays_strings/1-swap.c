#include "main.h"

/**
 * swap_int - swaps integers
 *
 * @a: this is my first entry point
 * @b: second entry point
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
