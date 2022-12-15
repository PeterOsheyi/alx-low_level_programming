#include "main.h"
/**
 * print_alphabet_x10 - to print the alphabets 10 times
 *
 * Returns: Always 0
 **/
void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_purchar(c);
		}
		_putchar('\n');
	}
}
