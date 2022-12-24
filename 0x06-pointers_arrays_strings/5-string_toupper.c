#include "main.h"
/**
 * string_toupper - changes all letters to upper cases
 *
 * @s: are the strings to change to uppercases
 *
 * Return: returns uppercase letters
 *
 **/
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if ((*s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
