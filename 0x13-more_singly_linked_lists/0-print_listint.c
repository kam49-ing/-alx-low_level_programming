#include "lists.h"
/**
 * print_listint - print all element in the list
 *
 * @h: head of the list
 *
 * Return: number of read nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
