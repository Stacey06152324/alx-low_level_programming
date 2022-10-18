#include "main.h"
#include <stdio.h>
/**
*print_array - Function that prints elements of arrays
*@a:This is my firts entry
@*n:This is my seceond entry
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
