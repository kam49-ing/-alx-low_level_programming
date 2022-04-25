#include "lists.h"
/**
 * reverse_listint - reverses the list
 *
 * @head: head of the list
 *
 * Return: The reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	prev = NULL;
	next = NULL;
	while ((*head) != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;
	return (*head);
}
