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
int n;
int main(void)
{
	if (n == 0)
	{
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);
	}
	return (0);
}
