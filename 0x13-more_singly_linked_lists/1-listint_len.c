#include "lists.h"

/**
 * listint_len - prints all the elements of list
 * @h: linked list to print
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
