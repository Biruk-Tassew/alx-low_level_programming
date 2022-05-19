#include "lists.h"

/**
 * print_list - this function print the values of nodes in a linked list
 * @h: pointer to struct
 *
 * Description: prints all the elements of a list
 * Return: number of nodes
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
