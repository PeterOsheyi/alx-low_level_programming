#include "main.h"

/**
 * main - check the code
 *
 * Description: "print_alphabet - prints alphabet"
 *
 * Return: Always 0.
 **/
void print_alphabet(void)
{
	char lCase;

	for (lCase = 'a'; lCase <= 'z'; lCase++);
	{
		_putchar(lCase);
	}
	_putchar('\n');
}
