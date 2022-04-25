#include "lists.h"
/**
 * listint_len - return the number of element in a linked list
 *
 * @h: head of the list
 *
 * Return: number of element in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
