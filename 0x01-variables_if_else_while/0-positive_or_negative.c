#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: "this is just for if else while"
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	if (n > 0)
	{
		printf("%dis positive", n);
	}
	else if (n == 0)
	{
		printf("%dis zero", n);
	}
	else if (n < 0)
	{
		printf("%dis negative", n);
	}
	return (0);
}
