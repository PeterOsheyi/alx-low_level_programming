#include "main.h"
#include "stdio.h"

/**
 * _strchr - Locate a Character in a string
 *
 * @s: String
 * @c: Character to locate
 *
 * Return: NULL if not found, Pointer to the memory where found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
