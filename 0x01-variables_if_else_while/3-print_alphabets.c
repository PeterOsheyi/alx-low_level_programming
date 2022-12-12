#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: "print in lowercase"
 *
 *
 * Return: Always 0 (Succes)
 *
 **/
int main(void)
{
	char lowerC = 'a';
	char upperC = 'A';

	for (lowerC = 'a'; lowerC <= 'z'; lowerC++)
		putchar(lowerC);
		putchar('\n');
	for (upperC = 'A'; upperC <= 'Z'; upperC++)
		putchar(upperC);
	return (0);
}
