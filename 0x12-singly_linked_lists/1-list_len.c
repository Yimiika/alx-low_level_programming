#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * @h: This is the single list
 *
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}