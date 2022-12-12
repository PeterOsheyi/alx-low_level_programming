#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: "Printing last digit of number"
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	int lDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	lDigit = n % 10;
	printf("Last digit of %d is ", n);
	if (lDigit > 5)
	{
		printf("%d and is greater than 5\n", lDigit);
	}
	else if (lDigit == 0)
	{
	       printf("%d and is 0\n", lDigit);
	}
	else if (lDigit < 6 && lDigit != 0)
	{
		printf("%d and is less than 6 and not 0\n", lDigit);
	}
		return (0);
}
