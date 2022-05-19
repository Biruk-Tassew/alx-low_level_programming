#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - count the nodes in the linked lisst
 * @str: string to be sounted
 *
 * Return: length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int count;

	for (count = 0; str[count]; count++)
		;
	return (count);
}
/**
 * add_node - add a node to the beginning of a linked list
 * @head: double pointer to the head of a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (str == NULL)
		return (NULL);

	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	(*newnode).len = _strlen((*newnode).str);
	(*newnode).next = *head;
	*head = newnode;
	return (newnode);
}
