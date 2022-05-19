#include "lists.h"

/**
 * print_list - this function print the values of nodes in a linked list
 * @h: pointer to struct
 *
 * Description: prints all the elements of a list
 * Return: number of nodes
 */
int print_list(const listint_t *h)
{
	int count=0;

	while (h)
	{
		if (count > 0)
			printf(", ");
		printf("%d", h->n);
		++i;
		h = h->next;
	}
	printf("\n");
	return (count);
}
