#include "main.h"
/**
 * swap_int -swap the value of the two integers
 * @a: poniter to first value
 * @b: pointer ti second value
 */
void swap_int(int *a, int *b)
	{
		int c;

		c = *a;
		*a = *b;
		*b = c;
	}
