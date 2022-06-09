#include "lists.h"
/**
 * add_dnodeint_end - Adds node at the end of a doubly linked list
 * @head: head of the list
 * @n: element to add
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (!*head)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
	node->prev = tmp;

	return (node);
}
