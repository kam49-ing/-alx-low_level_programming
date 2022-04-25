#include "lists.h"
/**
 * pop_listint - deletes the head node of the list
 * @head: head of the list
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	if (head == NULL)
		return (0);

	node = *head;
	n = node->n;
	*head = (*head)->next;
	free(node);

	return (n);
}
