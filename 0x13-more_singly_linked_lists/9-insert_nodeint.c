#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given index
 *
 * @head: head of the list
 * @idx: index where the node should be inserted
 * @n: element to be inserted
 *
 * Return: address of the new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp;
	unsigned int i = 0;

	tmp = *head;
	while (tmp != NULL)
	{
		if (i + 1 == idx)
		{
			node = (listint_t *) malloc(sizeof(listint_t));
			if (node == NULL)
				return (NULL);
			node->n = n;
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
