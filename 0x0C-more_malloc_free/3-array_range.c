#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int i, l;
	int *loc;

	if (min > max)
		return (NULL);
	len = max - min + 1;
/* dynamic memory space allocation */
	loc = malloc(sizeof(int) * len);
/* memory allocation fail exit */
	if (loc == NULL)
		return (NULL);
/*filling the array with numbers from min to max */
	for (i = min; i <= max; i++)
	{
		loc[i - min] = i;
	}

	return (loc);
}
