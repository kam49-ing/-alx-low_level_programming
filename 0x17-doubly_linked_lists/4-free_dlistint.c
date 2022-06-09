#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t  *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
