#include <stdio.h>
#include "main.h"
/**
 * print_array - to print the n element from an array of integers.
 * @a: the input array.
 * @n: input n elements
 * Return: no return.
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
