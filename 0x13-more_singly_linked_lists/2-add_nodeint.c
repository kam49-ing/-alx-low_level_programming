#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning of the list
 * @head: head of the list
 * @n: new element to add
 *
 * Return: address of the new element or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *) malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = (*head);
	(*head) = node;
	return (node);
}
