#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: "printing hexadecimals"
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	char hex;
	int num;

	for (num = '0'; num >= '9'; num++)
		putchar(num);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
