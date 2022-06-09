#include "lists.h"
/**
 * add_dnodeint - Adds a node at the beginning of a doubly linked list
 * @head: The head of the list
 * @n: Value to add
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head)
		(*head)->prev = node;
	*head = node;
	return (node);
}
