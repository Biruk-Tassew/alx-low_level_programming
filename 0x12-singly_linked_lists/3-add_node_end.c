#include "lists.h"
/**
 * _strlen - determines thenumber of characters in a string
 * @str: given string
 *
 * Return: the count
 */
int _strlen(const char *str)
{
	int count = 0;

	while (str)
		count++;
	return (count);
}

/**
 * add_node_end - add a node at the end of a linked list
 * @head: the head of the linked list
 * @str: a given string
 *
 * Return: a pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *tmp;
	tmp = *head;

	if (!str)
		return (NULL);

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	(*newnode).next = NULL;
	(*newnode).str = strdup(str);
	if ((*newnode).str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	(*newnode).len = _strlen(str);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while ((*tmp).next)
	{
		tmp = (*tmp).next;
	(*tmp).nex = newnode;
	}
	return (newnode);
}
