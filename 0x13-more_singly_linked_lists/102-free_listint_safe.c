#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	if (!h || !(*h))
		return (count);

	while (*h)
	{
		if (*h <= (*h)->next)
		{
			free(*h);
			count++;
			break;
		}

		temp = (*h)->next;
		free(*h);
		count++;
		*h = temp;

		if (!*h)
			break;

		if (*h >= (*h)->next)
		{
			free(*h);
			count++;
			break;
		}

		temp = (*h)->next;
		free(*h);
		count++;
		*h = temp;
	}

	*h = NULL;

	return (count);
}
