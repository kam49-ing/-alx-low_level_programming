#include "lists.h"
#include "string.h"

/**
 * add_node - Adds a node to the beginning of a given list
 *
 * @head: head of the list
 * @str: string to be added in the list
 *
 * Return: Head of the new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *dup = strdup(str);

	node = (list_t *) malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = dup;
	node->len = strlen(dup);
	node->next = *head;
	*head = node;

	return (*head);
}
