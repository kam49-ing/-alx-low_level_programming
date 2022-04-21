#include "lists.h"
#include "string.h"

/**
 * add_node - Adds a node to the beginning of a given list
 *
 * @head: head of the list
 * @str: string to be added in the list
 *
 * Return: Address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = (list_t *) malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (node);
}
