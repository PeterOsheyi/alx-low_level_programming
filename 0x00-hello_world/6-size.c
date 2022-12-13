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
	printf("Size of a char: %zu byte(s) \n", sizeof(charType));
	printf("Size of an int: %zu byte(s) \n", sizeof(intType));
	printf("Size of a long int: %zu byte(s) \n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s) \n", sizeof(longLongInt));
	printf("Size of a float: %zu byte(s) \n", sizeof(floatType));
		return (0);
}
