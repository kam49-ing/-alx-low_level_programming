#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *tmp;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		printf("%d\n", tmp->n);
		n++;
	}
	return (n);
}
