#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Coding project
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *next;
} listint_t;

int print_list(const listint_t *h);

#endif
