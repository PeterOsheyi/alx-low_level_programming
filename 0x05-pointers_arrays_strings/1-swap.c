#include "main.h"

/**
 * swap_int-Swaps the values of 2 integers.
 * @a: is First argument to be swapped.
 * @b: is second argument to be swapped.
 * Return:
 **/

void swap_int(int *a, int *b)
{
		int p = *a;

			*a = *b;
				*b = p;
}
