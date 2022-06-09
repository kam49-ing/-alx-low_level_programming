#include "lists.h"
/**
 * sum_dlistint - sums all data in a doubly linked list
 * @head: head of the list
 * Return: The sum or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
