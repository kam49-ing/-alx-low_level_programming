#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a given index
 *
 * @head: head of the list
 * @index: index of the element to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *tmp;

	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		node->next = NULL;
		free(node);
		return (1);
	}
	else
	{
		tmp = *head;
		while (tmp != NULL)
		{
			if (i + 1 == index)
			{
				node = tmp->next;
				tmp->next = tmp->next->next;
				node->next = NULL;
				free(node);
				return (1);
			}
			i++;
			tmp = tmp->next;
		}
	}
	return (-1);
}
