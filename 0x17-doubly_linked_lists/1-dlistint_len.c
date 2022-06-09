#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: header of the list
 *
 * Return: The number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t n = 0;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		n++;
	}
	return (n);
}
