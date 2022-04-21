#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds an element at the end of the list
 *
 * @head: the head of the given list
 * @str: string to be added
 *
 * return: Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *node;

	node = (list_t *) malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		tmp = *head;
		while (tmp && tmp->next)
			tmp = tmp->next;

		tmp->next = node;
	}

	return (node);
}
