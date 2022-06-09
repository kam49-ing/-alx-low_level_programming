#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index where the node should be inserted
 * @n: value that should be added
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp;
	unsigned int i = 0;

	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}

	node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	tmp = *h;

	while (tmp->next != NULL)
	{
		if (i == idx)
		{
			node->prev = tmp->prev;
			node->next = (tmp->prev)->next;
			(tmp->prev)->next = node;
			return (node);
		}
		i++;
		tmp = tmp->next;
	}
	if (i == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
