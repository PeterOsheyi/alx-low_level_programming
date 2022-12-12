#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: "Reversal of small letters"
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	char back = 'z';

	for (back = 'z'; back >= 'a'; back--)
		putchar(back);
	putchar('\n');
	return (0);
}
