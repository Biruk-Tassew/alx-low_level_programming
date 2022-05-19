#include "lists.h"

/**
 *free_list - this function frees the memory held by linked list 
 *@head: pointer pointed to the start of the list .
 *Return: void
 */
void free_list(list_t *head)
{
	while (head)
	{
		free((*head).str);
		free(head);
		head = (*head).next;
	}
}
