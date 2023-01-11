#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array -Entry point
 * @size: size of the array
 * @c: character
 * Return: a pointer to the array, or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
a = (char *) malloc(size * sizeof(c));
if (a == 0)
{
return (NULL);
}
else
{
i = 0;
while (i < size) /*While for array*/
{
*(a + i) = c;
i++;
}
return (a);
}
}
