#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *malloc_checked - function that allocates memory using malloc.
 *@b: unsigned int
 *Return: VOID Pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;
	pointer = malloc(b);
	if (pointer == NULL)
	exit(98);
	return (pointer);
}
