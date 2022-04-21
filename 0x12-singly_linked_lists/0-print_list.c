#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all element in a given linked list
 *
 * @h: the head of the given list
 *
 * Return: Number of element read
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			break;
		}
		printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
