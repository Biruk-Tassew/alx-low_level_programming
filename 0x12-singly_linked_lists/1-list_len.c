#include "lists.h"

/**
 * list_len - gives the nuber of the nodes in a linked list
 * @h: the head of the linked list
 *
 * Return: the length of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
