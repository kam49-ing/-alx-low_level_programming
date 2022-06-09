#include "lists.h"
/**
 * get_dnodeint_at_index- gets node at a given index
 * @head: the head of the list
 * @index: index of the node that should be gotten
 * Return: The node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
