#include "lists.h"
/**
 * free_listint2 - frees the list
 *
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	tmp1 = *head;
	while (tmp1 != NULL)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		free(tmp2);
	}
	*head = NULL;
}
