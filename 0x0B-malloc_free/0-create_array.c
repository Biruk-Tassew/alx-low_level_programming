#include "main.h"
#include <stdlib.h>

/**
 * create_array - a program that creates a dynamic memory allocation
 * filled with a specific character c .
 * @size : size of an array.
 * @c: character.
 * Return: pointer to the Array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;
	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));
	
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
			array[i] = c;
	}
	return (array);
}
