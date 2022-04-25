#include "lists.h"
/**
 * add_nodeint_end - Adds a node at the end of the list
 * @head: head of the list
 * @n: new element to be added
 *
 * Return: address of the new element or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	node = (listint_t *) malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (node);
}
