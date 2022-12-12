#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: "Printing last digit of number"
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("%d Last digit of",n "%d is",lastDigit, "%d and is greater than 5");
	}
	else if (lastDigit == 0)
	{
		printf("%d Last digir of",n "%d is",lastDigit, "%d and is 0");
	}
	else if (lastDigit < 6 != 0)
	{
		printf("%d Last digit of",n "%d is",lastDigit "%d and is less than 6 and not 0");
	}
	return (0);
}
