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
	int n, lDigit a=5, b=0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	lDigit = n % 10;
	if (lDigit > 5)
	{
		printf("%d Last digit of", n);
		printf("%d is", lDigit);
		printf("%d and is greater than ", a);
	}
	else if (lDigit == 0)
	{
		printf("%d Last digit of", n);
	       printf("%d is", lDigit);
	       printf("%d and is \n", b);
	}
	else if (lDigit < 6 != 0)
	{
	7	printf("%d Last digit of", n);
		printf("%d is", lDigit);
		printf("%d and is less than 6 and not ", b);
	}
	return (0);
}
