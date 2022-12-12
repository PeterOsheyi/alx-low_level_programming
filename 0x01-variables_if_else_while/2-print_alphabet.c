#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: "print in lowercase"
 *
 * Return: Always 0 (Succes)
 *
 **/
int main(void)
{
	char lowerC = 'a';

	for (lowerC = 'a'; lowerC <= 'z'; lowerC++)
		putchar(lowerC);
	putchar('\n');
	return (0);
}
