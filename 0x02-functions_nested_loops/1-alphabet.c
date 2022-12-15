#include "main.h"
#include "holberton.h"

/**
 * main - check the code
 *
 * print_alphabet - prints alphabet
 *
 * Retrn: Always 0.
 **/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
