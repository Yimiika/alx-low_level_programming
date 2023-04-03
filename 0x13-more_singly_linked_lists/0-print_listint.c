#include "lists.h"
/**
 * print_listint - This function prints all the elements
 * @h: The entry
 * Return: This returns the number the nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}
	return (count);
}
