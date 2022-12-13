#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: "size of various types"
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int intType;
	signed long int longLongInt;
	unsigned long int longIntType;
	float floatType;
	char charType;
	/*size of types of data in C*/
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(longIntType));
	printf("Size of long long int: %zu bytes\n", sizeof(longLongInt));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of char: %zu bytes \n", sizeof(charType));
		return (0);
}
