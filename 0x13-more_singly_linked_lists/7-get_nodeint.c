#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of  a list.
 * @head: head of the list
 * @index: index of the element to return
 *
 * Return: node of the element at index @index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			node = (listint_t *) malloc(sizeof(listint_t));
			node->n = head->n;
			node->next = NULL;
			return (node);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
