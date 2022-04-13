#include "main.h"
/**
*print_alphabet - s function that prints the alphabet, in lowercase
*
*Return: always 0
*/
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
