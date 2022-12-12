#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: "program to print single numbers"
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int num = '0';

	for (num = '0'; num <= '9'; num++)
		printf("%d\n", num);
	return (0);
}
