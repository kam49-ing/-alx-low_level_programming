#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all element in a given linked list
 *
 * @h: the head of the given list
 *
 * Return: Number of element read
 */
size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	if (!h)
		return (-1);
	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)");
			break;
		}
		printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
